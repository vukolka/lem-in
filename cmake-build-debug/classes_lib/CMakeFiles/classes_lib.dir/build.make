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
CMAKE_COMMAND = /home/vukolov/Downloads/clion-2017.3.1/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/vukolov/Downloads/clion-2017.3.1/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vukolov/Documents/unit/lem-in

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vukolov/Documents/unit/lem-in/cmake-build-debug

# Include any dependencies generated for this target.
include classes_lib/CMakeFiles/classes_lib.dir/depend.make

# Include the progress variables for this target.
include classes_lib/CMakeFiles/classes_lib.dir/progress.make

# Include the compile flags for this target's objects.
include classes_lib/CMakeFiles/classes_lib.dir/flags.make

classes_lib/CMakeFiles/classes_lib.dir/new.c.o: classes_lib/CMakeFiles/classes_lib.dir/flags.make
classes_lib/CMakeFiles/classes_lib.dir/new.c.o: ../classes_lib/new.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vukolov/Documents/unit/lem-in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object classes_lib/CMakeFiles/classes_lib.dir/new.c.o"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/classes_lib.dir/new.c.o   -c /home/vukolov/Documents/unit/lem-in/classes_lib/new.c

classes_lib/CMakeFiles/classes_lib.dir/new.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/classes_lib.dir/new.c.i"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vukolov/Documents/unit/lem-in/classes_lib/new.c > CMakeFiles/classes_lib.dir/new.c.i

classes_lib/CMakeFiles/classes_lib.dir/new.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/classes_lib.dir/new.c.s"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vukolov/Documents/unit/lem-in/classes_lib/new.c -o CMakeFiles/classes_lib.dir/new.c.s

classes_lib/CMakeFiles/classes_lib.dir/new.c.o.requires:

.PHONY : classes_lib/CMakeFiles/classes_lib.dir/new.c.o.requires

classes_lib/CMakeFiles/classes_lib.dir/new.c.o.provides: classes_lib/CMakeFiles/classes_lib.dir/new.c.o.requires
	$(MAKE) -f classes_lib/CMakeFiles/classes_lib.dir/build.make classes_lib/CMakeFiles/classes_lib.dir/new.c.o.provides.build
.PHONY : classes_lib/CMakeFiles/classes_lib.dir/new.c.o.provides

classes_lib/CMakeFiles/classes_lib.dir/new.c.o.provides.build: classes_lib/CMakeFiles/classes_lib.dir/new.c.o


classes_lib/CMakeFiles/classes_lib.dir/Point.c.o: classes_lib/CMakeFiles/classes_lib.dir/flags.make
classes_lib/CMakeFiles/classes_lib.dir/Point.c.o: ../classes_lib/Point.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vukolov/Documents/unit/lem-in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object classes_lib/CMakeFiles/classes_lib.dir/Point.c.o"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/classes_lib.dir/Point.c.o   -c /home/vukolov/Documents/unit/lem-in/classes_lib/Point.c

classes_lib/CMakeFiles/classes_lib.dir/Point.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/classes_lib.dir/Point.c.i"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vukolov/Documents/unit/lem-in/classes_lib/Point.c > CMakeFiles/classes_lib.dir/Point.c.i

classes_lib/CMakeFiles/classes_lib.dir/Point.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/classes_lib.dir/Point.c.s"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vukolov/Documents/unit/lem-in/classes_lib/Point.c -o CMakeFiles/classes_lib.dir/Point.c.s

classes_lib/CMakeFiles/classes_lib.dir/Point.c.o.requires:

.PHONY : classes_lib/CMakeFiles/classes_lib.dir/Point.c.o.requires

classes_lib/CMakeFiles/classes_lib.dir/Point.c.o.provides: classes_lib/CMakeFiles/classes_lib.dir/Point.c.o.requires
	$(MAKE) -f classes_lib/CMakeFiles/classes_lib.dir/build.make classes_lib/CMakeFiles/classes_lib.dir/Point.c.o.provides.build
.PHONY : classes_lib/CMakeFiles/classes_lib.dir/Point.c.o.provides

classes_lib/CMakeFiles/classes_lib.dir/Point.c.o.provides.build: classes_lib/CMakeFiles/classes_lib.dir/Point.c.o


