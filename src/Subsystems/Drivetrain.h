// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Drivetrain: public Subsystem
{
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
	std::shared_ptr<RobotDrive> robotDrive;
	std::shared_ptr<CANTalon> cANTalon1;
	std::shared_ptr<CANTalon> cANTalon2; //declaring local talons, setting local talons to the ones in RobotNav??
	std::shared_ptr<CANTalon> cANTalon3;
	std::shared_ptr<CANTalon> cANTalon4;
	Drivetrain();
	void SetManualDrive(float outputPower, float curveSharpness);
	void SetArcadeDrive(float movePower, float rotatePower);
	void SetTankDrive(float leftPower, float rightPower);
	void InitDefaultCommand();
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
};

#endif
