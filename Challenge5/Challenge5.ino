/*********************************************
Challenge 5:
Explain the challenge and how you solved it:


Written by: 
Date: 

*********************************************/
  #include "AIDriver.h"
  
  AIDriver *mrJonesDriving;
 	
	void setup(){   // sets up once as the program starts
    //Instantiate a two wheeled to the pointer 'mrJonesDriving'
    mrJonesDriving = new AIDriver();
	}

	void loop(){ // loops continuously 50 times a second
    if (mrJonesDriving->read() >= 100) {
      mrJonesDriving->driveForward(130,125);
    } else {
      turnArround();
    }
	}

  void turnArround () {
      mrJonesDriving->brake();
      delay(300);
      mrJonesDriving->rotateRight(200);
      delay(410);
      mrJonesDriving->brake();
      delay(300);
}

/* Extension notes 
 - Add options for different reactions if object is very close or just near.
 - Progressively accelerate and or deaccelerate my robot to full speed.