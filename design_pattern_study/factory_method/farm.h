#ifndef DESIGN_PATTERN_STUDY_FACTORY_METHOD_ZOO_H_
#define DESIGN_PATTERN_STUDY_FACTORY_METHOD_ZOO_H_

#include <memory>
#include <string>
#include <vector>

#include "design_pattern_study/factory_method/animal.h"

class Farm {
 public:
  void MakeAllAnimalSound();

  virtual ~Farm() = default;

  virtual void GetPoolOfAnimals() = 0;

 protected:
  virtual std::unique_ptr<Animal> CreateAnimal(std::string type) = 0;

  std::vector<std::unique_ptr<Animal>> animals_;
};

#endif /* DESIGN_PATTERN_STUDY_FACTORY_METHOD_ZOO_H_ */
