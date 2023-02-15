# ros2_message
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
