# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /opt/CLion/clion-2017.3.4/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/CLion/clion-2017.3.4/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/constance/Pulpit/Sorting_algorithms

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/constance/Pulpit/Sorting_algorithms/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Sorting_algorithms.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Sorting_algorithms.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sorting_algorithms.dir/flags.make

CMakeFiles/Sorting_algorithms.dir/main.cpp.o: CMakeFiles/Sorting_algorithms.dir/flags.make
CMakeFiles/Sorting_algorithms.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/constance/Pulpit/Sorting_algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Sorting_algorithms.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Sorting_algorithms.dir/main.cpp.o -c /home/constance/Pulpit/Sorting_algorithms/main.cpp

CMakeFiles/Sorting_algorithms.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sorting_algorithms.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/constance/Pulpit/Sorting_algorithms/main.cpp > CMakeFiles/Sorting_algorithms.dir/main.cpp.i

CMakeFiles/Sorting_algorithms.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sorting_algorithms.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/constance/Pulpit/Sorting_algorithms/main.cpp -o CMakeFiles/Sorting_algorithms.dir/main.cpp.s

CMakeFiles/Sorting_algorithms.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Sorting_algorithms.dir/main.cpp.o.requires

CMakeFiles/Sorting_algorithms.dir/main.cpp.o.provides: CMakeFiles/Sorting_algorithms.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Sorting_algorithms.dir/build.make CMakeFiles/Sorting_algorithms.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Sorting_algorithms.dir/main.cpp.o.provides

CMakeFiles/Sorting_algorithms.dir/main.cpp.o.provides.build: CMakeFiles/Sorting_algorithms.dir/main.cpp.o


CMakeFiles/Sorting_algorithms.dir/quicksort.cpp.o: CMakeFiles/Sorting_algorithms.dir/flags.make
CMakeFiles/Sorting_algorithms.dir/quicksort.cpp.o: ../quicksort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/constance/Pulpit/Sorting_algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Sorting_algorithms.dir/quicksort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Sorting_algorithms.dir/quicksort.cpp.o -c /home/constance/Pulpit/Sorting_algorithms/quicksort.cpp

CMakeFiles/Sorting_algorithms.dir/quicksort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sorting_algorithms.dir/quicksort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/constance/Pulpit/Sorting_algorithms/quicksort.cpp > CMakeFiles/Sorting_algorithms.dir/quicksort.cpp.i

CMakeFiles/Sorting_algorithms.dir/quicksort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sorting_algorithms.dir/quicksort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/constance/Pulpit/Sorting_algorithms/quicksort.cpp -o CMakeFiles/Sorting_algorithms.dir/quicksort.cpp.s

CMakeFiles/Sorting_algorithms.dir/quicksort.cpp.o.requires:

.PHONY : CMakeFiles/Sorting_algorithms.dir/quicksort.cpp.o.requires

CMakeFiles/Sorting_algorithms.dir/quicksort.cpp.o.provides: CMakeFiles/Sorting_algorithms.dir/quicksort.cpp.o.requires
	$(MAKE) -f CMakeFiles/Sorting_algorithms.dir/build.make CMakeFiles/Sorting_algorithms.dir/quicksort.cpp.o.provides.build
.PHONY : CMakeFiles/Sorting_algorithms.dir/quicksort.cpp.o.provides

CMakeFiles/Sorting_algorithms.dir/quicksort.cpp.o.provides.build: CMakeFiles/Sorting_algorithms.dir/quicksort.cpp.o


CMakeFiles/Sorting_algorithms.dir/mergesort.cpp.o: CMakeFiles/Sorting_algorithms.dir/flags.make
CMakeFiles/Sorting_algorithms.dir/mergesort.cpp.o: ../mergesort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/constance/Pulpit/Sorting_algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Sorting_algorithms.dir/mergesort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Sorting_algorithms.dir/mergesort.cpp.o -c /home/constance/Pulpit/Sorting_algorithms/mergesort.cpp

CMakeFiles/Sorting_algorithms.dir/mergesort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sorting_algorithms.dir/mergesort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/constance/Pulpit/Sorting_algorithms/mergesort.cpp > CMakeFiles/Sorting_algorithms.dir/mergesort.cpp.i

CMakeFiles/Sorting_algorithms.dir/mergesort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sorting_algorithms.dir/mergesort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/constance/Pulpit/Sorting_algorithms/mergesort.cpp -o CMakeFiles/Sorting_algorithms.dir/mergesort.cpp.s

CMakeFiles/Sorting_algorithms.dir/mergesort.cpp.o.requires:

.PHONY : CMakeFiles/Sorting_algorithms.dir/mergesort.cpp.o.requires

CMakeFiles/Sorting_algorithms.dir/mergesort.cpp.o.provides: CMakeFiles/Sorting_algorithms.dir/mergesort.cpp.o.requires
	$(MAKE) -f CMakeFiles/Sorting_algorithms.dir/build.make CMakeFiles/Sorting_algorithms.dir/mergesort.cpp.o.provides.build
