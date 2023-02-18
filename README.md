Exploration I:

**PURPOSE**
The purpose of this exploration was to get exposure to the different devices such as sensors, servos, and motors that a design team might incorporate in the construction of a robot. This exploration allowed for the learning of skills such as calibrating a servo motor and controlling its angle using a CdS cell and using microswitches to help a robot navigate through a course.

**SUMMARY AND RESULTS**
The team first got acquainted with the Crayola bot by carefully observing it and understanding how its wiring and mechanisms would interface with the Proteus micro-controller. Next, the CdS cell was used to determine light color. This was done by connecting the CdS to a flex I/O port on the proteus, programming to VsCode, downloading and inserting stored program on the micro-SD card. The result was CdS values from 0 to 3.3 V to the proteus LCD screen. A servo motor was controlled by a CdS cell through a means of a program which linearly scaled the servo motor angle from between 0 to 180 degrees with 0 degrees being fully exposed and 180 degrees being fully covered. Finally, four micro-switches were wired and hard coded to navigate through a maze through clicks when running into a wall. The result of this was a Crayola bot that could get from point A to point B of a “complex” maze using digital input of clicks on multiple switches. 

**APPLICATIONS**
This exploration provided valuable insight on the devices and ideas that can be incorporated into the robot. The team will add bumper switches like the ones used in this exploration on the bumper plate of the robot – this would allow for the robot to back up and then turn out of a corner similar to that done in the maze. Additionally, the use of the CdS cell to determine light color will be applied to our robot in order to determine which lever to flip based on the color of the light displayed on the course. Although the use of the CdS to control the servo angle was elegant, it will most likely not be applied to the robot since it is easy enough and more efficient to control the servo motor using normal conventions, or just not use a servo motor at all.
