# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wimc/project/gr_mods/gr-grpc_blocks

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wimc/project/gr_mods/gr-grpc_blocks/build

# Include any dependencies generated for this target.
include lib/CMakeFiles/test-grpc_blocks.dir/depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/test-grpc_blocks.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/test-grpc_blocks.dir/flags.make

lib/CMakeFiles/test-grpc_blocks.dir/test_grpc_blocks.cc.o: lib/CMakeFiles/test-grpc_blocks.dir/flags.make
lib/CMakeFiles/test-grpc_blocks.dir/test_grpc_blocks.cc.o: ../lib/test_grpc_blocks.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wimc/project/gr_mods/gr-grpc_blocks/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/test-grpc_blocks.dir/test_grpc_blocks.cc.o"
	cd /home/wimc/project/gr_mods/gr-grpc_blocks/build/lib && /usr/lib64/ccache/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test-grpc_blocks.dir/test_grpc_blocks.cc.o -c /home/wimc/project/gr_mods/gr-grpc_blocks/lib/test_grpc_blocks.cc

lib/CMakeFiles/test-grpc_blocks.dir/test_grpc_blocks.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test-grpc_blocks.dir/test_grpc_blocks.cc.i"
	cd /home/wimc/project/gr_mods/gr-grpc_blocks/build/lib && /usr/lib64/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wimc/project/gr_mods/gr-grpc_blocks/lib/test_grpc_blocks.cc > CMakeFiles/test-grpc_blocks.dir/test_grpc_blocks.cc.i

lib/CMakeFiles/test-grpc_blocks.dir/test_grpc_blocks.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test-grpc_blocks.dir/test_grpc_blocks.cc.s"
	cd /home/wimc/project/gr_mods/gr-grpc_blocks/build/lib && /usr/lib64/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wimc/project/gr_mods/gr-grpc_blocks/lib/test_grpc_blocks.cc -o CMakeFiles/test-grpc_blocks.dir/test_grpc_blocks.cc.s

lib/CMakeFiles/test-grpc_blocks.dir/test_grpc_blocks.cc.o.requires:

.PHONY : lib/CMakeFiles/test-grpc_blocks.dir/test_grpc_blocks.cc.o.requires

lib/CMakeFiles/test-grpc_blocks.dir/test_grpc_blocks.cc.o.provides: lib/CMakeFiles/test-grpc_blocks.dir/test_grpc_blocks.cc.o.requires
	$(MAKE) -f lib/CMakeFiles/test-grpc_blocks.dir/build.make lib/CMakeFiles/test-grpc_blocks.dir/test_grpc_blocks.cc.o.provides.build
.PHONY : lib/CMakeFiles/test-grpc_blocks.dir/test_grpc_blocks.cc.o.provides

lib/CMakeFiles/test-grpc_blocks.dir/test_grpc_blocks.cc.o.provides.build: lib/CMakeFiles/test-grpc_blocks.dir/test_grpc_blocks.cc.o


lib/CMakeFiles/test-grpc_blocks.dir/qa_grpc_blocks.cc.o: lib/CMakeFiles/test-grpc_blocks.dir/flags.make
lib/CMakeFiles/test-grpc_blocks.dir/qa_grpc_blocks.cc.o: ../lib/qa_grpc_blocks.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wimc/project/gr_mods/gr-grpc_blocks/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/CMakeFiles/test-grpc_blocks.dir/qa_grpc_blocks.cc.o"
	cd /home/wimc/project/gr_mods/gr-grpc_blocks/build/lib && /usr/lib64/ccache/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test-grpc_blocks.dir/qa_grpc_blocks.cc.o -c /home/wimc/project/gr_mods/gr-grpc_blocks/lib/qa_grpc_blocks.cc

lib/CMakeFiles/test-grpc_blocks.dir/qa_grpc_blocks.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test-grpc_blocks.dir/qa_grpc_blocks.cc.i"
	cd /home/wimc/project/gr_mods/gr-grpc_blocks/build/lib && /usr/lib64/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wimc/project/gr_mods/gr-grpc_blocks/lib/qa_grpc_blocks.cc > CMakeFiles/test-grpc_blocks.dir/qa_grpc_blocks.cc.i

lib/CMakeFiles/test-grpc_blocks.dir/qa_grpc_blocks.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test-grpc_blocks.dir/qa_grpc_blocks.cc.s"
	cd /home/wimc/project/gr_mods/gr-grpc_blocks/build/lib && /usr/lib64/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wimc/project/gr_mods/gr-grpc_blocks/lib/qa_grpc_blocks.cc -o CMakeFiles/test-grpc_blocks.dir/qa_grpc_blocks.cc.s

