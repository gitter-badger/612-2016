#ifndef MagnusShooter_H
#define MagnusShooter_H

#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "WPILib.h"

class MagnusShooter: public Command
{
public:
	MagnusShooter();
	void Initialize(float x, float y, float d);
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
	//measured in inches
	float xOffset; //target offset from camera center, negative is left and positive is right
	float yOffset; //target offset from camera center, negative is down and positive is up
	float distance; //distance from camera to target
	float yCurOffset; //Current y offset from original camera center
};

#endif
