/*********************************************
Challenge 2:
Explain the challange and how you solved it:
In the 'if' I added the drive forward speed with a delay that I calculated to run
as close as possible to 2m. In the 'else', I used the brake method.
For the challenges, I added in a series of speed adjustments with short delays to bring it up to speed
then reversed the process to slow it to a stop before applying the brake.

Written by: Ben Jones
Date: 11-3-2024
*********************************************/
  #include "AIDriver.h"

  // Declare a pointer to a AIDriver object
  AIDriver *mrJonesDriving;

  bool myRepeat = true;
 	
  void setup(){   // sets up once as the program starts
    //Instantiate a two wheeled to the pointer 'mrJonesDriving'
    mrJonesDriving = new AIDriver();
  }
	
	void loop(){ // loops continuously 50 times a second
    if (myRepeat) {
      mrJonesDriving->driveForward(125,125);
      delay(3000);
      myRepeat = false;
    } else {
      mrJonesDriving->brake();
      delay(300);
    }
	}

/* Challenge notes 
Progressively accelerate or deaccelerate
 Students can either add a series of incling or declining speeds
 or they can use a loop before setting mRepeat to false
  for (int i = 125; i > 0; i = i-5) {
    mrJonesDriving->driveForward(i,i);
    delay(150);
  } 









