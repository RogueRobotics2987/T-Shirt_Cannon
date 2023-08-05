// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/CommandPtr.h>
#include <frc2/command/Commands.h>
#include <frc2/command/FunctionalCommand.h>

#include <frc2/command/SubsystemBase.h>
#include <frc/Solenoid.h>
#include <frc/DoubleSolenoid.h>
#include <iostream>
#include <frc/smartdashboard/SmartDashboard.h>

class HornSubsystem : public frc2::SubsystemBase {
 public:
  HornSubsystem();
  ~HornSubsystem();

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

  //void Open();
  //void Close();

  frc2::CommandPtr HornSubsystem::RunHorn();
  frc2::CommandPtr HornSubsystem::StopHorn();

  frc::DoubleSolenoid* HonkSolenoid = nullptr;
  bool activateHorn = false;

};
