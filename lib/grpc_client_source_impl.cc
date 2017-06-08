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
#include <gnuradio/tags.h>
#include <gnuradio/sync_block.h>
#include <gnuradio/block.h>

#include <iostream>
#include <memory>
#include <string>
#include "grpc_client_source_impl.h"

#include "grgrpc.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

using grgrpc::GRData;
using grgrpc::Empty;
using grgrpc::GNURadioLink;

using namespace grgrpc;

namespace gr
{
namespace grpc_blocks
{

grpc_client_source::sptr
grpc_client_source::make ( size_t itemsize, char *address, char *code )
{
  return gnuradio::get_initial_sptr
         ( new grpc_client_source_impl ( itemsize, address, code ) );
}


/*
 * The private constructor
 */
grpc_client_source_impl::grpc_client_source_impl ( size_t itemsize, char *address , char *code )
  : gr::sync_block ( "grpc_client_source",
                     gr::io_signature::make ( 0, 0, 0 ),
                     gr::io_signature::make ( 1, 1, itemsize ) )

{
  itemsize_ = itemsize;
  code_ = code;
  stub_ = GNURadioLink::NewStub ( grpc::CreateChannel ( address, grpc::InsecureChannelCredentials() ) );

  client_reader_writer_ = stub_->RequestData ( new ClientContext() );
  StatusData init;
  init.set_code ( code_ );
  client_reader_writer_->Write ( init );
  items_produced_ = 0;
}

/*
 * Our virtual destructor.
 */
grpc_client_source_impl::~grpc_client_source_impl()
{
  //Status status = reader_->Finish();
}

int
grpc_client_source_impl::work ( int noutput_items,
                                gr_vector_const_void_star &input_items,
                                gr_vector_void_star &output_items )
{

  uint8_t *out = ( uint8_t * ) output_items[0];
  int i = 0;
  tag_t d_tag;

  GRData reply;


  if ( client_reader_writer_->Read ( &reply ) )
    {

      for ( auto m_byte: reply.m_byte() )
        {
          const char *test = m_byte.c_str();
          memcpy ( ( void* ) ( out + ( i * itemsize_ ) ), test, itemsize_ );
          i++;
        }
      for ( auto mytag: reply.tag() )
        {
          d_tag.key = pmt::deserialize_str ( mytag.key() );
          d_tag.value = pmt::deserialize_str ( mytag.value() );
          d_tag.srcid = pmt::deserialize_str ( mytag.srcid() );
          d_tag.offset = mytag.offset() + items_produced_;

          //gr::block::add_item_tag(0, d_tag);
          add_item_tag ( 0, d_tag );
        }

      items_produced_ += i;

      return i;
    }
  else
    {
      return 0;
    }

}

} /* namespace grpc_blocks */
} /* namespace gr */

// kate: indent-mode cstyle; indent-width 2; replace-tabs on; 
