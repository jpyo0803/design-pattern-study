#include <iostream>

#include "design_pattern_study/state/concrete_states.h"
#include "design_pattern_study/state/person.h"

int main() {
  Person* me = new Person();
  me->SetCurrentState(std::make_unique<CheckState>(me));

  int loop = 0;
  while (loop < 20) {
    me->ShowStatus();
    me->DoAction();
    ++loop;
  }

  delete me;
  return 0;
}