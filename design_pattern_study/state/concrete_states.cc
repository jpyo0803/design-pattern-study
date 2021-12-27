#include "design_pattern_study/state/concrete_states.h"

CheckState::CheckState(Person* person) : person_(person) {}
std::string CheckState::CurrentState() { return "Check State"; }
void CheckState::DoAction() {
  if (person_->hp() < 20 || person_->mp() < 20) {
    if (person_->hp() < 20) {
      person_->SetCurrentState(std::make_unique<HungryState>(person_));
    } else {
      person_->SetCurrentState(std::make_unique<SleepingState>(person_));
    }
  } else {
    static bool should_study = false;
    if (should_study) {
      person_->SetCurrentState(std::make_unique<StudyingState>(person_));
    } else {
      person_->SetCurrentState(std::make_unique<WorkoutState>(person_));
    }
    should_study = !should_study;
  }
}

StudyingState::StudyingState(Person* person) : person_(person) {}
std::string StudyingState::CurrentState() { return "Studying State"; }
void StudyingState::DoAction() {
  person_->SpendHp(20);
  person_->SpendMp(30);

  person_->SetCurrentState(std::make_unique<CheckState>(person_));
}

WorkoutState::WorkoutState(Person* person) : person_(person) {}
std::string WorkoutState::CurrentState() { return "Workout State"; }
void WorkoutState::DoAction() {
  person_->SpendHp(40);
  person_->SpendMp(10);

  person_->SetCurrentState(std::make_unique<CheckState>(person_));
}

HungryState::HungryState(Person* person) : person_(person) {}
std::string HungryState::CurrentState() { return "Hungry State"; }
void HungryState::DoAction() {
  person_->RestoreHp();
  person_->SetCurrentState(std::make_unique<CheckState>(person_));
}

SleepingState::SleepingState(Person* person) : person_(person) {}
std::string SleepingState::CurrentState() { return "Sleeping State"; }
void SleepingState::DoAction() {
  person_->RestoreMp();
  person_->SpendHp(30);
  person_->SetCurrentState(std::make_unique<CheckState>(person_));
}
