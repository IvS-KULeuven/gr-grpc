INCLUDE(FindPkgConfig)
PKG_CHECK_MODULES(PC_GRPC_BLOCKS grpc_blocks)

FIND_PATH(
    GRPC_BLOCKS_INCLUDE_DIRS
    NAMES grpc_blocks/api.h
    HINTS $ENV{GRPC_BLOCKS_DIR}/include
        ${PC_GRPC_BLOCKS_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    GRPC_BLOCKS_LIBRARIES
    NAMES gnuradio-grpc_blocks
    HINTS $ENV{GRPC_BLOCKS_DIR}/lib
        ${PC_GRPC_BLOCKS_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(GRPC_BLOCKS DEFAULT_MSG GRPC_BLOCKS_LIBRARIES GRPC_BLOCKS_INCLUDE_DIRS)
MARK_AS_ADVANCED(GRPC_BLOCKS_LIBRARIES GRPC_BLOCKS_INCLUDE_DIRS)

