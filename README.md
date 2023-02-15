# ros2_message.
This package explains how to create a ros2 custom message/interface.

Create a package in the src folder/directory:
```
 ros2 pkg create message_creation --build-type ament_cmake --dependecies rclcpp std_msgs
 ```
In the newly created folder/package,we are going to create a directory called msg.Once we are done with that we will cd into the msg directory/folder and use the command below to create a file called "Creation.msg"
```
 touch Creation.msg
```
In the Creation.msg file add the following below:
```
 int32 day
 string month
 int32 year
```
befor we compile our workspace we have to modeify our CMakeLists.txt and package.xml file.In the CMakeLists.txt add the following below:
```
find_package(rosidl_default_generators REQUIRED)
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()
```
The function above includes all the messages of package to be compiled,this also should be added into the "CMakeLists.txt" file.
We also need to do some modification in the package.xml file.Add the following below to your package.xml file.
```
  <buildtool_depend>rosidl_default_generators</buildtool_depend>
  <exec_depend>rosidl_default_runtime</exec_depend>
  <member_of_group>rosidl_interface_packages</member_of_group>
```
The after we are done with all the above modification,we will build our workspace with the:
```
colocon build or 
colcon build --symlink-install
```
Then we will the source the workspace:
```
source install/setup.bash
```
