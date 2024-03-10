/*********************************************
Challenge 3:
Explain the challenge and how you solved it:
I drove forward for a set period, braked, then rotated right and braked again. I used the brakes as I found they
improved the accuracy of tthey timer. I then put a set brake in the else once the 'IF' has run 4 times,
it sets the brakes permanently. 

Written by: Ben Jones
Date: 11/3/2024
*********************************************/
#include "AIDriver.h"

// Declare a pointer to a AIDriver object
  AIDriver *mrJonesDriving;
 	
  int myCount = 0;

	void setup(){   // sets up once as the program starts
    //Instantiate a two wheeled to the pointer 'mrJonesDriving'
    mrJonesDriving = new AIDriver();
	}

	void loop(){ // loops continuously 50 times a second
    while (myCount < 4) {
      mrJonesDriving->driveForward(130,125);
      delay(1800);
      mrJonesDriving->brake();
      delay(300);
      mrJonesDriving->rotateRight(200);
      delay(290);
      mrJonesDriving->brake();
      delay(300);
      myCount = myCount + 1;
    } 
      mrJonesDriving->brake();
      delay(300);
	}

  /* Extension notes 
 - I can drive a triangle.
 - I can put the turn and forward commands in sperate functions to call on demand.
 - I can use a for loop to do the exact some challenge.