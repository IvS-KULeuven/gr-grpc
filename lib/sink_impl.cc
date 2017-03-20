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

#include "sink_impl.h"
#include <grpc/grpc.h>
#include <grpc++/server_builder.h>
#include <grpc++/server_context.h>
#include "data_streamer.server.h"
#include <boost/thread/thread.hpp>
#include <gnuradio/io_signature.h>

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;

namespace gr {
  namespace grpc_blocks {
      
    void run_server(boost::shared_ptr<Server> server){
        // Wait for the server to shutdown. Note that some other thread must be
        // responsible for shutting down the server for this call to ever return.
        server->Wait();
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
              gr::io_signature::make(0, 1, sizeof(float)),
              gr::io_signature::make(0, 0, 0))
    {
        std::string server_address("0.0.0.0:50051");
        DataStreamerImpl service = DataStreamerImpl(this);

        ServerBuilder builder;
        // Listen on the given address without any authentication mechanism.
        builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
        // Register "service" as the instance through which we'll communicate with
        // clients. In this case it corresponds to an *synchronous* service.
        builder.RegisterService(&service);
        // Finally assemble the server.
        server = boost::shared_ptr<Server>(builder.BuildAndStart());
        std::cout << "Server listening on " << server_address << std::endl;
        server_thread = new boost::thread(run_server, server);
    }

    /*
     * Our virtual destructor.
     */
    sink_impl::~sink_impl()
    {
        server->Shutdown();
        delete server_thread;
    }

    int
    sink_impl::work(int noutput_items,
        gr_vector_const_void_star &input_items,
        gr_vector_void_star &output_items)
    {
      

      // Do <+signal processing+>

        if (server_writer){
            const float *in = (const float *) input_items[0];
            for (int i = 0; i < noutput_items; i++){
                Reply reply;
                reply.set_message(in[i]);
                server_writer->Write(reply);
            }
        }
            
      
      // Tell runtime system how many output items we produced.
      return noutput_items;
    }

  } /* namespace grpc_blocks */
} /* namespace gr */