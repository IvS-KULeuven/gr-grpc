#!/usr/bin/env python
# -*- coding: utf-8 -*-
# 
# Copyright 2017 <+YOU OR YOUR COMPANY+>.
# 
# This is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3, or (at your option)
# any later version.
# 
# This software is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this software; see the file COPYING.  If not, write to
# the Free Software Foundation, Inc., 51 Franklin Street,
# Boston, MA 02110-1301, USA.
# 

from gnuradio import gr, gr_unittest
from gnuradio import blocks
from grpc_blocks_swig import grpc_server_sink
from grpc_blocks_swig import grpc_client_source
from grpc_blocks_swig import grpc_client_sink
from time import sleep

class qa_sink (gr_unittest.TestCase):

    def setUp (self):
        self.tb = gr.top_block ()

    def tearDown (self):
        self.tb = None

    def test_001_t (self):
        src_data = (-3, 4, -5.5, 2, 3)
        src = blocks.vector_source_f(src_data)

        print("create grpc client source")
        mysink = grpc_client_sink(gr.sizeof_float, "")
        self.tb.connect(src, mysink)
        sleep(1)

        print("start tb client")
        self.tb.start ()
        sleep(10)
        self.tb.stop()
        #self.tb.wait()

        # check data


if __name__ == '__main__':
    gr_unittest.run(qa_sink, "qa_sink.xml")
