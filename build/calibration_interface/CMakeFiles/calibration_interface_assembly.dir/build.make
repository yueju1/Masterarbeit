# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pmlab/yueju/move_tool/src/calibration_interface

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pmlab/yueju/move_tool/build/calibration_interface

# Utility rule file for calibration_interface_assembly.

# Include any custom commands dependencies for this target.
include CMakeFiles/calibration_interface_assembly.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/calibration_interface_assembly.dir/progress.make

CMakeFiles/calibration_interface_assembly:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/pmlab/yueju/move_tool/build/calibration_interface/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "/usr/bin/cmake;-version;/usr/bin/dotnet restore calibration_interface_assembly_dotnetcore.csproj;          /usr/bin/dotnet build calibration_interface_assembly_dotnetcore.csproj -> /home/pmlab/yueju/move_tool/build/calibration_interface/calibration_interface_assembly"
	cd /home/pmlab/yueju/move_tool/build/calibration_interface/calibration_interface_assembly && /usr/bin/cmake -DCSHARP_TARGET_FRAMEWORK="netstandard2.0" -DCSHARP_BUILDER_OUTPUT_TYPE="library" -DCSHARP_BUILDER_OUTPUT_PATH="/home/pmlab/yueju/move_tool/build/calibration_interface/" -DCSHARP_PLATFORM="x64" -DCSHARP_BUILDER_OUTPUT_NAME="calibration_interface_assembly" -DCSHARP_CONFIGURE="Release" -DCSHARP_BUILDER_ADDITIONAL_REFERENCES="<Reference Include=\"/home/pmlab/ros2-for-unity/ros2-for-unity/install/lib/dotnet/ros2cs_common.dll\" />" -DCSHARP_BUILDER_SOURCES="<Compile Include=\"/home/pmlab/yueju/move_tool/build/calibration_interface/rosidl_generator_cs/calibration_interface/srv/calibrate_gripper.cs\" />" -DCSHARP_TARGET_FRAMEWORK_VERSION="2.0" -DCSHARP_PACKAGE_REFERENCES="" -DMSBUILD_TOOLSET="12.0" -DCSHARP_IMPORTS="" -DCONFIG_INPUT_FILE="/home/pmlab/ros2-for-unity/ros2-for-unity/install/share/dotnet_cmake_module/cmake/Modules/dotnet/dotnetcore.csproj.in" -DCONFIG_OUTPUT_FILE="/home/pmlab/yueju/move_tool/build/calibration_interface/calibration_interface_assembly/calibration_interface_assembly_dotnetcore.csproj" -P /home/pmlab/ros2-for-unity/ros2-for-unity/install/share/dotnet_cmake_module/cmake/ConfigureFile.cmake
	cd /home/pmlab/yueju/move_tool/build/calibration_interface/calibration_interface_assembly && /usr/bin/cmake -DCSHARP_PACKAGE_REFERENCES="" -DCONFIG_INPUT_FILE="/home/pmlab/ros2-for-unity/ros2-for-unity/install/share/dotnet_cmake_module/cmake/Modules/dotnet/packages.config.in" -DCONFIG_OUTPUT_FILE="/home/pmlab/yueju/move_tool/build/calibration_interface/calibration_interface_assembly/packages.config" -P /home/pmlab/ros2-for-unity/ros2-for-unity/install/share/dotnet_cmake_module/cmake/ConfigureFile.cmake
	cd /home/pmlab/yueju/move_tool/build/calibration_interface/calibration_interface_assembly && /usr/bin/cmake -DCSHARP_BUILDER_OUTPUT_NAME="calibration_interface_assembly" -DCONFIG_INPUT_FILE="/home/pmlab/ros2-for-unity/ros2-for-unity/install/share/dotnet_cmake_module/cmake/Modules/dotnet/Directory.Build.props.in" -DCONFIG_OUTPUT_FILE="/home/pmlab/yueju/move_tool/build/calibration_interface/calibration_interface_assembly/Directory.Build.props" -P /home/pmlab/ros2-for-unity/ros2-for-unity/install/share/dotnet_cmake_module/cmake/ConfigureFile.cmake
	cd /home/pmlab/yueju/move_tool/build/calibration_interface/calibration_interface_assembly && /usr/bin/cmake -version
	cd /home/pmlab/yueju/move_tool/build/calibration_interface/calibration_interface_assembly && /usr/bin/dotnet restore calibration_interface_assembly_dotnetcore.csproj
	cd /home/pmlab/yueju/move_tool/build/calibration_interface/calibration_interface_assembly && /usr/bin/dotnet build calibration_interface_assembly_dotnetcore.csproj -c=Release

calibration_interface_assembly: CMakeFiles/calibration_interface_assembly
calibration_interface_assembly: CMakeFiles/calibration_interface_assembly.dir/build.make
.PHONY : calibration_interface_assembly

# Rule to build all files generated by this target.
CMakeFiles/calibration_interface_assembly.dir/build: calibration_interface_assembly
.PHONY : CMakeFiles/calibration_interface_assembly.dir/build

CMakeFiles/calibration_interface_assembly.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/calibration_interface_assembly.dir/cmake_clean.cmake
.PHONY : CMakeFiles/calibration_interface_assembly.dir/clean

CMakeFiles/calibration_interface_assembly.dir/depend:
	cd /home/pmlab/yueju/move_tool/build/calibration_interface && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pmlab/yueju/move_tool/src/calibration_interface /home/pmlab/yueju/move_tool/src/calibration_interface /home/pmlab/yueju/move_tool/build/calibration_interface /home/pmlab/yueju/move_tool/build/calibration_interface /home/pmlab/yueju/move_tool/build/calibration_interface/CMakeFiles/calibration_interface_assembly.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/calibration_interface_assembly.dir/depend

