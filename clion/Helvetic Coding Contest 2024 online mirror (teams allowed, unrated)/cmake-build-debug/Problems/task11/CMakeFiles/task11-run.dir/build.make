# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = C:\Users\27188\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\27188\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\clion\acm_exercises\Helvetic Coding Contest 2024 online mirror (teams allowed, unrated)"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\clion\acm_exercises\Helvetic Coding Contest 2024 online mirror (teams allowed, unrated)\cmake-build-debug"

# Include any dependencies generated for this target.
include Problems/task11/CMakeFiles/task11-run.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Problems/task11/CMakeFiles/task11-run.dir/compiler_depend.make

# Include the progress variables for this target.
include Problems/task11/CMakeFiles/task11-run.dir/progress.make

# Include the compile flags for this target's objects.
include Problems/task11/CMakeFiles/task11-run.dir/flags.make

Problems/task11/CMakeFiles/task11-run.dir/src/main.cpp.obj: Problems/task11/CMakeFiles/task11-run.dir/flags.make
Problems/task11/CMakeFiles/task11-run.dir/src/main.cpp.obj: D:/clion/acm_exercises/Helvetic\ Coding\ Contest\ 2024\ online\ mirror\ (teams\ allowed,\ unrated)/Problems/task11/src/main.cpp
Problems/task11/CMakeFiles/task11-run.dir/src/main.cpp.obj: Problems/task11/CMakeFiles/task11-run.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\clion\acm_exercises\Helvetic Coding Contest 2024 online mirror (teams allowed, unrated)\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Problems/task11/CMakeFiles/task11-run.dir/src/main.cpp.obj"
	cd /d "D:\clion\acm_exercises\Helvetic Coding Contest 2024 online mirror (teams allowed, unrated)\cmake-build-debug\Problems\task11" && C:\Users\27188\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Problems/task11/CMakeFiles/task11-run.dir/src/main.cpp.obj -MF CMakeFiles\task11-run.dir\src\main.cpp.obj.d -o CMakeFiles\task11-run.dir\src\main.cpp.obj -c "D:\clion\acm_exercises\Helvetic Coding Contest 2024 online mirror (teams allowed, unrated)\Problems\task11\src\main.cpp"

Problems/task11/CMakeFiles/task11-run.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/task11-run.dir/src/main.cpp.i"
	cd /d "D:\clion\acm_exercises\Helvetic Coding Contest 2024 online mirror (teams allowed, unrated)\cmake-build-debug\Problems\task11" && C:\Users\27188\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\clion\acm_exercises\Helvetic Coding Contest 2024 online mirror (teams allowed, unrated)\Problems\task11\src\main.cpp" > CMakeFiles\task11-run.dir\src\main.cpp.i

Problems/task11/CMakeFiles/task11-run.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/task11-run.dir/src/main.cpp.s"
	cd /d "D:\clion\acm_exercises\Helvetic Coding Contest 2024 online mirror (teams allowed, unrated)\cmake-build-debug\Problems\task11" && C:\Users\27188\AppData\Local\Programs\CLion\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\clion\acm_exercises\Helvetic Coding Contest 2024 online mirror (teams allowed, unrated)\Problems\task11\src\main.cpp" -o CMakeFiles\task11-run.dir\src\main.cpp.s

# Object files for target task11-run
task11__run_OBJECTS = \
"CMakeFiles/task11-run.dir/src/main.cpp.obj"

# External object files for target task11-run
task11__run_EXTERNAL_OBJECTS =

Problems/task11/task11-run.exe: Problems/task11/CMakeFiles/task11-run.dir/src/main.cpp.obj
Problems/task11/task11-run.exe: Problems/task11/CMakeFiles/task11-run.dir/build.make
Problems/task11/task11-run.exe: Problems/task11/CMakeFiles/task11-run.dir/linkLibs.rsp
Problems/task11/task11-run.exe: Problems/task11/CMakeFiles/task11-run.dir/objects1.rsp
Problems/task11/task11-run.exe: Problems/task11/CMakeFiles/task11-run.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:\clion\acm_exercises\Helvetic Coding Contest 2024 online mirror (teams allowed, unrated)\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable task11-run.exe"
	cd /d "D:\clion\acm_exercises\Helvetic Coding Contest 2024 online mirror (teams allowed, unrated)\cmake-build-debug\Problems\task11" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\task11-run.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Problems/task11/CMakeFiles/task11-run.dir/build: Problems/task11/task11-run.exe
.PHONY : Problems/task11/CMakeFiles/task11-run.dir/build

Problems/task11/CMakeFiles/task11-run.dir/clean:
	cd /d "D:\clion\acm_exercises\Helvetic Coding Contest 2024 online mirror (teams allowed, unrated)\cmake-build-debug\Problems\task11" && $(CMAKE_COMMAND) -P CMakeFiles\task11-run.dir\cmake_clean.cmake
.PHONY : Problems/task11/CMakeFiles/task11-run.dir/clean

Problems/task11/CMakeFiles/task11-run.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\clion\acm_exercises\Helvetic Coding Contest 2024 online mirror (teams allowed, unrated)" "D:\clion\acm_exercises\Helvetic Coding Contest 2024 online mirror (teams allowed, unrated)\Problems\task11" "D:\clion\acm_exercises\Helvetic Coding Contest 2024 online mirror (teams allowed, unrated)\cmake-build-debug" "D:\clion\acm_exercises\Helvetic Coding Contest 2024 online mirror (teams allowed, unrated)\cmake-build-debug\Problems\task11" "D:\clion\acm_exercises\Helvetic Coding Contest 2024 online mirror (teams allowed, unrated)\cmake-build-debug\Problems\task11\CMakeFiles\task11-run.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : Problems/task11/CMakeFiles/task11-run.dir/depend

