# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.8

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.2.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.2.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\CS\Github\C_Study\Ex_Files_C_EssT\E5_decision-making

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\CS\Github\C_Study\Ex_Files_C_EssT\E5_decision-making\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/E5_decision_making.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/E5_decision_making.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/E5_decision_making.dir/flags.make

CMakeFiles/E5_decision_making.dir/main.c.obj: CMakeFiles/E5_decision_making.dir/flags.make
CMakeFiles/E5_decision_making.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\CS\Github\C_Study\Ex_Files_C_EssT\E5_decision-making\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/E5_decision_making.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\E5_decision_making.dir\main.c.obj   -c E:\CS\Github\C_Study\Ex_Files_C_EssT\E5_decision-making\main.c

CMakeFiles/E5_decision_making.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/E5_decision_making.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\CS\Github\C_Study\Ex_Files_C_EssT\E5_decision-making\main.c > CMakeFiles\E5_decision_making.dir\main.c.i

CMakeFiles/E5_decision_making.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/E5_decision_making.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\CS\Github\C_Study\Ex_Files_C_EssT\E5_decision-making\main.c -o CMakeFiles\E5_decision_making.dir\main.c.s

CMakeFiles/E5_decision_making.dir/main.c.obj.requires:

.PHONY : CMakeFiles/E5_decision_making.dir/main.c.obj.requires

CMakeFiles/E5_decision_making.dir/main.c.obj.provides: CMakeFiles/E5_decision_making.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\E5_decision_making.dir\build.make CMakeFiles/E5_decision_making.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/E5_decision_making.dir/main.c.obj.provides

CMakeFiles/E5_decision_making.dir/main.c.obj.provides.build: CMakeFiles/E5_decision_making.dir/main.c.obj


# Object files for target E5_decision_making
E5_decision_making_OBJECTS = \
"CMakeFiles/E5_decision_making.dir/main.c.obj"

# External object files for target E5_decision_making
E5_decision_making_EXTERNAL_OBJECTS =

E5_decision_making.exe: CMakeFiles/E5_decision_making.dir/main.c.obj
E5_decision_making.exe: CMakeFiles/E5_decision_making.dir/build.make
E5_decision_making.exe: CMakeFiles/E5_decision_making.dir/linklibs.rsp
E5_decision_making.exe: CMakeFiles/E5_decision_making.dir/objects1.rsp
E5_decision_making.exe: CMakeFiles/E5_decision_making.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\CS\Github\C_Study\Ex_Files_C_EssT\E5_decision-making\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable E5_decision_making.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\E5_decision_making.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/E5_decision_making.dir/build: E5_decision_making.exe

.PHONY : CMakeFiles/E5_decision_making.dir/build

CMakeFiles/E5_decision_making.dir/requires: CMakeFiles/E5_decision_making.dir/main.c.obj.requires

.PHONY : CMakeFiles/E5_decision_making.dir/requires

CMakeFiles/E5_decision_making.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\E5_decision_making.dir\cmake_clean.cmake
.PHONY : CMakeFiles/E5_decision_making.dir/clean

CMakeFiles/E5_decision_making.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\CS\Github\C_Study\Ex_Files_C_EssT\E5_decision-making E:\CS\Github\C_Study\Ex_Files_C_EssT\E5_decision-making E:\CS\Github\C_Study\Ex_Files_C_EssT\E5_decision-making\cmake-build-debug E:\CS\Github\C_Study\Ex_Files_C_EssT\E5_decision-making\cmake-build-debug E:\CS\Github\C_Study\Ex_Files_C_EssT\E5_decision-making\cmake-build-debug\CMakeFiles\E5_decision_making.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/E5_decision_making.dir/depend