classes_lib/CMakeFiles/classes_lib.dir/String.c.o: classes_lib/CMakeFiles/classes_lib.dir/flags.make
classes_lib/CMakeFiles/classes_lib.dir/String.c.o: ../classes_lib/String.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vukolov/Documents/unit/lem-in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object classes_lib/CMakeFiles/classes_lib.dir/String.c.o"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/classes_lib.dir/String.c.o   -c /home/vukolov/Documents/unit/lem-in/classes_lib/String.c

classes_lib/CMakeFiles/classes_lib.dir/String.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/classes_lib.dir/String.c.i"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vukolov/Documents/unit/lem-in/classes_lib/String.c > CMakeFiles/classes_lib.dir/String.c.i

classes_lib/CMakeFiles/classes_lib.dir/String.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/classes_lib.dir/String.c.s"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vukolov/Documents/unit/lem-in/classes_lib/String.c -o CMakeFiles/classes_lib.dir/String.c.s

classes_lib/CMakeFiles/classes_lib.dir/String.c.o.requires:

.PHONY : classes_lib/CMakeFiles/classes_lib.dir/String.c.o.requires

classes_lib/CMakeFiles/classes_lib.dir/String.c.o.provides: classes_lib/CMakeFiles/classes_lib.dir/String.c.o.requires
	$(MAKE) -f classes_lib/CMakeFiles/classes_lib.dir/build.make classes_lib/CMakeFiles/classes_lib.dir/String.c.o.provides.build
.PHONY : classes_lib/CMakeFiles/classes_lib.dir/String.c.o.provides

classes_lib/CMakeFiles/classes_lib.dir/String.c.o.provides.build: classes_lib/CMakeFiles/classes_lib.dir/String.c.o


classes_lib/CMakeFiles/classes_lib.dir/init_classes.c.o: classes_lib/CMakeFiles/classes_lib.dir/flags.make
classes_lib/CMakeFiles/classes_lib.dir/init_classes.c.o: ../classes_lib/init_classes.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vukolov/Documents/unit/lem-in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object classes_lib/CMakeFiles/classes_lib.dir/init_classes.c.o"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/classes_lib.dir/init_classes.c.o   -c /home/vukolov/Documents/unit/lem-in/classes_lib/init_classes.c

classes_lib/CMakeFiles/classes_lib.dir/init_classes.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/classes_lib.dir/init_classes.c.i"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vukolov/Documents/unit/lem-in/classes_lib/init_classes.c > CMakeFiles/classes_lib.dir/init_classes.c.i

classes_lib/CMakeFiles/classes_lib.dir/init_classes.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/classes_lib.dir/init_classes.c.s"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vukolov/Documents/unit/lem-in/classes_lib/init_classes.c -o CMakeFiles/classes_lib.dir/init_classes.c.s

classes_lib/CMakeFiles/classes_lib.dir/init_classes.c.o.requires:

.PHONY : classes_lib/CMakeFiles/classes_lib.dir/init_classes.c.o.requires

classes_lib/CMakeFiles/classes_lib.dir/init_classes.c.o.provides: classes_lib/CMakeFiles/classes_lib.dir/init_classes.c.o.requires
	$(MAKE) -f classes_lib/CMakeFiles/classes_lib.dir/build.make classes_lib/CMakeFiles/classes_lib.dir/init_classes.c.o.provides.build
.PHONY : classes_lib/CMakeFiles/classes_lib.dir/init_classes.c.o.provides

classes_lib/CMakeFiles/classes_lib.dir/init_classes.c.o.provides.build: classes_lib/CMakeFiles/classes_lib.dir/init_classes.c.o


classes_lib/CMakeFiles/classes_lib.dir/MLXConn.c.o: classes_lib/CMakeFiles/classes_lib.dir/flags.make
classes_lib/CMakeFiles/classes_lib.dir/MLXConn.c.o: ../classes_lib/MLXConn.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vukolov/Documents/unit/lem-in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object classes_lib/CMakeFiles/classes_lib.dir/MLXConn.c.o"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/classes_lib.dir/MLXConn.c.o   -c /home/vukolov/Documents/unit/lem-in/classes_lib/MLXConn.c

classes_lib/CMakeFiles/classes_lib.dir/MLXConn.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/classes_lib.dir/MLXConn.c.i"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vukolov/Documents/unit/lem-in/classes_lib/MLXConn.c > CMakeFiles/classes_lib.dir/MLXConn.c.i

