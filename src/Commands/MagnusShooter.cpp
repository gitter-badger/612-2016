#include "MagnusShooter.h"

MagnusShooter::MagnusShooter(): Command()
{
	Requires(Robot::shooter.get());
}

// Called just before this Command runs the first time
void MagnusShooter::Initialize(float x, float y, float d)
{
	xOffset = x;
	yOffset = y;
	distance = d;
	yCurOffset = 0.0f;
}

// Called repeatedly when this Command is scheduled to run
void MagnusShooter::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool MagnusShooter::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void MagnusShooter::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MagnusShooter::Interrupted()
{

}
