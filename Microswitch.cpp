/********************************/
/* Exploration 1 - MicroSwitches*/
/*     OSU FEH Spring 2020      */
/*        Stephen Tranter       */
/*    02/10/23  Version 3.0.1   */
/********************************/


/* Include preprocessor directives */
#include <FEHLCD.h>
#include <FEHIO.h>
#include <FEHUtility.h>
#include <FEHMotor.h>
#include <FEHServo.h>
#include <FEHAccel.h>
#include <FEHBattery.h>
#include <FEHBuzzer.h>
#include <FEHRPS.h>
#include <FEHSD.h>
#include <string.h>
#include <stdio.h>


int main(void){
    LCD.Clear(RED);
    LCD.Write("I'm moving");
    // declares motors on motor port 0 and motor port 1
    FEHMotor right_motor(FEHMotor::Motor1, 9.0);
    FEHMotor left_motor(FEHMotor::Motor0, 9.0);
   
    // declares switches to input and output ports
    DigitalInputPin frontSwitchLeft(FEHIO::P0_3);
    DigitalInputPin frontSwitchRight(FEHIO::P0_2);
    DigitalInputPin backSwitchLeft(FEHIO::P1_7);
    DigitalInputPin backSwitchRight(FEHIO::P1_3);


    // variable to keep track of state during the driving process
    int counter=0;


    /*
    * Drive States:
    * Drive State 0: Go forward (straight path)
    * Drive State 1: Turn backwards to the right
    * Drive State 2: Go forward (straight path)
    * Drive State 3: Turn backwards to the left
    * Drive State 4: Go forward (straight path)
    * Drive State 5: STOP BOI
    */


    // infinite while loop to get crayola bot to continuously run
    while(1==1){
        while(counter ==0 || counter==2 || counter==4){
            // set right motor power "full" speed forward
            right_motor.SetPercent(50);
   
            // set right motor power "full" speed backward
            left_motor.SetPercent(50);


            // waits for the front left and right switches to be pressed
            if(!frontSwitchLeft.Value() && !frontSwitchRight.Value()){


                // once the switches have been pressed, increment to the next driving process state
                counter++;
            }
        }


        while(counter ==1){
            // set right motor power full speed forward
            right_motor.SetPercent(-30);
   
            // set right motor power full speed backward
            left_motor.SetPercent(-10);


            // waits for the front left and right switches to be pressed
            if(!backSwitchLeft.Value() && !backSwitchRight.Value()){


                // once the switches have been pressed, increment to the next driving process state
                counter++;
            }
        }


        while(counter ==3){
            // set right motor power full speed forward
            right_motor.SetPercent(-5);
   
            // set right motor power full speed backward
            left_motor.SetPercent(-50);


            // waits for the front left and right switches to be pressed
            if(!backSwitchLeft.Value() && !backSwitchRight.Value()){


                // once the switches have been pressed, increment to the next driving process state
                counter++;
            }
        }


        while(counter==5){
            // stop bro your gonna be tired
            // final driving process state - ends driving process by stopping both motors
            right_motor.SetPercent(0);
            left_motor.SetPercent(0);
        }
    }
   
}
