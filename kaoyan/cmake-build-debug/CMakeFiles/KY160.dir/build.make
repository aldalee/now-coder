# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\WorkSpace\IDE\clion\Arithmetic\NowCoder\kaoyan

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\WorkSpace\IDE\clion\Arithmetic\NowCoder\kaoyan\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/KY160.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/KY160.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/KY160.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/KY160.dir/flags.make

CMakeFiles/KY160.dir/KY160_Mode.cpp.obj: CMakeFiles/KY160.dir/flags.make
CMakeFiles/KY160.dir/KY160_Mode.cpp.obj: ../KY160_Mode.cpp
CMakeFiles/KY160.dir/KY160_Mode.cpp.obj: CMakeFiles/KY160.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\WorkSpace\IDE\clion\Arithmetic\NowCoder\kaoyan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/KY160.dir/KY160_Mode.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/KY160.dir/KY160_Mode.cpp.obj -MF CMakeFiles\KY160.dir\KY160_Mode.cpp.obj.d -o CMakeFiles\KY160.dir\KY160_Mode.cpp.obj -c D:\WorkSpace\IDE\clion\Arithmetic\NowCoder\kaoyan\KY160_Mode.cpp

CMakeFiles/KY160.dir/KY160_Mode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/KY160.dir/KY160_Mode.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\WorkSpace\IDE\clion\Arithmetic\NowCoder\kaoyan\KY160_Mode.cpp > CMakeFiles\KY160.dir\KY160_Mode.cpp.i

CMakeFiles/KY160.dir/KY160_Mode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/KY160.dir/KY160_Mode.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\WorkSpace\IDE\clion\Arithmetic\NowCoder\kaoyan\KY160_Mode.cpp -o CMakeFiles\KY160.dir\KY160_Mode.cpp.s

# Object files for target KY160
KY160_OBJECTS = \
"CMakeFiles/KY160.dir/KY160_Mode.cpp.obj"

# External object files for target KY160
KY160_EXTERNAL_OBJECTS =

KY160.exe: CMakeFiles/KY160.dir/KY160_Mode.cpp.obj
KY160.exe: CMakeFiles/KY160.dir/build.make
KY160.exe: CMakeFiles/KY160.dir/linklibs.rsp
KY160.exe: CMakeFiles/KY160.dir/objects1.rsp
KY160.exe: CMakeFiles/KY160.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\WorkSpace\IDE\clion\Arithmetic\NowCoder\kaoyan\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable KY160.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\KY160.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/KY160.dir/build: KY160.exe
.PHONY : CMakeFiles/KY160.dir/build

CMakeFiles/KY160.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\KY160.dir\cmake_clean.cmake
.PHONY : CMakeFiles/KY160.dir/clean

CMakeFiles/KY160.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\WorkSpace\IDE\clion\Arithmetic\NowCoder\kaoyan D:\WorkSpace\IDE\clion\Arithmetic\NowCoder\kaoyan D:\WorkSpace\IDE\clion\Arithmetic\NowCoder\kaoyan\cmake-build-debug D:\WorkSpace\IDE\clion\Arithmetic\NowCoder\kaoyan\cmake-build-debug D:\WorkSpace\IDE\clion\Arithmetic\NowCoder\kaoyan\cmake-build-debug\CMakeFiles\KY160.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/KY160.dir/depend

