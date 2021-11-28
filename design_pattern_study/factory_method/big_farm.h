#ifndef DESIGN_PATTERN_STUDY_FACTORY_METHOD_BIG_FARM_H_
#define DESIGN_PATTERN_STUDY_FACTORY_METHOD_BIG_FARM_H_

#include "design_pattern_study/factory_method/farm.h"

class BigFarm : public Farm {
 public:
  void GetPoolOfAnimals() override;

  std::unique_ptr<Animal> CreateAnimal(std::string type) override;
};

#endif /* DESIGN_PATTERN_STUDY_FACTORY_METHOD_BIG_FARM_H_ */
