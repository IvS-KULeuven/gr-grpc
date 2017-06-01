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

#ifndef INCLUDED_GRPC_BLOCKS_SINK_IMPL_H
#define INCLUDED_GRPC_BLOCKS_SINK_IMPL_H

#include <grpc_blocks/grpc_server_sink.h>
#include <boost/thread/thread.hpp>
#include <grpc++/grpc++.h>

#include "grgrpc.grpc.pb.h"

using grpc::ServerReaderWriter;
using grpc::Server;

// using radio::Request;

using grgrpc::GRData;
using grgrpc::Empty;
using grgrpc::GNURadioLink;

namespace gr {
  namespace grpc_blocks {

    class grpc_server_sink_impl : public grpc_server_sink
    {
     private:
      boost::thread* server_thread;
      std::unique_ptr<Server> server_;

      void run_server();
      char *address_;
      size_t itemsize_;
     
    public:
      
      //ServerWriter<GRData>* server_writer = nullptr;
      grpc_server_sink_impl(size_t itemsize, char *address);
      ~grpc_server_sink_impl();

      // Where all the action really happens
      int work(int noutput_items,
         gr_vector_const_void_star &input_items,
         gr_vector_void_star &output_items);
      
      std::condition_variable cv;
      std::mutex m;
      bool is_ready;
      ServerReaderWriter<GRData,GRData>* server_reader_writer = nullptr;
    };

  } // namespace grpc_blocks
} // namespace gr

#endif /* INCLUDED_GRPC_BLOCKS_SINK_IMPL_H */

