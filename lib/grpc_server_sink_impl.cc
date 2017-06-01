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


#include <grpc++/grpc++.h>
#include <condition_variable>

#include <boost/thread/thread.hpp>
#include <gnuradio/io_signature.h>
#include "grgrpc.grpc.pb.h"
//
#include "grpc_server_sink_impl.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::ServerWriter;
using grpc::ServerReader;
using grpc::ServerReaderWriter;
using grpc::Status;
using grgrpc::GRData;
using grgrpc::Empty;
using grgrpc::GNURadioLink;

namespace gr
{
namespace grpc_blocks
{
class GNURadioLinkServiceImpl final : public GNURadioLink::Service
{
public:
    
  GNURadioLinkServiceImpl(grpc_server_sink_impl* gr_sink)
  {
    gr_sink_ = gr_sink;
  }
  
  Status SendData ( ServerContext* context, ServerReaderWriter<GRData,GRData>* server_reader_writer ) override
  {
    //std::string prefix("Hello ");
    //reply->set_message("foobar");
    //reply->set_message(prefix + request->name());
      gr_sink_->server_reader_writer = server_reader_writer;
      gr_sink_->is_ready = false;
       std::cout << "New GRPC client " << std::endl;
      std::unique_lock<std::mutex> lk(gr_sink_->m);
      while (!gr_sink_->is_ready)
    {
        gr_sink_->cv.wait(lk);
        if (!gr_sink_->is_ready)
            std::cout << "Spurious wake up!\n";
    }
      
    return Status::OK;
  }
private:
  grpc_server_sink_impl *gr_sink_;
};

void grpc_server_sink_impl::run_server()
{
  std::string server_address ( "0.0.0.0:50051" );

  GNURadioLinkServiceImpl service(this);

  // Wait for the server to shutdown. Note that some other thread must bemessage
  // responsible for shutting down the server for this call to ever return.
  ServerBuilder builder;
  // Listen on the given address without any authentication mechanism.
  builder.AddListeningPort ( server_address, grpc::InsecureServerCredentials() );
  // Register "service" as the instance through which we'll communicate with
  // clients. In this case it corresponds to an *synchronous* service.
  builder.RegisterService ( &service );
  // Finally assemble the server.
  server_ = builder.BuildAndStart();
  std::cout << "Server listening on " << server_address << std::endl;
  server_->Wait();
}

grpc_server_sink::sptr
grpc_server_sink::make(size_t itemsize, char *address)
{
  return gnuradio::get_initial_sptr
         ( new grpc_server_sink_impl(itemsize, address) );
}

/*
 * The private constructor
 */
grpc_server_sink_impl::grpc_server_sink_impl(size_t itemsize, char *address)
  : gr::sync_block ( "grpc_server_sink",
                     gr::io_signature::make ( 1, 1, itemsize ),
                     gr::io_signature::make ( 0, 0, 0 ) )
{
  itemsize_ = itemsize;
  address_ = address;
  server_thread = new boost::thread ( boost::bind ( &grpc_server_sink_impl::run_server, this ) );
  
}

/*
 * Our destructor
 */
grpc_server_sink_impl::~grpc_server_sink_impl()
{
  server_->Shutdown();
  std::unique_lock<std::mutex> lk(m);
  is_ready = true;
  cv.notify_one();
  delete server_thread;
}

int
grpc_server_sink_impl::work ( int noutput_items,
                              gr_vector_const_void_star &input_items,
                              gr_vector_void_star &output_items )
{
   for ( int i = 0; i < noutput_items; i++ )
    {
      if ( server_reader_writer != nullptr )
        {
          GRData reply;
//                 std::cout << "Writing to GRPC" << std::endl;
          //reply.m_byte(). ( &input_items, itemsize_ );
          //reply.set_m_byte((uint8_t*) ((uint8_t*)input_items[0] + (i * itemsize_)), itemsize_);
          //server_writer->Write ( reply );
          server_reader_writer->Write(reply);
        }
    }


  // Tell runtime system how many output items we produced.
  return noutput_items;
}

} /* namespace grpc_blocks */
} /* namespace gr */
