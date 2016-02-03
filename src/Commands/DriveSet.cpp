// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.
/*This command takes two float values in the constructor, 
and then sends those values repeatedly into the SetManualDrive Method of Drivetrain. */
#include "DriveSet.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR



DriveSet::DriveSet(float val1, float val2) :
		Command()
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::drivetrain.get());
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES

	outputPower = val1;
	curveSharpness = val2;


}
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void DriveSet::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void DriveSet::Execute()
{
	Robot::drivetrain->SetManualDrive(outputPower, curveSharpness);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveSet::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void DriveSet::End()
{
	Robot::drivetrain->SetManualDrive(0.0f, 0.0f);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveSet::Interrupted()
{
	Robot::drivetrain.get()->SetManualDrive(0.0f,0.0f);
}
