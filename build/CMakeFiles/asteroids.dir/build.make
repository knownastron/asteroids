# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.12.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.12.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/build

# Include any dependencies generated for this target.
include CMakeFiles/asteroids.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/asteroids.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/asteroids.dir/flags.make

CMakeFiles/asteroids.dir/main.cpp.o: CMakeFiles/asteroids.dir/flags.make
CMakeFiles/asteroids.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/asteroids.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/asteroids.dir/main.cpp.o -c /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/main.cpp

CMakeFiles/asteroids.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/asteroids.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/main.cpp > CMakeFiles/asteroids.dir/main.cpp.i

CMakeFiles/asteroids.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/asteroids.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/main.cpp -o CMakeFiles/asteroids.dir/main.cpp.s

CMakeFiles/asteroids.dir/Game.cpp.o: CMakeFiles/asteroids.dir/flags.make
CMakeFiles/asteroids.dir/Game.cpp.o: ../Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/asteroids.dir/Game.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/asteroids.dir/Game.cpp.o -c /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/Game.cpp

CMakeFiles/asteroids.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/asteroids.dir/Game.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/Game.cpp > CMakeFiles/asteroids.dir/Game.cpp.i

CMakeFiles/asteroids.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/asteroids.dir/Game.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/Game.cpp -o CMakeFiles/asteroids.dir/Game.cpp.s

CMakeFiles/asteroids.dir/Player.cpp.o: CMakeFiles/asteroids.dir/flags.make
CMakeFiles/asteroids.dir/Player.cpp.o: ../Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/asteroids.dir/Player.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/asteroids.dir/Player.cpp.o -c /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/Player.cpp

CMakeFiles/asteroids.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/asteroids.dir/Player.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/Player.cpp > CMakeFiles/asteroids.dir/Player.cpp.i

CMakeFiles/asteroids.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/asteroids.dir/Player.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/Player.cpp -o CMakeFiles/asteroids.dir/Player.cpp.s

CMakeFiles/asteroids.dir/Asteroid.cpp.o: CMakeFiles/asteroids.dir/flags.make
CMakeFiles/asteroids.dir/Asteroid.cpp.o: ../Asteroid.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/asteroids.dir/Asteroid.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/asteroids.dir/Asteroid.cpp.o -c /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/Asteroid.cpp

CMakeFiles/asteroids.dir/Asteroid.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/asteroids.dir/Asteroid.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/Asteroid.cpp > CMakeFiles/asteroids.dir/Asteroid.cpp.i

CMakeFiles/asteroids.dir/Asteroid.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/asteroids.dir/Asteroid.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/Asteroid.cpp -o CMakeFiles/asteroids.dir/Asteroid.cpp.s

CMakeFiles/asteroids.dir/Bullet.cpp.o: CMakeFiles/asteroids.dir/flags.make
CMakeFiles/asteroids.dir/Bullet.cpp.o: ../Bullet.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/asteroids.dir/Bullet.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/asteroids.dir/Bullet.cpp.o -c /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/Bullet.cpp

CMakeFiles/asteroids.dir/Bullet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/asteroids.dir/Bullet.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/Bullet.cpp > CMakeFiles/asteroids.dir/Bullet.cpp.i

CMakeFiles/asteroids.dir/Bullet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/asteroids.dir/Bullet.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/Bullet.cpp -o CMakeFiles/asteroids.dir/Bullet.cpp.s

# Object files for target asteroids
asteroids_OBJECTS = \
"CMakeFiles/asteroids.dir/main.cpp.o" \
"CMakeFiles/asteroids.dir/Game.cpp.o" \
"CMakeFiles/asteroids.dir/Player.cpp.o" \
"CMakeFiles/asteroids.dir/Asteroid.cpp.o" \
"CMakeFiles/asteroids.dir/Bullet.cpp.o"

# External object files for target asteroids
asteroids_EXTERNAL_OBJECTS =

asteroids: CMakeFiles/asteroids.dir/main.cpp.o
asteroids: CMakeFiles/asteroids.dir/Game.cpp.o
asteroids: CMakeFiles/asteroids.dir/Player.cpp.o
asteroids: CMakeFiles/asteroids.dir/Asteroid.cpp.o
asteroids: CMakeFiles/asteroids.dir/Bullet.cpp.o
asteroids: CMakeFiles/asteroids.dir/build.make
asteroids: /usr/local/lib/libsfml-graphics.dylib
asteroids: /usr/local/lib/libsfml-audio.dylib
asteroids: /usr/local/lib/libsfml-window.dylib
asteroids: /usr/local/lib/libsfml-system.dylib
asteroids: /usr/local/lib/libsfml-audio.dylib
asteroids: /usr/local/lib/libsfml-window.dylib
asteroids: /usr/local/lib/libsfml-system.dylib
asteroids: CMakeFiles/asteroids.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable asteroids"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/asteroids.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/asteroids.dir/build: asteroids

.PHONY : CMakeFiles/asteroids.dir/build

CMakeFiles/asteroids.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/asteroids.dir/cmake_clean.cmake
.PHONY : CMakeFiles/asteroids.dir/clean

CMakeFiles/asteroids.dir/depend:
	cd /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/build /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/build /Users/jasontran/Documents/TiaJason/g_assignment08-asteroids/build/CMakeFiles/asteroids.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/asteroids.dir/depend