lib/CMakeFiles/test-grpc_blocks.dir/qa_grpc_blocks.cc.o.requires:

.PHONY : lib/CMakeFiles/test-grpc_blocks.dir/qa_grpc_blocks.cc.o.requires

lib/CMakeFiles/test-grpc_blocks.dir/qa_grpc_blocks.cc.o.provides: lib/CMakeFiles/test-grpc_blocks.dir/qa_grpc_blocks.cc.o.requires
	$(MAKE) -f lib/CMakeFiles/test-grpc_blocks.dir/build.make lib/CMakeFiles/test-grpc_blocks.dir/qa_grpc_blocks.cc.o.provides.build
.PHONY : lib/CMakeFiles/test-grpc_blocks.dir/qa_grpc_blocks.cc.o.provides

lib/CMakeFiles/test-grpc_blocks.dir/qa_grpc_blocks.cc.o.provides.build: lib/CMakeFiles/test-grpc_blocks.dir/qa_grpc_blocks.cc.o


# Object files for target test-grpc_blocks
test__grpc_blocks_OBJECTS = \
"CMakeFiles/test-grpc_blocks.dir/test_grpc_blocks.cc.o" \
"CMakeFiles/test-grpc_blocks.dir/qa_grpc_blocks.cc.o"

# External object files for target test-grpc_blocks
test__grpc_blocks_EXTERNAL_OBJECTS =

lib/test-grpc_blocks: lib/CMakeFiles/test-grpc_blocks.dir/test_grpc_blocks.cc.o
lib/test-grpc_blocks: lib/CMakeFiles/test-grpc_blocks.dir/qa_grpc_blocks.cc.o
lib/test-grpc_blocks: lib/CMakeFiles/test-grpc_blocks.dir/build.make
lib/test-grpc_blocks: /lib64/libgnuradio-runtime.so
lib/test-grpc_blocks: /lib64/libgnuradio-pmt.so
lib/test-grpc_blocks: /usr/lib64/libboost_filesystem.so
lib/test-grpc_blocks: /usr/lib64/libboost_system.so
lib/test-grpc_blocks: /usr/lib64/libcppunit.so
lib/test-grpc_blocks: lib/libgnuradio-grpc_blocks-1.0.0git.so.0.0.0
lib/test-grpc_blocks: /lib64/libgnuradio-runtime.so
lib/test-grpc_blocks: /lib64/libgnuradio-pmt.so
lib/test-grpc_blocks: /usr/lib64/libboost_filesystem.so
lib/test-grpc_blocks: /usr/lib64/libboost_system.so
lib/test-grpc_blocks: /usr/local/lib/libprotobuf.so
lib/test-grpc_blocks: lib/CMakeFiles/test-grpc_blocks.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wimc/project/gr_mods/gr-grpc_blocks/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable test-grpc_blocks"
	cd /home/wimc/project/gr_mods/gr-grpc_blocks/build/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test-grpc_blocks.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/test-grpc_blocks.dir/build: lib/test-grpc_blocks

.PHONY : lib/CMakeFiles/test-grpc_blocks.dir/build

lib/CMakeFiles/test-grpc_blocks.dir/requires: lib/CMakeFiles/test-grpc_blocks.dir/test_grpc_blocks.cc.o.requires
lib/CMakeFiles/test-grpc_blocks.dir/requires: lib/CMakeFiles/test-grpc_blocks.dir/qa_grpc_blocks.cc.o.requires

.PHONY : lib/CMakeFiles/test-grpc_blocks.dir/requires

lib/CMakeFiles/test-grpc_blocks.dir/clean:
	cd /home/wimc/project/gr_mods/gr-grpc_blocks/build/lib && $(CMAKE_COMMAND) -P CMakeFiles/test-grpc_blocks.dir/cmake_clean.cmake
.PHONY : lib/CMakeFiles/test-grpc_blocks.dir/clean

lib/CMakeFiles/test-grpc_blocks.dir/depend:
	cd /home/wimc/project/gr_mods/gr-grpc_blocks/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wimc/project/gr_mods/gr-grpc_blocks /home/wimc/project/gr_mods/gr-grpc_blocks/lib /home/wimc/project/gr_mods/gr-grpc_blocks/build /home/wimc/project/gr_mods/gr-grpc_blocks/build/lib /home/wimc/project/gr_mods/gr-grpc_blocks/build/lib/CMakeFiles/test-grpc_blocks.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CMakeFiles/test-grpc_blocks.dir/depend
