// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/xrp/XRPMotor.h>

class Drivetrain : public frc2::SubsystemBase {
 public:
  Drivetrain();

  void TankDrive(double leftSpeed, double rightSpeed);

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.

  frc::XRPMotor m_leftMotor{0};
  frc::XRPMotor m_rightMotor{1};

};
