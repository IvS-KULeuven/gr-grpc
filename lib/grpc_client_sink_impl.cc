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
#include "grpc_client_sink_impl.h"

#include "grgrpc.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using grpc::ClientReader;

using grpc::Status;
using grgrpc::GRData;
using grgrpc::Empty;
using grgrpc::GNURadioLink;
using grgrpc::Tag;
using namespace grgrpc;

namespace gr
{
namespace grpc_blocks
{

grpc_client_sink::sptr
grpc_client_sink::make ( size_t itemsize, char *address, char *code )
{
  return gnuradio::get_initial_sptr
         ( new grpc_client_sink_impl ( itemsize, address, code ) );
}


/*
 * The private constructor
 */
grpc_client_sink_impl::grpc_client_sink_impl ( size_t itemsize, char *address, char *code )
  : gr::sync_block ( "grpc_client_sink",
                     gr::io_signature::make ( 1, 1, itemsize ),
                     gr::io_signature::make ( 0, 0, 0 ) )

{
  itemsize_ = itemsize;
  code_ = code;
  stub_ = GNURadioLink::NewStub ( grpc::CreateChannel ( address, grpc::InsecureChannelCredentials() ) );



  client_reader_writer_ = stub_->PublishData ( new ClientContext() );
  GRData init;
  init.set_type ( GRData::PUBLISH );
  init.set_code ( code_ );
  client_reader_writer_->Write ( init );
}

/*
 * Our virtual destructor.
 */
grpc_client_sink_impl::~grpc_client_sink_impl()
{


}

int
grpc_client_sink_impl::work ( int noutput_items,
                              gr_vector_const_void_star &input_items,
                              gr_vector_void_star &output_items )
{
  GRData reply;
  if ( client_reader_writer_ != nullptr )
    {
      for ( int i = 0; i < noutput_items; i++ )
        {
          reply.add_m_byte ( ( uint8_t* ) ( ( uint8_t* ) input_items[0] + ( i * itemsize_ ) ), itemsize_ );
        }
      std::vector<gr::tag_t> tags;
      get_tags_in_range ( tags, 0, nitems_read ( 0 ), nitems_read ( 0 ) + noutput_items );
      for ( size_t i=0; i<tags.size(); i++ )
        {
          gr::tag_t t = tags[i];
          grgrpc::Tag* mytag = reply.add_tag();;
          mytag->set_offset ( t.offset - nitems_read ( 0 ) );
          mytag->set_key ( pmt::serialize_str ( t.key ) );
          mytag->set_value ( pmt::serialize_str ( t.value ) );
          mytag->set_srcid ( pmt::serialize_str ( t.srcid ) );

        }

      client_reader_writer_->Write ( reply );
    }



  return noutput_items;
}

} /* namespace grpc_blocks */
} /* namespace gr */

// kate: indent-mode cstyle; indent-width 2; replace-tabs on; 
