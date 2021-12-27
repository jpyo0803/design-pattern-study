#ifndef DESIGN_PATTERN_STUDY_STATE_PERSON_H_
#define DESIGN_PATTERN_STUDY_STATE_PERSON_H_

#include <memory>

#include "design_pattern_study/state/state.h"

class Person {
 public:
  Person();

  void SetCurrentState(std::unique_ptr<State> state);

  void RestoreHp();
  void RestoreMp();

  void SpendHp(int amount);
  void SpendMp(int amount);

  int hp() const { return hp_; }
  int mp() const { return mp_; }

  void DoAction();

  void ShowStatus();

 private:
  std::unique_ptr<State> state_;

  int hp_ = 100;
  int mp_ = 100;
};

#endif /* DESIGN_PATTERN_STUDY_STATE_PERSON_H_ */
