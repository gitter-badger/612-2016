#ifndef FlywheelIntake_H
#define FlywheelIntake_H

#include "../CommandBase.h"
#include "../Subsystems/Shooter.h"
#include "Robot.h"
#include "WPILib.h"

class FlywheelIntake: public CommandBase
{
public:
	FlywheelIntake();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
