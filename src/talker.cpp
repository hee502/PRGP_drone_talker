///////////////////////////////////////////////////////////////////////////////
//Source for talker node to send basic commands to AR-Drone		     					 //
//v1.0									     																								 //
//First creation							    																					 //
//Huseyin Emre Erdem																										     //
//04.08.2014																														     //
///////////////////////////////////////////////////////////////////////////////

#include "ros/ros.h"
#include "std_msgs/String.h"
#include "std_msgs/Empty.h"

#include <sstream>
#include "std_msgs/Duration.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "talker"); //Create node called talker

  ros::NodeHandle n;//Create nodehandle to alter node parameters
  ros::Duration d = ros::Duration(2,0);//Duration object to pause node

  ros::Publisher land_pub = n.advertise<std_msgs::Empty>("/ardrone/land",1);//Publisher to send landing commands
  ros::Publisher takeoff_pub = n.advertise<std_msgs::Empty>("/ardrone/takeoff",1);//Publisher to send takeoff commands
  //ros::Publisher drone_pub = n.advertise<std_msgs::String>("tum_ardrone/com",50);

  d.sleep(); //Wait for 2 seconds to be published

  takeoff_pub.publish(std_msgs::Empty());//Publish take0ff message
  ROS_INFO("TAKEOFF!");//Inform user on the terminal

  /*Initialize PTAM*/
	/*std_msgs::String s;
	std::string c;
	c = "c autoInit";
	s.data = c.c_str();
	drone_pub.publish(s);
	d.sleep();*/
  //land_pub.publish(std_msgs::Empty());
  //c = "c land";
	//s.data = c.c_str();
	//drone_pub.publish(s);
	//ROS_INFO("LAND!");
	/*Land*/
	
	land_pub.publish(std_msgs::Empty());//Publish landing command
	ROS_INFO("LAND!");//Inform user

  //while(1){
  //}

  //ros::spinOnce();

  //loop_rate.sleep();
  //++count;
  //}


  return 0;
}
