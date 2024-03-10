/*********************************************
Challenge 4:
Explain the challenge and how you solved it:
I called the driveForwardOneMeter function from the loop so it only runs once. The loop method is empty
so it doesn't do anything. In the driveForwardOneMeter function, I made the car drive forward brake, turn
to the right brake and drive forward and brake. I adjusted the delays so the distance
and turns were accurate.

Written by: Ben Jones
Date: 11-4-2024
*********************************************/
  #include "AIDriver.h"
  
  AIDriver *mrJonesDriving;
 	
	void setup(){   // sets up once as the program starts
    //Instantiate a two wheeled to the pointer 'mrJonesDriving'
    mrJonesDriving = new AIDriver();
    driveOneMeter(); //this will call the function
	}

	void loop(){ // loops continuously 50 times a second

	}

  void driveOneMeter () {
      mrJonesDriving->driveForward(130,125);
      delay(2000);
      mrJonesDriving->brake();
      delay(300);
      mrJonesDriving->rotateRight(200);
      delay(410);
      mrJonesDriving->brake();
      delay(300);
      mrJonesDriving->driveForward(130,125);
      delay(2000);
      mrJonesDriving->brake();
      delay(300);
}

/* Extension notes 
 - Move the function call from the setup to the loop, first predict then test
 - Then see how few lines of code you can write to make it go up and back constantly.
 - Progressively accelerate and/or deaccelerate my robot to full speed.