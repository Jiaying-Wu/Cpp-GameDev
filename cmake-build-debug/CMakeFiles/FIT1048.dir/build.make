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
include CMakeFiles/FIT1048.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FIT1048.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FIT1048.dir/flags.make

CMakeFiles/FIT1048.dir/main.cpp.o: CMakeFiles/FIT1048.dir/flags.make
CMakeFiles/FIT1048.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jiayingwu/Desktop/FIT1048/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FIT1048.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FIT1048.dir/main.cpp.o -c /Users/jiayingwu/Desktop/FIT1048/main.cpp

CMakeFiles/FIT1048.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FIT1048.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jiayingwu/Desktop/FIT1048/main.cpp > CMakeFiles/FIT1048.dir/main.cpp.i

CMakeFiles/FIT1048.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FIT1048.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jiayingwu/Desktop/FIT1048/main.cpp -o CMakeFiles/FIT1048.dir/main.cpp.s

# Object files for target FIT1048
FIT1048_OBJECTS = \
"CMakeFiles/FIT1048.dir/main.cpp.o"

# External object files for target FIT1048
FIT1048_EXTERNAL_OBJECTS =

FIT1048: CMakeFiles/FIT1048.dir/main.cpp.o
FIT1048: CMakeFiles/FIT1048.dir/build.make
FIT1048: CMakeFiles/FIT1048.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jiayingwu/Desktop/FIT1048/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable FIT1048"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FIT1048.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FIT1048.dir/build: FIT1048

.PHONY : CMakeFiles/FIT1048.dir/build

CMakeFiles/FIT1048.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FIT1048.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FIT1048.dir/clean

CMakeFiles/FIT1048.dir/depend:
	cd /Users/jiayingwu/Desktop/FIT1048/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jiayingwu/Desktop/FIT1048 /Users/jiayingwu/Desktop/FIT1048 /Users/jiayingwu/Desktop/FIT1048/cmake-build-debug /Users/jiayingwu/Desktop/FIT1048/cmake-build-debug /Users/jiayingwu/Desktop/FIT1048/cmake-build-debug/CMakeFiles/FIT1048.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FIT1048.dir/depend
