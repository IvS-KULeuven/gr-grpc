/* -*- c++ -*- */
/* 
 * Copyright 2017 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <gnuradio/io_signature.h>
#include <iostream>
#include <memory>
#include <string>
#include "source_impl.h"

#include "data_streamer.grpc.pb.h"
#include "data_streamer.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using grpc::ClientReader;
using namespace datastreamer;

namespace gr {
  namespace grpc_blocks {

    source::sptr
    source::make()
    {
      return gnuradio::get_initial_sptr
        (new source_impl());
    }

    /*
     * The private constructor
     */
    source_impl::source_impl()
      : gr::sync_block("source",
              gr::io_signature::make(0, 0, 0),
              gr::io_signature::make(1, 1, sizeof(float))), reader_(DataStreamer::NewStub(grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()))->RequestData(new ClientContext(), Request()))
    {}

    /*
     * Our virtual destructor.
     */
    source_impl::~source_impl()
    {
        Status status = reader_->Finish();
    }

    int
    source_impl::work(int noutput_items,
        gr_vector_const_void_star &input_items,
        gr_vector_void_star &output_items)
    {
      float *out = (float *) output_items[0];
      int c(0);

      // Do <+signal processing+>
      // Container for the data we expect from the server.
      Reply reply;
      while (reader_->Read(&reply)) {
          std::cout << "Float received: "
                      << std::to_string(reply.message()) << std::endl;
          out[c] = reply.message();
          c++;
          if (c == 100) break;
      }

      // Tell runtime system how many output items we produced.
      return c;
    }

  } /* namespace grpc_blocks */
} /* namespace gr */

