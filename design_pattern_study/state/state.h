#ifndef DESIGN_PATTERN_STUDY_STATE_STATE_H_
#define DESIGN_PATTERN_STUDY_STATE_STATE_H_

#include <string>

class State {
 public:
  virtual std::string CurrentState() = 0;

  virtual void DoAction() = 0;
};

#endif /* DESIGN_PATTERN_STUDY_STATE_STATE_H_ */
