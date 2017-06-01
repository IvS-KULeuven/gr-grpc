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
from time import sleep

class qa_sink (gr_unittest.TestCase):

    def setUp (self):
        self.tb = gr.top_block ()

    def tearDown (self):
        self.tb = None

    def test_001_t (self):
        # set up fg
        print("create grpc client source")
        mysource = grpc_client_source(gr.sizeof_float, "")
        sleep(1)
        dst = blocks.vector_sink_f()
        self.tb.connect(mysource, dst)
        print("start tb client")
        self.tb.start ()
        sleep(10)
        print(dst.data())
        print("stop tb client")
        self.tb.stop()
        #self.tb.wait()
        print(dst.data())

        # check data


if __name__ == '__main__':
    gr_unittest.run(qa_sink, "qa_sink.xml")
