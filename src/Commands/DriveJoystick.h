// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#ifndef DRIVEJOYSTICK_H
#define DRIVEJOYSTICK_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class DriveJoystick: public Command
{
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR
	DriveJoystick();
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

private:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=VARIABLES

	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=VARIABLES
	bool isXbox;
	float DEADZONE = 0.1; //constant

	float leftPos;
	float rightPos;
};

#endif
