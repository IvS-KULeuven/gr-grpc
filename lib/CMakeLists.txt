# Copyright 2011,2012,2016 Free Software Foundation, Inc.
#
# This file is part of GNU Radio
#
# GNU Radio is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3, or (at your option)
# any later version.
#
# GNU Radio is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with GNU Radio; see the file COPYING.  If not, write to
# the Free Software Foundation, Inc., 51 Franklin Street,
# Boston, MA 02110-1301, USA.

########################################################################
# Setup library
########################################################################
include(GrPlatform) #define LIB_SUFFIX

include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIRS})

pkg_search_module(GRPC REQUIRE grpc++ )

include(FindProtobuf)
find_package(Protobuf REQUIRED)
include_directories(${PROTOBUF_INCLUDE_DIR})

list(APPEND grpc_blocks_sources
    radio.grpc.pb.cc
    radio.pb.cc
    radio.server.cc
    sink_impl.cc
    source_impl.cc
)

set(grpc_blocks_sources "${grpc_blocks_sources}" PARENT_SCOPE)
if(NOT grpc_blocks_sources)
	MESSAGE(STATUS "No C++ sources... skipping lib/")
	return()
endif(NOT grpc_blocks_sources)

add_library(gnuradio-grpc_blocks SHARED ${grpc_blocks_sources})
target_link_libraries(gnuradio-grpc_blocks ${Boost_LIBRARIES} ${GNURADIO_ALL_LIBRARIES} ${GRPC_LIBRARIES} ${PROTOBUF_LIBRARY})
set_target_properties(gnuradio-grpc_blocks PROPERTIES DEFINE_SYMBOL "gnuradio_grpc_blocks_EXPORTS")

if(APPLE)
    set_target_properties(gnuradio-grpc_blocks PROPERTIES
        INSTALL_NAME_DIR "${CMAKE_INSTALL_PREFIX}/lib"
    )
endif(APPLE)

########################################################################
# Install built library files
########################################################################
include(GrMiscUtils)
GR_LIBRARY_FOO(gnuradio-grpc_blocks RUNTIME_COMPONENT "grpc_blocks_runtime" DEVEL_COMPONENT "grpc_blocks_devel")

########################################################################
# Build and register unit test
########################################################################
include(GrTest)

include_directories(${CPPUNIT_INCLUDE_DIRS})

list(APPEND test_grpc_blocks_sources
    ${CMAKE_CURRENT_SOURCE_DIR}/test_grpc_blocks.cc
    ${CMAKE_CURRENT_SOURCE_DIR}/qa_grpc_blocks.cc
)

add_executable(test-grpc_blocks ${test_grpc_blocks_sources})

target_link_libraries(
  test-grpc_blocks
  ${GNURADIO_RUNTIME_LIBRARIES}
  ${Boost_LIBRARIES}
  ${CPPUNIT_LIBRARIES}
  gnuradio-grpc_blocks
)

GR_ADD_TEST(test_grpc_blocks test-grpc_blocks)

########################################################################
# Print summary
########################################################################
message(STATUS "Using install prefix: ${CMAKE_INSTALL_PREFIX}")
message(STATUS "Building for version: ${VERSION} / ${LIBVER}")

