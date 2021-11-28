#ifndef DESIGN_PATTERN_STUDY_FACTORY_METHOD_DOG_H_
#define DESIGN_PATTERN_STUDY_FACTORY_METHOD_DOG_H_

#include "design_pattern_study/factory_method/animal.h"

class Dog : public Animal {
 public:
  std::string GetType() override;

  std::string GetSound() override;
};

#endif /* DESIGN_PATTERN_STUDY_FACTORY_METHOD_DOG_H_ */
