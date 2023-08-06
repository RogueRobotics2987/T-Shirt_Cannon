#include "subsystems/HornSubsystem.h"


HornSubsystem::HornSubsystem(){
    HonkSolenoid = new frc::DoubleSolenoid(frc::PneumaticsModuleType::REVPH, 13, 15);
}

void HornSubsystem::Periodic() {
    if(activateHorn){
        HonkSolenoid->Set(frc::DoubleSolenoid::kForward);//honk (close)

    } else {
        HonkSolenoid->Set(frc::DoubleSolenoid::kReverse);//silent (open)
    }
}

frc2::CommandPtr HornSubsystem::RunHorn(){
  return this->Run(
      [this] { activateHorn = true; });
}

frc2::CommandPtr HornSubsystem::StopHorn(){
    return this->Run(
        [this] {activateHorn = false;});
}

HornSubsystem::~HornSubsystem(){
    delete HonkSolenoid;
}
