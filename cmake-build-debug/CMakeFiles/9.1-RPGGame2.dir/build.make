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
include CMakeFiles/9.1-RPGGame2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/9.1-RPGGame2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/9.1-RPGGame2.dir/flags.make

CMakeFiles/9.1-RPGGame2.dir/lab9/9.1-RPGGame2.cpp.o: CMakeFiles/9.1-RPGGame2.dir/flags.make
CMakeFiles/9.1-RPGGame2.dir/lab9/9.1-RPGGame2.cpp.o: ../lab9/9.1-RPGGame2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jiayingwu/Desktop/FIT1048/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/9.1-RPGGame2.dir/lab9/9.1-RPGGame2.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/9.1-RPGGame2.dir/lab9/9.1-RPGGame2.cpp.o -c /Users/jiayingwu/Desktop/FIT1048/lab9/9.1-RPGGame2.cpp

CMakeFiles/9.1-RPGGame2.dir/lab9/9.1-RPGGame2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/9.1-RPGGame2.dir/lab9/9.1-RPGGame2.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jiayingwu/Desktop/FIT1048/lab9/9.1-RPGGame2.cpp > CMakeFiles/9.1-RPGGame2.dir/lab9/9.1-RPGGame2.cpp.i

CMakeFiles/9.1-RPGGame2.dir/lab9/9.1-RPGGame2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/9.1-RPGGame2.dir/lab9/9.1-RPGGame2.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jiayingwu/Desktop/FIT1048/lab9/9.1-RPGGame2.cpp -o CMakeFiles/9.1-RPGGame2.dir/lab9/9.1-RPGGame2.cpp.s

# Object files for target 9.1-RPGGame2
9_1__RPGGame2_OBJECTS = \
"CMakeFiles/9.1-RPGGame2.dir/lab9/9.1-RPGGame2.cpp.o"

# External object files for target 9.1-RPGGame2
9_1__RPGGame2_EXTERNAL_OBJECTS =

9.1-RPGGame2: CMakeFiles/9.1-RPGGame2.dir/lab9/9.1-RPGGame2.cpp.o
9.1-RPGGame2: CMakeFiles/9.1-RPGGame2.dir/build.make
9.1-RPGGame2: CMakeFiles/9.1-RPGGame2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jiayingwu/Desktop/FIT1048/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 9.1-RPGGame2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/9.1-RPGGame2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/9.1-RPGGame2.dir/build: 9.1-RPGGame2

.PHONY : CMakeFiles/9.1-RPGGame2.dir/build

CMakeFiles/9.1-RPGGame2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/9.1-RPGGame2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/9.1-RPGGame2.dir/clean

CMakeFiles/9.1-RPGGame2.dir/depend:
	cd /Users/jiayingwu/Desktop/FIT1048/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jiayingwu/Desktop/FIT1048 /Users/jiayingwu/Desktop/FIT1048 /Users/jiayingwu/Desktop/FIT1048/cmake-build-debug /Users/jiayingwu/Desktop/FIT1048/cmake-build-debug /Users/jiayingwu/Desktop/FIT1048/cmake-build-debug/CMakeFiles/9.1-RPGGame2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/9.1-RPGGame2.dir/depend

