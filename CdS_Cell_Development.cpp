/********************************/
/*  Exploration 1 - CdS cell    */
/*     OSU FEH Spring 2023      */
/*        Zachary Smith         */
/*    02/10/23  Version 3.0.1   */
/********************************/


/* Include preprocessor directives */
#include <FEHLCD.h>
#include <FEHIO.h>
#include <FEHMotor.h>
#include <FEHServo.h>


// declare variables
float x, i=1;


// declare the sensor as an AnalogInputPin
 AnalogInputPin sensor(FEHIO::P0_0);


int main(void)
{
    LCD.Clear();
    // continuously read the value of sensor
    while(i=1)
    {
        x = sensor.Value();
        LCD.WriteLine(x);
        Sleep(2.0);
    }  


}
