#include "FlywheelIntake.h"

FlywheelIntake::FlywheelIntake()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires((Subsystem*) Robot::shooter);
}

// Called just before this Command runs the first time
void FlywheelIntake::Initialize()
{
	Robot::shooter->LeftFly->Set(-0.8f);
	Robot::shooter->RightFly->Set(-0.8f);
}

// Called repeatedly when this Command is scheduled to run
void FlywheelIntake::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool FlywheelIntake::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void FlywheelIntake::End()
{
	Robot::shooter->LeftFly->Set(0.0f);
	Robot::shooter->RightFly->Set(0.0f);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void FlywheelIntake::Interrupted()
{
	std::printf("ERROR: FlywheelIntake Interrupted! \n");
	Robot::shooter->LeftFly->Set(0.0f);
	Robot::shooter->RightFly->Set(0.0f);
}
