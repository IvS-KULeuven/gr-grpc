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

#include <grpc_blocks/sink.h>
#include <boost/thread/thread.hpp>
#include <grpc++/server.h>
#include "radio.grpc.pb.h"
#include "radio.pb.h"

using grpc::ServerWriter;
using grpc::Server;

// using radio::Request;
using radio_rpc::Float;

namespace gr {
  namespace grpc_blocks {

    class sink_impl : public sink
    {
     private:
      boost::thread* server_thread;
      std::unique_ptr<Server> server_;
      void run_server();
     
    public:
      
      ServerWriter<Float>* server_writer = nullptr;
      sink_impl();
      ~sink_impl();

      // Where all the action really happens
      int work(int noutput_items,
         gr_vector_const_void_star &input_items,
         gr_vector_void_star &output_items);
    };

  } // namespace grpc_blocks
} // namespace gr

#endif /* INCLUDED_GRPC_BLOCKS_SINK_IMPL_H */