classes_lib/CMakeFiles/classes_lib.dir/MLXConn.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/classes_lib.dir/MLXConn.c.s"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vukolov/Documents/unit/lem-in/classes_lib/MLXConn.c -o CMakeFiles/classes_lib.dir/MLXConn.c.s

classes_lib/CMakeFiles/classes_lib.dir/MLXConn.c.o.requires:

.PHONY : classes_lib/CMakeFiles/classes_lib.dir/MLXConn.c.o.requires

classes_lib/CMakeFiles/classes_lib.dir/MLXConn.c.o.provides: classes_lib/CMakeFiles/classes_lib.dir/MLXConn.c.o.requires
	$(MAKE) -f classes_lib/CMakeFiles/classes_lib.dir/build.make classes_lib/CMakeFiles/classes_lib.dir/MLXConn.c.o.provides.build
.PHONY : classes_lib/CMakeFiles/classes_lib.dir/MLXConn.c.o.provides

classes_lib/CMakeFiles/classes_lib.dir/MLXConn.c.o.provides.build: classes_lib/CMakeFiles/classes_lib.dir/MLXConn.c.o


classes_lib/CMakeFiles/classes_lib.dir/Image.c.o: classes_lib/CMakeFiles/classes_lib.dir/flags.make
classes_lib/CMakeFiles/classes_lib.dir/Image.c.o: ../classes_lib/Image.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vukolov/Documents/unit/lem-in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object classes_lib/CMakeFiles/classes_lib.dir/Image.c.o"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/classes_lib.dir/Image.c.o   -c /home/vukolov/Documents/unit/lem-in/classes_lib/Image.c

classes_lib/CMakeFiles/classes_lib.dir/Image.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/classes_lib.dir/Image.c.i"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vukolov/Documents/unit/lem-in/classes_lib/Image.c > CMakeFiles/classes_lib.dir/Image.c.i

classes_lib/CMakeFiles/classes_lib.dir/Image.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/classes_lib.dir/Image.c.s"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vukolov/Documents/unit/lem-in/classes_lib/Image.c -o CMakeFiles/classes_lib.dir/Image.c.s

classes_lib/CMakeFiles/classes_lib.dir/Image.c.o.requires:

.PHONY : classes_lib/CMakeFiles/classes_lib.dir/Image.c.o.requires

classes_lib/CMakeFiles/classes_lib.dir/Image.c.o.provides: classes_lib/CMakeFiles/classes_lib.dir/Image.c.o.requires
	$(MAKE) -f classes_lib/CMakeFiles/classes_lib.dir/build.make classes_lib/CMakeFiles/classes_lib.dir/Image.c.o.provides.build
.PHONY : classes_lib/CMakeFiles/classes_lib.dir/Image.c.o.provides

classes_lib/CMakeFiles/classes_lib.dir/Image.c.o.provides.build: classes_lib/CMakeFiles/classes_lib.dir/Image.c.o


classes_lib/CMakeFiles/classes_lib.dir/Linked_list.c.o: classes_lib/CMakeFiles/classes_lib.dir/flags.make
classes_lib/CMakeFiles/classes_lib.dir/Linked_list.c.o: ../classes_lib/Linked_list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vukolov/Documents/unit/lem-in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object classes_lib/CMakeFiles/classes_lib.dir/Linked_list.c.o"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/classes_lib.dir/Linked_list.c.o   -c /home/vukolov/Documents/unit/lem-in/classes_lib/Linked_list.c

classes_lib/CMakeFiles/classes_lib.dir/Linked_list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/classes_lib.dir/Linked_list.c.i"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vukolov/Documents/unit/lem-in/classes_lib/Linked_list.c > CMakeFiles/classes_lib.dir/Linked_list.c.i

classes_lib/CMakeFiles/classes_lib.dir/Linked_list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/classes_lib.dir/Linked_list.c.s"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vukolov/Documents/unit/lem-in/classes_lib/Linked_list.c -o CMakeFiles/classes_lib.dir/Linked_list.c.s

classes_lib/CMakeFiles/classes_lib.dir/Linked_list.c.o.requires:

.PHONY : classes_lib/CMakeFiles/classes_lib.dir/Linked_list.c.o.requires

