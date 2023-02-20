/* 
 * rosserial Subscriber Example
 * Blinks an LED on callback
 */

#include <ros.h> //include the ros library.
#include <std_msgs/Empty.h> //include the package called std_msgs which has a type called Empty.

ros::NodeHandle  nh; //initializing the ros1 NodeHandle.


//A call_back function that subscribe to the topic "/toggle_led".
void messageCb( const std_msgs::Empty& toggle_msg){
  digitalWrite(13, HIGH-digitalRead(13));   // blink the L.E.D (L.E.D attached to pin 13 of the arduino).
}

ros::Subscriber<std_msgs::Empty> sub("toggle_led", &messageCb ); //subscription to the call_back function called messagecb

void setup()
{ 
  pinMode(13, OUTPUT);
  nh.initNode();
  nh.subscribe(sub);
}

void loop()
{  
  nh.spinOnce();
  delay(1);
}
