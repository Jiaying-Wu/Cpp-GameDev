# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jiayingwu/Desktop/FIT1048

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jiayingwu/Desktop/FIT1048/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/7-WordScrambler.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/7-WordScrambler.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/7-WordScrambler.dir/flags.make

CMakeFiles/7-WordScrambler.dir/lab4/WordScrambler.cpp.o: CMakeFiles/7-WordScrambler.dir/flags.make
CMakeFiles/7-WordScrambler.dir/lab4/WordScrambler.cpp.o: ../lab4/WordScrambler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jiayingwu/Desktop/FIT1048/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/7-WordScrambler.dir/lab4/WordScrambler.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/7-WordScrambler.dir/lab4/WordScrambler.cpp.o -c /Users/jiayingwu/Desktop/FIT1048/lab4/WordScrambler.cpp

CMakeFiles/7-WordScrambler.dir/lab4/WordScrambler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/7-WordScrambler.dir/lab4/WordScrambler.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jiayingwu/Desktop/FIT1048/lab4/WordScrambler.cpp > CMakeFiles/7-WordScrambler.dir/lab4/WordScrambler.cpp.i

CMakeFiles/7-WordScrambler.dir/lab4/WordScrambler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/7-WordScrambler.dir/lab4/WordScrambler.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jiayingwu/Desktop/FIT1048/lab4/WordScrambler.cpp -o CMakeFiles/7-WordScrambler.dir/lab4/WordScrambler.cpp.s

# Object files for target 7-WordScrambler
7__WordScrambler_OBJECTS = \
"CMakeFiles/7-WordScrambler.dir/lab4/WordScrambler.cpp.o"

# External object files for target 7-WordScrambler
7__WordScrambler_EXTERNAL_OBJECTS =

7-WordScrambler: CMakeFiles/7-WordScrambler.dir/lab4/WordScrambler.cpp.o
7-WordScrambler: CMakeFiles/7-WordScrambler.dir/build.make
7-WordScrambler: CMakeFiles/7-WordScrambler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jiayingwu/Desktop/FIT1048/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 7-WordScrambler"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/7-WordScrambler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/7-WordScrambler.dir/build: 7-WordScrambler

.PHONY : CMakeFiles/7-WordScrambler.dir/build

CMakeFiles/7-WordScrambler.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/7-WordScrambler.dir/cmake_clean.cmake
.PHONY : CMakeFiles/7-WordScrambler.dir/clean

CMakeFiles/7-WordScrambler.dir/depend:
	cd /Users/jiayingwu/Desktop/FIT1048/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jiayingwu/Desktop/FIT1048 /Users/jiayingwu/Desktop/FIT1048 /Users/jiayingwu/Desktop/FIT1048/cmake-build-debug /Users/jiayingwu/Desktop/FIT1048/cmake-build-debug /Users/jiayingwu/Desktop/FIT1048/cmake-build-debug/CMakeFiles/7-WordScrambler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/7-WordScrambler.dir/depend
