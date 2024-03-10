/*********************************************
Challenge 4:
Explain the challenge and how you solved it:


Written by: 
Date: 

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