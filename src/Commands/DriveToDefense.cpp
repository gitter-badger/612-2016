// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.
/*For Right now, just have this command drive the robot straight forward
using the SetManualDrive method for 2 seconds at .5 power. You will need to use a timer. */
#include "DriveToDefense.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

DriveToDefense::DriveToDefense() :
		Command()
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::drivetrain.get());
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void DriveToDefense::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void DriveToDefense::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool DriveToDefense::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void DriveToDefense::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveToDefense::Interrupted()
{

}