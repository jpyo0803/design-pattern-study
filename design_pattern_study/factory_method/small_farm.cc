#include "design_pattern_study/factory_method/small_farm.h"

#include "design_pattern_study/factory_method/cat.h"
#include "design_pattern_study/factory_method/dog.h"

void SmallFarm::GetPoolOfAnimals() {
  animals_.push_back(CreateAnimal("cat"));
  animals_.push_back(CreateAnimal("dog"));
}

std::unique_ptr<Animal> SmallFarm::CreateAnimal(std::string type) {
  if (type == "cat") {
    return std::make_unique<Cat>();
  } else if (type == "dog") {
    return std::make_unique<Dog>();
  }
  return nullptr;
}