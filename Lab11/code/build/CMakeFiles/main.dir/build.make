# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

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
CMAKE_COMMAND = /opt/local/bin/cmake

# The command to remove a file.
RM = /opt/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/build

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/collision.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/collision.cpp.o: ../collision.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/collision.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/collision.cpp.o -c /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/collision.cpp

CMakeFiles/main.dir/collision.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/collision.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/collision.cpp > CMakeFiles/main.dir/collision.cpp.i

CMakeFiles/main.dir/collision.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/collision.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/collision.cpp -o CMakeFiles/main.dir/collision.cpp.s

CMakeFiles/main.dir/image_library.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/image_library.cpp.o: ../image_library.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.dir/image_library.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/image_library.cpp.o -c /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/image_library.cpp

CMakeFiles/main.dir/image_library.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/image_library.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/image_library.cpp > CMakeFiles/main.dir/image_library.cpp.i

CMakeFiles/main.dir/image_library.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/image_library.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/image_library.cpp -o CMakeFiles/main.dir/image_library.cpp.s

CMakeFiles/main.dir/image_sequence.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/image_sequence.cpp.o: ../image_sequence.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.dir/image_sequence.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/image_sequence.cpp.o -c /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/image_sequence.cpp

CMakeFiles/main.dir/image_sequence.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/image_sequence.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/image_sequence.cpp > CMakeFiles/main.dir/image_sequence.cpp.i

CMakeFiles/main.dir/image_sequence.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/image_sequence.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/image_sequence.cpp -o CMakeFiles/main.dir/image_sequence.cpp.s

CMakeFiles/main.dir/keyboard_manager.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/keyboard_manager.cpp.o: ../keyboard_manager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.dir/keyboard_manager.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/keyboard_manager.cpp.o -c /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/keyboard_manager.cpp

CMakeFiles/main.dir/keyboard_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/keyboard_manager.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/keyboard_manager.cpp > CMakeFiles/main.dir/keyboard_manager.cpp.i

CMakeFiles/main.dir/keyboard_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/keyboard_manager.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/keyboard_manager.cpp -o CMakeFiles/main.dir/keyboard_manager.cpp.s

CMakeFiles/main.dir/main.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/main.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/main.cpp.o -c /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/main.cpp

CMakeFiles/main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/main.cpp > CMakeFiles/main.dir/main.cpp.i

CMakeFiles/main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/main.cpp -o CMakeFiles/main.dir/main.cpp.s

CMakeFiles/main.dir/obstruction_sprite.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/obstruction_sprite.cpp.o: ../obstruction_sprite.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/main.dir/obstruction_sprite.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/obstruction_sprite.cpp.o -c /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/obstruction_sprite.cpp

CMakeFiles/main.dir/obstruction_sprite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/obstruction_sprite.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/obstruction_sprite.cpp > CMakeFiles/main.dir/obstruction_sprite.cpp.i

CMakeFiles/main.dir/obstruction_sprite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/obstruction_sprite.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/obstruction_sprite.cpp -o CMakeFiles/main.dir/obstruction_sprite.cpp.s

CMakeFiles/main.dir/phys_sprite.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/phys_sprite.cpp.o: ../phys_sprite.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/main.dir/phys_sprite.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/phys_sprite.cpp.o -c /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/phys_sprite.cpp

CMakeFiles/main.dir/phys_sprite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/phys_sprite.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/phys_sprite.cpp > CMakeFiles/main.dir/phys_sprite.cpp.i

CMakeFiles/main.dir/phys_sprite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/phys_sprite.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/phys_sprite.cpp -o CMakeFiles/main.dir/phys_sprite.cpp.s

CMakeFiles/main.dir/player_sprite.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/player_sprite.cpp.o: ../player_sprite.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/main.dir/player_sprite.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/player_sprite.cpp.o -c /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/player_sprite.cpp

CMakeFiles/main.dir/player_sprite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/player_sprite.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/player_sprite.cpp > CMakeFiles/main.dir/player_sprite.cpp.i

CMakeFiles/main.dir/player_sprite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/player_sprite.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/player_sprite.cpp -o CMakeFiles/main.dir/player_sprite.cpp.s

CMakeFiles/main.dir/rectangle.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/rectangle.cpp.o: ../rectangle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/main.dir/rectangle.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/rectangle.cpp.o -c /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/rectangle.cpp

CMakeFiles/main.dir/rectangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/rectangle.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/rectangle.cpp > CMakeFiles/main.dir/rectangle.cpp.i

CMakeFiles/main.dir/rectangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/rectangle.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/rectangle.cpp -o CMakeFiles/main.dir/rectangle.cpp.s

CMakeFiles/main.dir/sprite.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/sprite.cpp.o: ../sprite.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/main.dir/sprite.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/sprite.cpp.o -c /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/sprite.cpp

CMakeFiles/main.dir/sprite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/sprite.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/sprite.cpp > CMakeFiles/main.dir/sprite.cpp.i

CMakeFiles/main.dir/sprite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/sprite.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/sprite.cpp -o CMakeFiles/main.dir/sprite.cpp.s

CMakeFiles/main.dir/vec2d.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/vec2d.cpp.o: ../vec2d.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/main.dir/vec2d.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/vec2d.cpp.o -c /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/vec2d.cpp

CMakeFiles/main.dir/vec2d.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/vec2d.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/vec2d.cpp > CMakeFiles/main.dir/vec2d.cpp.i

CMakeFiles/main.dir/vec2d.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/vec2d.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/vec2d.cpp -o CMakeFiles/main.dir/vec2d.cpp.s

CMakeFiles/main.dir/world.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/world.cpp.o: ../world.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/main.dir/world.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/world.cpp.o -c /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/world.cpp

CMakeFiles/main.dir/world.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/world.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/world.cpp > CMakeFiles/main.dir/world.cpp.i

CMakeFiles/main.dir/world.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/world.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/world.cpp -o CMakeFiles/main.dir/world.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/collision.cpp.o" \
"CMakeFiles/main.dir/image_library.cpp.o" \
"CMakeFiles/main.dir/image_sequence.cpp.o" \
"CMakeFiles/main.dir/keyboard_manager.cpp.o" \
"CMakeFiles/main.dir/main.cpp.o" \
"CMakeFiles/main.dir/obstruction_sprite.cpp.o" \
"CMakeFiles/main.dir/phys_sprite.cpp.o" \
"CMakeFiles/main.dir/player_sprite.cpp.o" \
"CMakeFiles/main.dir/rectangle.cpp.o" \
"CMakeFiles/main.dir/sprite.cpp.o" \
"CMakeFiles/main.dir/vec2d.cpp.o" \
"CMakeFiles/main.dir/world.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/collision.cpp.o
main: CMakeFiles/main.dir/image_library.cpp.o
main: CMakeFiles/main.dir/image_sequence.cpp.o
main: CMakeFiles/main.dir/keyboard_manager.cpp.o
main: CMakeFiles/main.dir/main.cpp.o
main: CMakeFiles/main.dir/obstruction_sprite.cpp.o
main: CMakeFiles/main.dir/phys_sprite.cpp.o
main: CMakeFiles/main.dir/player_sprite.cpp.o
main: CMakeFiles/main.dir/rectangle.cpp.o
main: CMakeFiles/main.dir/sprite.cpp.o
main: CMakeFiles/main.dir/vec2d.cpp.o
main: CMakeFiles/main.dir/world.cpp.o
main: CMakeFiles/main.dir/build.make
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main

.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/build /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/build /Users/shaffer/Courses/CSIS3700/Labs/Lab12/code/build/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