.PHONY : CMakeFiles/Sorting_algorithms.dir/mergesort.cpp.o.provides

CMakeFiles/Sorting_algorithms.dir/mergesort.cpp.o.provides.build: CMakeFiles/Sorting_algorithms.dir/mergesort.cpp.o


CMakeFiles/Sorting_algorithms.dir/introsort.cpp.o: CMakeFiles/Sorting_algorithms.dir/flags.make
CMakeFiles/Sorting_algorithms.dir/introsort.cpp.o: ../introsort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/constance/Pulpit/Sorting_algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Sorting_algorithms.dir/introsort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Sorting_algorithms.dir/introsort.cpp.o -c /home/constance/Pulpit/Sorting_algorithms/introsort.cpp

CMakeFiles/Sorting_algorithms.dir/introsort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sorting_algorithms.dir/introsort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/constance/Pulpit/Sorting_algorithms/introsort.cpp > CMakeFiles/Sorting_algorithms.dir/introsort.cpp.i

CMakeFiles/Sorting_algorithms.dir/introsort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sorting_algorithms.dir/introsort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/constance/Pulpit/Sorting_algorithms/introsort.cpp -o CMakeFiles/Sorting_algorithms.dir/introsort.cpp.s

CMakeFiles/Sorting_algorithms.dir/introsort.cpp.o.requires:

.PHONY : CMakeFiles/Sorting_algorithms.dir/introsort.cpp.o.requires

CMakeFiles/Sorting_algorithms.dir/introsort.cpp.o.provides: CMakeFiles/Sorting_algorithms.dir/introsort.cpp.o.requires
	$(MAKE) -f CMakeFiles/Sorting_algorithms.dir/build.make CMakeFiles/Sorting_algorithms.dir/introsort.cpp.o.provides.build
.PHONY : CMakeFiles/Sorting_algorithms.dir/introsort.cpp.o.provides

CMakeFiles/Sorting_algorithms.dir/introsort.cpp.o.provides.build: CMakeFiles/Sorting_algorithms.dir/introsort.cpp.o


# Object files for target Sorting_algorithms
Sorting_algorithms_OBJECTS = \
"CMakeFiles/Sorting_algorithms.dir/main.cpp.o" \
"CMakeFiles/Sorting_algorithms.dir/quicksort.cpp.o" \
"CMakeFiles/Sorting_algorithms.dir/mergesort.cpp.o" \
"CMakeFiles/Sorting_algorithms.dir/introsort.cpp.o"

# External object files for target Sorting_algorithms
Sorting_algorithms_EXTERNAL_OBJECTS =

Sorting_algorithms: CMakeFiles/Sorting_algorithms.dir/main.cpp.o
Sorting_algorithms: CMakeFiles/Sorting_algorithms.dir/quicksort.cpp.o
Sorting_algorithms: CMakeFiles/Sorting_algorithms.dir/mergesort.cpp.o
Sorting_algorithms: CMakeFiles/Sorting_algorithms.dir/introsort.cpp.o
Sorting_algorithms: CMakeFiles/Sorting_algorithms.dir/build.make
Sorting_algorithms: CMakeFiles/Sorting_algorithms.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/constance/Pulpit/Sorting_algorithms/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Sorting_algorithms"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Sorting_algorithms.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sorting_algorithms.dir/build: Sorting_algorithms

.PHONY : CMakeFiles/Sorting_algorithms.dir/build

CMakeFiles/Sorting_algorithms.dir/requires: CMakeFiles/Sorting_algorithms.dir/main.cpp.o.requires
CMakeFiles/Sorting_algorithms.dir/requires: CMakeFiles/Sorting_algorithms.dir/quicksort.cpp.o.requires
CMakeFiles/Sorting_algorithms.dir/requires: CMakeFiles/Sorting_algorithms.dir/mergesort.cpp.o.requires
CMakeFiles/Sorting_algorithms.dir/requires: CMakeFiles/Sorting_algorithms.dir/introsort.cpp.o.requires

.PHONY : CMakeFiles/Sorting_algorithms.dir/requires

CMakeFiles/Sorting_algorithms.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Sorting_algorithms.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Sorting_algorithms.dir/clean

CMakeFiles/Sorting_algorithms.dir/depend:
	cd /home/constance/Pulpit/Sorting_algorithms/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/constance/Pulpit/Sorting_algorithms /home/constance/Pulpit/Sorting_algorithms /home/constance/Pulpit/Sorting_algorithms/cmake-build-debug /home/constance/Pulpit/Sorting_algorithms/cmake-build-debug /home/constance/Pulpit/Sorting_algorithms/cmake-build-debug/CMakeFiles/Sorting_algorithms.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Sorting_algorithms.dir/depend

