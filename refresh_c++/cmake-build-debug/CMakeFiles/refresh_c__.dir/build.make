# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /cygdrive/c/Users/tmoa/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/tmoa/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/s/CLionFile/refresh_c++

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/s/CLionFile/refresh_c++/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/refresh_c__.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/refresh_c__.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/refresh_c__.dir/flags.make

CMakeFiles/refresh_c__.dir/main.cpp.o: CMakeFiles/refresh_c__.dir/flags.make
CMakeFiles/refresh_c__.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/s/CLionFile/refresh_c++/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/refresh_c__.dir/main.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/refresh_c__.dir/main.cpp.o -c /cygdrive/s/CLionFile/refresh_c++/main.cpp

CMakeFiles/refresh_c__.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/refresh_c__.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/s/CLionFile/refresh_c++/main.cpp > CMakeFiles/refresh_c__.dir/main.cpp.i

CMakeFiles/refresh_c__.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/refresh_c__.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/s/CLionFile/refresh_c++/main.cpp -o CMakeFiles/refresh_c__.dir/main.cpp.s

# Object files for target refresh_c__
refresh_c___OBJECTS = \
"CMakeFiles/refresh_c__.dir/main.cpp.o"

# External object files for target refresh_c__
refresh_c___EXTERNAL_OBJECTS =

refresh_c__.exe: CMakeFiles/refresh_c__.dir/main.cpp.o
refresh_c__.exe: CMakeFiles/refresh_c__.dir/build.make
refresh_c__.exe: CMakeFiles/refresh_c__.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/s/CLionFile/refresh_c++/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable refresh_c__.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/refresh_c__.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/refresh_c__.dir/build: refresh_c__.exe
.PHONY : CMakeFiles/refresh_c__.dir/build

CMakeFiles/refresh_c__.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/refresh_c__.dir/cmake_clean.cmake
.PHONY : CMakeFiles/refresh_c__.dir/clean

CMakeFiles/refresh_c__.dir/depend:
	cd /cygdrive/s/CLionFile/refresh_c++/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/s/CLionFile/refresh_c++ /cygdrive/s/CLionFile/refresh_c++ /cygdrive/s/CLionFile/refresh_c++/cmake-build-debug /cygdrive/s/CLionFile/refresh_c++/cmake-build-debug /cygdrive/s/CLionFile/refresh_c++/cmake-build-debug/CMakeFiles/refresh_c__.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/refresh_c__.dir/depend

