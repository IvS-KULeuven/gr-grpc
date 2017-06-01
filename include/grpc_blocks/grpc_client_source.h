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


#ifndef INCLUDED_GRPC_BLOCKS_CLIENT_SOURCE_H
#define INCLUDED_GRPC_BLOCKS_CLIENT_SOURCE_H

#include <grpc_blocks/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace grpc_blocks {

    /*!
     * \brief <+description of block+>
     * \ingroup grpc_blocks
     *
     */
    class GRPC_BLOCKS_API grpc_client_source : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<grpc_client_source> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of grpc_blocks::source.
       *
       * To avoid accidental use of raw pointers, grpc_blocks::source's
       * constructor is in a private implementation
       * class. grpc_blocks::source::make is the public interface for
       * creating new instances.
       */
      static sptr make(size_t itemsize, char *address);
    };

  } // namespace grpc_blocks
} // namespace gr

#endif /* INCLUDED_GRPC_BLOCKS_SOURCE_H */

