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
//#include "config.h"
#endif

#include <iostream>
#include <memory>
#include <string>


#include <grpc/grpc.h>
#include <grpc++/server_builder.h>
#include <grpc++/server_context.h>

#include "data_streamer.server.h"
#include <boost/thread/thread.hpp>
#include <gnuradio/io_signature.h>
#include "data_streamer.grpc.pb.h"

#include "sink_impl.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;

using datastreamer::Request;
using datastreamer::Reply;
using datastreamer::DataStreamer;

namespace gr {
  namespace grpc_blocks {
      
    void sink_impl::run_server(){
       std::string server_address("0.0.0.0:50051");

        DataStreamerImpl service(this);

        // Wait for the server to shutdown. Note that some other thread must be
        // responsible for shutting down the server for this call to ever return.
        ServerBuilder builder;
        // Listen on the given address without any authentication mechanism.
        builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
        // Register "service" as the instance through which we'll communicate with
        // clients. In this case it corresponds to an *synchronous* service.
        builder.RegisterService(&service);
        // Finally assemble the server.
        server_ = builder.BuildAndStart();
        std::cout << "Server listening on " << server_address << std::endl;
        server_->Wait();
    }

    sink::sptr
    sink::make()
    {
     return gnuradio::get_initial_sptr
       (new sink_impl());
    }

    /*
     * The private constructor
     */
    sink_impl::sink_impl()
      : gr::sync_block("sink",
              gr::io_signature::make(1, 1, sizeof(float)),
              gr::io_signature::make(0, 0, 0))
    {
        std::cout << "Server construct 1" << std::endl;
        server_thread = new boost::thread(boost::bind(&sink_impl::run_server, this));
        std::cout << "Server construct 2" << std::endl;
    }

    /*
     * Our virtual destructor.
     */
    sink_impl::~sink_impl()
    {
        server_->Shutdown();
        delete server_thread;
    }

    int
    sink_impl::work(int noutput_items,
        gr_vector_const_void_star &input_items,
        gr_vector_void_star &output_items)
    {
      

      // Do <+signal processing+>


        const float *in = (const float *) input_items[0];
        for (int i = 0; i < noutput_items; i++){
            if (server_writer != nullptr){
                Reply reply;
                std::cout << "Writing to GRPC" << std::endl;
                reply.set_message(in[i]);
                server_writer->Write(reply);
            }
        }
            
      
      // Tell runtime system how many output items we produced.
      return noutput_items;
    }

  } /* namespace grpc_blocks */
} /* namespace gr */
