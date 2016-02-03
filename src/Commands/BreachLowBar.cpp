// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#include "BreachLowBar.h"
#include "Timer.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

BreachLowBar::BreachLowBar() :
		Command()
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	timer = new Timer();

	Requires(Robot::drivetrain.get());
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void BreachLowBar::Initialize()
{
	timer->Start();
}

// Called repeatedly when this Command is scheduled to run
void BreachLowBar::Execute()
{
	if(timer->Get() < 4)
		{
			Robot::drivetrain->cANTalon1->Set(0.4f);
			Robot::drivetrain->cANTalon2->Set(0.4f);
			Robot::drivetrain->cANTalon3->Set(0.4f);
			Robot::drivetrain->cANTalon4->Set(0.4f);
		}
	else
		{
			Robot::drivetrain->cANTalon1->Set(0.0f);
			Robot::drivetrain->cANTalon2->Set(0.0f);
			Robot::drivetrain->cANTalon3->Set(0.0f);
			Robot::drivetrain->cANTalon4->Set(0.0f);
			timer -> Stop();
		}

}

// Make this return true when this Command no longer needs to run execute()
bool BreachLowBar::IsFinished()
{
	if(timer -> Get() >= 3)
	{
		return true;
	}
	return false;
}

// Called once after isFinished returns true
void BreachLowBar::End()
{
	Robot::drivetrain->cANTalon1->Set(0.0f);
				Robot::drivetrain->cANTalon2->Set(0.0f);
				Robot::drivetrain->cANTalon3->Set(0.0f);
				Robot::drivetrain->cANTalon4->Set(0.0f);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void BreachLowBar::Interrupted()
{

}
