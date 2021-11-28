#include "design_pattern_study/factory_method/big_farm.h"

#include "design_pattern_study/factory_method/cow.h"
#include "design_pattern_study/factory_method/horse.h"

void BigFarm::GetPoolOfAnimals() {
  animals_.push_back(CreateAnimal("horse"));
  animals_.push_back(CreateAnimal("cow"));
}

std::unique_ptr<Animal> BigFarm::CreateAnimal(std::string type) {
  if (type == "horse") {
    return std::make_unique<Horse>();
  } else if (type == "cow") {
    return std::make_unique<Cow>();
  }
  return nullptr;
}