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
include swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/depend.make

# Include the progress variables for this target.
include swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/progress.make

# Include the compile flags for this target's objects.
include swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/flags.make

swig/grpc_blocks_swig_swig_2d0df.cpp: ../swig/grpc_blocks_swig.i
swig/grpc_blocks_swig_swig_2d0df.cpp: swig/grpc_blocks_swig_doc.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/gr_swig_block_magic.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/gr_logger.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/block_gateway.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/tags.i
swig/grpc_blocks_swig_swig_2d0df.cpp: ../swig/grpc_blocks_swig.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/top_block.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/sync_block.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/msg_queue.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/io_signature.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/gnuradio.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/buffer.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/sync_decimator.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/gr_types.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/message.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/hier_block2.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/block.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/basic_block.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/runtime_swig_doc.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/sync_interpolator.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/gr_ctrlport.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/feval.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/gr_shared_ptr.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/prefs.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/msg_handler.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/constants.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/gr_extras.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/runtime_swig.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/tagged_stream_block.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/realtime.i
swig/grpc_blocks_swig_swig_2d0df.cpp: /usr/include/gnuradio/swig/block_detail.i
swig/grpc_blocks_swig_swig_2d0df.cpp: swig/grpc_blocks_swig.tag
	cd /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig && /usr/bin/cmake -E copy /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig/grpc_blocks_swig_swig_2d0df.cpp.in /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig/grpc_blocks_swig_swig_2d0df.cpp

swig/grpc_blocks_swig_doc.i: swig/grpc_blocks_swig_doc_swig_docs/xml/index.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/wimc/project/gr_mods/gr-grpc_blocks/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating python docstrings for grpc_blocks_swig_doc"
	cd /home/wimc/project/gr_mods/gr-grpc_blocks/docs/doxygen && /usr/bin/python2 -B /home/wimc/project/gr_mods/gr-grpc_blocks/docs/doxygen/swig_doc.py /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig/grpc_blocks_swig_doc_swig_docs/xml /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig/grpc_blocks_swig_doc.i

swig/grpc_blocks_swig.tag: swig/_grpc_blocks_swig_swig_tag
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/wimc/project/gr_mods/gr-grpc_blocks/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating grpc_blocks_swig.tag"
	cd /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig && ./_grpc_blocks_swig_swig_tag
	cd /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig && /usr/bin/cmake -E touch /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig/grpc_blocks_swig.tag

swig/grpc_blocks_swig_doc_swig_docs/xml/index.xml: swig/_grpc_blocks_swig_doc_tag
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/wimc/project/gr_mods/gr-grpc_blocks/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating doxygen xml for grpc_blocks_swig_doc docs"
	cd /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig && ./_grpc_blocks_swig_doc_tag
	cd /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig && /usr/bin/doxygen /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig/grpc_blocks_swig_doc_swig_docs/Doxyfile

swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/grpc_blocks_swig_swig_2d0df.cpp.o: swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/flags.make
swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/grpc_blocks_swig_swig_2d0df.cpp.o: swig/grpc_blocks_swig_swig_2d0df.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wimc/project/gr_mods/gr-grpc_blocks/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/grpc_blocks_swig_swig_2d0df.cpp.o"
	cd /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig && /usr/lib64/ccache/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/grpc_blocks_swig_swig_2d0df.cpp.o -c /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig/grpc_blocks_swig_swig_2d0df.cpp

swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/grpc_blocks_swig_swig_2d0df.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/grpc_blocks_swig_swig_2d0df.cpp.i"
	cd /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig && /usr/lib64/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig/grpc_blocks_swig_swig_2d0df.cpp > CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/grpc_blocks_swig_swig_2d0df.cpp.i

swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/grpc_blocks_swig_swig_2d0df.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/grpc_blocks_swig_swig_2d0df.cpp.s"
	cd /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig && /usr/lib64/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig/grpc_blocks_swig_swig_2d0df.cpp -o CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/grpc_blocks_swig_swig_2d0df.cpp.s

swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/grpc_blocks_swig_swig_2d0df.cpp.o.requires:

.PHONY : swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/grpc_blocks_swig_swig_2d0df.cpp.o.requires

swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/grpc_blocks_swig_swig_2d0df.cpp.o.provides: swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/grpc_blocks_swig_swig_2d0df.cpp.o.requires
	$(MAKE) -f swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/build.make swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/grpc_blocks_swig_swig_2d0df.cpp.o.provides.build
.PHONY : swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/grpc_blocks_swig_swig_2d0df.cpp.o.provides

swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/grpc_blocks_swig_swig_2d0df.cpp.o.provides.build: swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/grpc_blocks_swig_swig_2d0df.cpp.o


# Object files for target grpc_blocks_swig_swig_2d0df
grpc_blocks_swig_swig_2d0df_OBJECTS = \
"CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/grpc_blocks_swig_swig_2d0df.cpp.o"

# External object files for target grpc_blocks_swig_swig_2d0df
grpc_blocks_swig_swig_2d0df_EXTERNAL_OBJECTS =

swig/grpc_blocks_swig_swig_2d0df: swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/grpc_blocks_swig_swig_2d0df.cpp.o
swig/grpc_blocks_swig_swig_2d0df: swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/build.make
swig/grpc_blocks_swig_swig_2d0df: swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wimc/project/gr_mods/gr-grpc_blocks/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable grpc_blocks_swig_swig_2d0df"
	cd /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/link.txt --verbose=$(VERBOSE)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Swig source"
	cd /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig && /usr/bin/cmake -E make_directory /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig
	cd /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig && /usr/bin/swig -python -fvirtual -modern -keyword -w511 -module grpc_blocks_swig -I/home/wimc/project/gr_mods/gr-grpc_blocks/build/swig -I/home/wimc/project/gr_mods/gr-grpc_blocks/swig -I/usr/include/gnuradio/swig -I/usr/include/python2.7 -I/usr/include/python2.7 -outdir /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig -c++ -I/home/wimc/project/gr_mods/gr-grpc_blocks/lib -I/home/wimc/project/gr_mods/gr-grpc_blocks/include -I/home/wimc/project/gr_mods/gr-grpc_blocks/build/lib -I/home/wimc/project/gr_mods/gr-grpc_blocks/build/include -I/usr/include -I/usr/include -I/usr/include -I/home/wimc/project/gr_mods/gr-grpc_blocks/build/swig -I/home/wimc/project/gr_mods/gr-grpc_blocks/swig -I/usr/include/gnuradio/swig -I/usr/include/python2.7 -I/usr/include/python2.7 -o /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig/grpc_blocks_swigPYTHON_wrap.cxx /home/wimc/project/gr_mods/gr-grpc_blocks/swig/grpc_blocks_swig.i

# Rule to build all files generated by this target.
swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/build: swig/grpc_blocks_swig_swig_2d0df

.PHONY : swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/build

swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/requires: swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/grpc_blocks_swig_swig_2d0df.cpp.o.requires

.PHONY : swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/requires

swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/clean:
	cd /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig && $(CMAKE_COMMAND) -P CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/cmake_clean.cmake
.PHONY : swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/clean

swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/depend: swig/grpc_blocks_swig_swig_2d0df.cpp
swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/depend: swig/grpc_blocks_swig_doc.i
swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/depend: swig/grpc_blocks_swig.tag
swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/depend: swig/grpc_blocks_swig_doc_swig_docs/xml/index.xml
	cd /home/wimc/project/gr_mods/gr-grpc_blocks/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wimc/project/gr_mods/gr-grpc_blocks /home/wimc/project/gr_mods/gr-grpc_blocks/swig /home/wimc/project/gr_mods/gr-grpc_blocks/build /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig /home/wimc/project/gr_mods/gr-grpc_blocks/build/swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : swig/CMakeFiles/grpc_blocks_swig_swig_2d0df.dir/depend
