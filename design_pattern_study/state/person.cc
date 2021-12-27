#include "design_pattern_study/state/person.h"

#include <iostream>

Person::Person() = default;

void Person::SetCurrentState(std::unique_ptr<State> state) {
  state_ = std::move(state);
}

void Person::RestoreHp() { hp_ = 100; }
void Person::RestoreMp() { mp_ = 100; }

void Person::SpendHp(int amount) {
  hp_ -= amount;
  if (hp_ < 0) hp_ = 0;
}

void Person::SpendMp(int amount) {
  mp_ -= amount;
  if (mp_ < 0) mp_ = 0;
}

void Person::DoAction() { state_->DoAction(); }

void Person::ShowStatus() {
  std::cout << std::endl << "[Current Status]" << std::endl;
  std::cout << "State: " << state_->CurrentState() << std::endl;
  std::cout << "HP / MP : " << hp_ << " / " << mp_ << std::endl;
}