#ifndef DESIGN_PATTERN_STUDY_STATE_CONCRETE_STATES_H_
#define DESIGN_PATTERN_STUDY_STATE_CONCRETE_STATES_H_

#include "design_pattern_study/state/person.h"
#include "design_pattern_study/state/state.h"

class CheckState : public State {
 public:
  explicit CheckState(Person* person);

  std::string CurrentState() override;

  void DoAction() override;

 private:
  Person* person_;
};

class StudyingState : public State {
 public:
  explicit StudyingState(Person* person);

  std::string CurrentState() override;

  void DoAction() override;

 private:
  Person* person_;
};

class WorkoutState : public State {
 public:
  explicit WorkoutState(Person* person);

  std::string CurrentState() override;

  void DoAction() override;

 private:
  Person* person_;
};

class HungryState : public State {
 public:
  explicit HungryState(Person* person);

  std::string CurrentState() override;

  void DoAction() override;

 private:
  Person* person_;
};

class SleepingState : public State {
 public:
  explicit SleepingState(Person* person);

  std::string CurrentState() override;

  void DoAction() override;

 private:
  Person* person_;
};

#endif /* DESIGN_PATTERN_STUDY_STATE_CONCRETE_STATES_H_ */
