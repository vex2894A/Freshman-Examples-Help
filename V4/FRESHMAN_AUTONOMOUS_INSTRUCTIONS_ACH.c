//BASIC AUTONOMOUS PROGRAMMING COMMANDS (FOR VEX NATURAL LAUGUAGE 2.0)

	// THE BASIC MOTOR CONTROLL COMMAND IS setMotor(port,speed);
	// USE THIS COMMAND INSIDE THE task(main) PARAMETERS, INSERTING THE PORT AND SPEED.
	// SAPMPLE CODE:

	setMotor(port1, 100);

	// TO WRITE A PROGRAM THAT PERFORMS VARIOUS FUNCTIONS, YOU NEED A WAIT COMMAND.
	// USE THE COMMAND wait(timeInSeconds);    THE TIME GIVEN WILL BE THE TIME ELLAPSED BEFORE THE NEXT COMMAND IS EXECUTED
	// EXAMPLE OF PROGRAM, AS APPLICABLE TO AUTONOMOUS ROBOT PROGRAMMING

	setMotor(port1,100);
	setMotor(port10,100);
	wait(0.5);

	// TO STOP ALL MOTORS USE THE COMMAND stopAllMotors(); AFTER THE wait(); COMMAND.
	//EXECUTING stopAllMotors(); COMMAND STOPS ALL MOTORS (OBVIOUSLY)

	//SAMPLE CODE

	setMotor(port1,100);
	setMotor(port10,100);
	wait(0.5);
	stopAllMotors();

	//--------------------------------------------------------------------------------------------------------------------------------\\


	//TO EXECUTE A AUTONOMOUS PROGRAM, YOU MUST SET THE CORTEX COMMUNICATION MODE TO USB ONLY
	// TO SET ROBOT COMMUNICATION MODE, ENTER THE WINDOW CALLED "ROBOT" LOCATED IN THE UPPER LEFT SIDE OF THE ROBOTC CONSOLE
	// OPEN SECTION TITLES "VEX CORTEX COMMUNICATION MODE" AND SELECT "USB ONLY"

	//--------------------------------------------------------------------------------------------------------------------------------\\
	//TUTORIAL BY ANDREW HENKE 2/14/19
