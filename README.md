# Sewage-Cleaning-Robot

## Purpose
To clean closed sewage lines without human help.

## Scientific principle involved
In the close sewage lines methane is collected which causes death when there is long exposure to it. To reduce the increasing number of death of the cleaners, an automatic robot is made in this project which uses sensors and motors to clean the sewage line automatically.

## Construction and working
The base of the whole model is made with wood. The front end is the input for the sewage which is controlled by a servo motor. The sewage is collected in cuboidal compartment which is lifted at an angle to push the sewage at back. A gate is constructed at the back of the compartment which throws all the sewage at a given spot.
The robot first runs for a distance 40 cm to collect the waste with the help of some motors and servos controlled with the help of a microcontroller (Arduino). The distance is sensed with the help of HC –SRO4 Ultrasonic sensors 
The distance is calculated in the following way:
-	First, arduino calculates the time taken to reflect the ultrasound to ultrasonic sensor.
-	Now, with the help of speed of sound and the time calculated earlier it calculates the distance from the sewage line back wall. 

Then, the robot comes back and throws all the sewage at the beginning of the closed sewage line from a gate constructed at the back of the robot which is operated with the help of a servo motor. Now the solid sewage can be removed out of the sewage with the help of a crane.
The robot will increase its range of cleaning step by step.
To power this robot we will use an external power supply so there will be no loose connections in the robot which will prevent the wire from arcing with its connection and this will in turn prevent the ignition of methane present inside the sewage lines.

## Circuit
![N|Solid](https://raw.githubusercontent.com/namanteg/Sewage-Cleaning-Robot/main/CIRCUIT%20-%20SEWAGE%20CLEANING%20ROBOT.png)

## Final Model
![N|Solid](https://raw.githubusercontent.com/namanteg/Sewage-Cleaning-Robot/main/Photos/3.jpeg)
