#ifndef DESIGN_PATTERN_STUDY_FACTORY_METHOD_HORSE_H_
#define DESIGN_PATTERN_STUDY_FACTORY_METHOD_HORSE_H_

#include "design_pattern_study/factory_method/animal.h"

class Horse : public Animal {
 public:
  std::string GetType() override;

  std::string GetSound() override;
};

#endif /* DESIGN_PATTERN_STUDY_FACTORY_METHOD_HORSE_H_ */