classes_lib/CMakeFiles/classes_lib.dir/Linked_list.c.o.provides: classes_lib/CMakeFiles/classes_lib.dir/Linked_list.c.o.requires
	$(MAKE) -f classes_lib/CMakeFiles/classes_lib.dir/build.make classes_lib/CMakeFiles/classes_lib.dir/Linked_list.c.o.provides.build
.PHONY : classes_lib/CMakeFiles/classes_lib.dir/Linked_list.c.o.provides

classes_lib/CMakeFiles/classes_lib.dir/Linked_list.c.o.provides.build: classes_lib/CMakeFiles/classes_lib.dir/Linked_list.c.o


classes_lib/CMakeFiles/classes_lib.dir/room.c.o: classes_lib/CMakeFiles/classes_lib.dir/flags.make
classes_lib/CMakeFiles/classes_lib.dir/room.c.o: ../classes_lib/room.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vukolov/Documents/unit/lem-in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object classes_lib/CMakeFiles/classes_lib.dir/room.c.o"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/classes_lib.dir/room.c.o   -c /home/vukolov/Documents/unit/lem-in/classes_lib/room.c

classes_lib/CMakeFiles/classes_lib.dir/room.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/classes_lib.dir/room.c.i"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vukolov/Documents/unit/lem-in/classes_lib/room.c > CMakeFiles/classes_lib.dir/room.c.i

classes_lib/CMakeFiles/classes_lib.dir/room.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/classes_lib.dir/room.c.s"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vukolov/Documents/unit/lem-in/classes_lib/room.c -o CMakeFiles/classes_lib.dir/room.c.s

classes_lib/CMakeFiles/classes_lib.dir/room.c.o.requires:

.PHONY : classes_lib/CMakeFiles/classes_lib.dir/room.c.o.requires

classes_lib/CMakeFiles/classes_lib.dir/room.c.o.provides: classes_lib/CMakeFiles/classes_lib.dir/room.c.o.requires
	$(MAKE) -f classes_lib/CMakeFiles/classes_lib.dir/build.make classes_lib/CMakeFiles/classes_lib.dir/room.c.o.provides.build
.PHONY : classes_lib/CMakeFiles/classes_lib.dir/room.c.o.provides

classes_lib/CMakeFiles/classes_lib.dir/room.c.o.provides.build: classes_lib/CMakeFiles/classes_lib.dir/room.c.o


classes_lib/CMakeFiles/classes_lib.dir/queue.c.o: classes_lib/CMakeFiles/classes_lib.dir/flags.make
classes_lib/CMakeFiles/classes_lib.dir/queue.c.o: ../classes_lib/queue.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vukolov/Documents/unit/lem-in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object classes_lib/CMakeFiles/classes_lib.dir/queue.c.o"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/classes_lib.dir/queue.c.o   -c /home/vukolov/Documents/unit/lem-in/classes_lib/queue.c

classes_lib/CMakeFiles/classes_lib.dir/queue.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/classes_lib.dir/queue.c.i"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/vukolov/Documents/unit/lem-in/classes_lib/queue.c > CMakeFiles/classes_lib.dir/queue.c.i

classes_lib/CMakeFiles/classes_lib.dir/queue.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/classes_lib.dir/queue.c.s"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/vukolov/Documents/unit/lem-in/classes_lib/queue.c -o CMakeFiles/classes_lib.dir/queue.c.s

classes_lib/CMakeFiles/classes_lib.dir/queue.c.o.requires:

.PHONY : classes_lib/CMakeFiles/classes_lib.dir/queue.c.o.requires

classes_lib/CMakeFiles/classes_lib.dir/queue.c.o.provides: classes_lib/CMakeFiles/classes_lib.dir/queue.c.o.requires
	$(MAKE) -f classes_lib/CMakeFiles/classes_lib.dir/build.make classes_lib/CMakeFiles/classes_lib.dir/queue.c.o.provides.build
.PHONY : classes_lib/CMakeFiles/classes_lib.dir/queue.c.o.provides

classes_lib/CMakeFiles/classes_lib.dir/queue.c.o.provides.build: classes_lib/CMakeFiles/classes_lib.dir/queue.c.o


