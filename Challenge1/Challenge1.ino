/*********************************************
Challenge 1:
Explain the challenge and how you solved it:
I set the drive forward with different speeds on each wheel until I found
the correct speed to get a perfect circle.
For the challenges I played with different speed combinations and added delays
control the duration of wheel speed.

Written by: Ben Jones
Date: 11/3/2024
*********************************************/
#include "AIDriver.h"

// Declare a pointer to a AIDriver object
#include "AIDriver.h"

// Declare a pointer to a AIDriver object
  AIDriver *mrJonesDriving;
 	
	void setup(){   // sets up once as the program starts
    //Instantiate a two wheeled to the pointer 'mrJonesDriving'
    mrJonesDriving = new AIDriver();
	}

	void loop(){ // loops continuously 50 times a second
    mrJonesDriving->driveForward(50,150);
	}

/*
Challenge notes
 - Drive a circle both directions.
      Swap wheel speeds
      mrJonesDriving->driveForward(75,150) 
 - Drive a circle in reverse.
      Change the method to driveBackward
      mrJonesDriving->driveBackward(150,75)
 - Drive different sized circles.
      Increase the difference between the wheel speeds for smaller
      mrJonesDriving->driveForward(50,200) 
      Decrease the difference between the wheel speeds for Bigger
      mrJonesDriving->driveForward(175,200) 
 - Stop and pause at each loop.
      1. Time how long it takes to do a circle
      2. After driveForward add a delay for that many seconds 
          delay(7500); //assuming it takes 7.5 seconds to do a lap
      3. Set speed to zero
      4. Add a delay for 2 seconds
          delay(2000);
 - Drive a figure 8.
      1. Car does a single lap
      2. Swap wheel speeds
      3. Car does a lap
      4. Don't forget to add delay for both laps
*/

