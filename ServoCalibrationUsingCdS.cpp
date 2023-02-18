/********************************/
/*Exploration 1 - Servo movement*/
/*     OSU FEH Spring 2023      */
/*        Jacob Capaldi         */
/*    02/10/23  Version 3.0.1   */
/********************************/

/* Include preprocessor directives */
#include <FEHLCD.h>
#include <FEHUtility.h>
#include <FEHIO.h>
#include <FEHMotor.h>
#include <FEHServo.h>


// declare servo
FEHServo servo_dude(FEHServo::Servo0);


// declare sensor
AnalogInputPin sensor(FEHIO::P0_0);


// Declare Variables
float x, theta, m=54.55, i=1;


int main(void)
{
    // Calibration
    // LCD.Clear(BLACK);
    // servo_dude.TouchCalibrate();
    
   
    // Execution
   
    servo_dude.SetMin(500);
    servo_dude.SetMax(2320);
   
    servo_dude.SetDegree(0);
    Sleep(3.0);
    servo_dude.SetDegree(180);
    Sleep(3.0);


    // continuously adjusts the servo angle based on the value of value read from the sensor {@code x}
    while (i==1)
    {
        x=sensor.Value();
        theta=m*x;
        servo_dude.SetDegree(theta);
    }
   
}