# Object files for target classes_lib
classes_lib_OBJECTS = \
"CMakeFiles/classes_lib.dir/new.c.o" \
"CMakeFiles/classes_lib.dir/Point.c.o" \
"CMakeFiles/classes_lib.dir/String.c.o" \
"CMakeFiles/classes_lib.dir/init_classes.c.o" \
"CMakeFiles/classes_lib.dir/MLXConn.c.o" \
"CMakeFiles/classes_lib.dir/Image.c.o" \
"CMakeFiles/classes_lib.dir/Linked_list.c.o" \
"CMakeFiles/classes_lib.dir/room.c.o" \
"CMakeFiles/classes_lib.dir/queue.c.o"

# External object files for target classes_lib
classes_lib_EXTERNAL_OBJECTS =

classes_lib/libclasses_lib.a: classes_lib/CMakeFiles/classes_lib.dir/new.c.o
classes_lib/libclasses_lib.a: classes_lib/CMakeFiles/classes_lib.dir/Point.c.o
classes_lib/libclasses_lib.a: classes_lib/CMakeFiles/classes_lib.dir/String.c.o
classes_lib/libclasses_lib.a: classes_lib/CMakeFiles/classes_lib.dir/init_classes.c.o
classes_lib/libclasses_lib.a: classes_lib/CMakeFiles/classes_lib.dir/MLXConn.c.o
classes_lib/libclasses_lib.a: classes_lib/CMakeFiles/classes_lib.dir/Image.c.o
classes_lib/libclasses_lib.a: classes_lib/CMakeFiles/classes_lib.dir/Linked_list.c.o
classes_lib/libclasses_lib.a: classes_lib/CMakeFiles/classes_lib.dir/room.c.o
classes_lib/libclasses_lib.a: classes_lib/CMakeFiles/classes_lib.dir/queue.c.o
classes_lib/libclasses_lib.a: classes_lib/CMakeFiles/classes_lib.dir/build.make
classes_lib/libclasses_lib.a: classes_lib/CMakeFiles/classes_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vukolov/Documents/unit/lem-in/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking C static library libclasses_lib.a"
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && $(CMAKE_COMMAND) -P CMakeFiles/classes_lib.dir/cmake_clean_target.cmake
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/classes_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
classes_lib/CMakeFiles/classes_lib.dir/build: classes_lib/libclasses_lib.a

.PHONY : classes_lib/CMakeFiles/classes_lib.dir/build

classes_lib/CMakeFiles/classes_lib.dir/requires: classes_lib/CMakeFiles/classes_lib.dir/new.c.o.requires
classes_lib/CMakeFiles/classes_lib.dir/requires: classes_lib/CMakeFiles/classes_lib.dir/Point.c.o.requires
classes_lib/CMakeFiles/classes_lib.dir/requires: classes_lib/CMakeFiles/classes_lib.dir/String.c.o.requires
classes_lib/CMakeFiles/classes_lib.dir/requires: classes_lib/CMakeFiles/classes_lib.dir/init_classes.c.o.requires
classes_lib/CMakeFiles/classes_lib.dir/requires: classes_lib/CMakeFiles/classes_lib.dir/MLXConn.c.o.requires
classes_lib/CMakeFiles/classes_lib.dir/requires: classes_lib/CMakeFiles/classes_lib.dir/Image.c.o.requires
classes_lib/CMakeFiles/classes_lib.dir/requires: classes_lib/CMakeFiles/classes_lib.dir/Linked_list.c.o.requires
classes_lib/CMakeFiles/classes_lib.dir/requires: classes_lib/CMakeFiles/classes_lib.dir/room.c.o.requires
classes_lib/CMakeFiles/classes_lib.dir/requires: classes_lib/CMakeFiles/classes_lib.dir/queue.c.o.requires

.PHONY : classes_lib/CMakeFiles/classes_lib.dir/requires

classes_lib/CMakeFiles/classes_lib.dir/clean:
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib && $(CMAKE_COMMAND) -P CMakeFiles/classes_lib.dir/cmake_clean.cmake
.PHONY : classes_lib/CMakeFiles/classes_lib.dir/clean

classes_lib/CMakeFiles/classes_lib.dir/depend:
	cd /home/vukolov/Documents/unit/lem-in/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vukolov/Documents/unit/lem-in /home/vukolov/Documents/unit/lem-in/classes_lib /home/vukolov/Documents/unit/lem-in/cmake-build-debug /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib /home/vukolov/Documents/unit/lem-in/cmake-build-debug/classes_lib/CMakeFiles/classes_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : classes_lib/CMakeFiles/classes_lib.dir/depend

