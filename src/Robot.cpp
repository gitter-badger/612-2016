// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#include "Robot.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION
std::shared_ptr<Drivetrain> Robot::drivetrain;

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION

void Robot::RobotInit()
{
	RobotMap::init();
	joystick = new Joystick(0);
	navx = new AHRS(SPI::Port::kMXP);
	LiveWindow::GetInstance()->AddSensor("IMU", "Gyro", navx);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	drivetrain.reset(new Drivetrain());
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	// This MUST be here. If the OI creates Commands (which it very likely
	// will), constructing it during the construction of CommandBase (from
	// which commands extend), subsystems are not guaranteed to be
	// yet. Thus, their requires() statements may grab null pointers. Bad
	// news. Don't move it.


	// instantiate the command used for the autonomous period
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=AUTONOMOUS
	autonomousCommand.reset(new Autonomous());
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=AUTONOMOUS
}

/**
 * This function is called when the disabled button is hit.
 * You can use it to reset subsystems before shutting down.
 */
void Robot::DisabledInit()
{

}

void Robot::DisabledPeriodic()
{
	Scheduler::GetInstance()->Run();
}

void Robot::AutonomousInit()
{
	if (autonomousCommand.get() != nullptr)
		autonomousCommand->Start();
}

void Robot::AutonomousPeriodic()
{
	Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit()
{
	// This makes sure that the autonomous stops running when
	// teleop starts running. If you want the autonomous to
	// continue until interrupted by another command, remove
	// these lines or comment it out.
	if (autonomousCommand.get() != nullptr)
		autonomousCommand->Cancel();
}

void Robot::TeleopPeriodic()
{
	Scheduler::GetInstance()->Run();
	drivetrain->SetTankDrive(joystick->GetY()*joystick->GetX(),joystick->GetY()*(joystick->GetX()*-1));
}

void Robot::TestPeriodic()
{
	lw->Run();
	drivetrain->SetArcadeDrive(joystick->GetY(),joystick->GetX());
	 SmartDashboard::PutBoolean( "IMU_Connected",        navx->IsConnected());
	        SmartDashboard::PutNumber(  "IMU_Yaw",              navx->GetYaw());
	        SmartDashboard::PutNumber(  "IMU_Pitch",            navx->GetPitch());
	        SmartDashboard::PutNumber(  "IMU_Roll",             navx->GetRoll());
	        SmartDashboard::PutNumber(  "IMU_CompassHeading",   navx->GetCompassHeading());
	        SmartDashboard::PutNumber(  "IMU_Update_Count",     navx->GetUpdateCount());
	        SmartDashboard::PutNumber(  "IMU_Byte_Count",       navx->GetByteCount());

	        /* These functions are compatible w/the WPI Gyro Class */
	        SmartDashboard::PutNumber(  "IMU_TotalYaw",         navx->GetAngle());
	        SmartDashboard::PutNumber(  "IMU_YawRateDPS",       navx->GetRate());

	        SmartDashboard::PutNumber(  "IMU_Accel_X",          navx->GetWorldLinearAccelX());
	        SmartDashboard::PutNumber(  "IMU_Accel_Y",          navx->GetWorldLinearAccelY());
	        SmartDashboard::PutBoolean( "IMU_IsMoving",         navx->IsMoving());
	        SmartDashboard::PutNumber(  "IMU_Temp_C",           navx->GetTempC());
	        SmartDashboard::PutBoolean( "IMU_IsCalibrating",    navx->IsCalibrating());

	        SmartDashboard::PutNumber(  "Velocity_X",           navx->GetVelocityX() );
	        SmartDashboard::PutNumber(  "Velocity_Y",           navx->GetVelocityY() );
	        SmartDashboard::PutNumber(  "Displacement_X",       navx->GetDisplacementX() );
	        SmartDashboard::PutNumber(  "Displacement_Y",       navx->GetDisplacementY() );

	        /* Display Raw Gyro/Accelerometer/Magnetometer Values                       */
	        /* NOTE:  These values are not normally necessary, but are made available   */
	        /* for advanced users.  Before using this data, please consider whether     */
	        /* the processed data (see above) will suit your needs.                     */

	        SmartDashboard::PutNumber(  "RawGyro_X",            navx->GetRawGyroX());
	        SmartDashboard::PutNumber(  "RawGyro_Y",            navx->GetRawGyroY());
	        SmartDashboard::PutNumber(  "RawGyro_Z",            navx->GetRawGyroZ());
	        SmartDashboard::PutNumber(  "RawAccel_X",           navx->GetRawAccelX());
	        SmartDashboard::PutNumber(  "RawAccel_Y",           navx->GetRawAccelY());
	        SmartDashboard::PutNumber(  "RawAccel_Z",           navx->GetRawAccelZ());
	        SmartDashboard::PutNumber(  "RawMag_X",             navx->GetRawMagX());
	        SmartDashboard::PutNumber(  "RawMag_Y",             navx->GetRawMagY());
	        SmartDashboard::PutNumber(  "RawMag_Z",             navx->GetRawMagZ());
	        SmartDashboard::PutNumber(  "IMU_Temp_C",           navx->GetTempC());
}

START_ROBOT_CLASS(Robot);

