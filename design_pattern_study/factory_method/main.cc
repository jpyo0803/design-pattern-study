#include <iostream>
#include <memory>

#include "design_pattern_study/factory_method/big_farm.h"
#include "design_pattern_study/factory_method/farm.h"
#include "design_pattern_study/factory_method/small_farm.h"

int main() {
  Farm* small_farm = new SmallFarm();
  small_farm->GetPoolOfAnimals();

  std::cout << "[Small Farm]" << std::endl;
  small_farm->MakeAllAnimalSound();

  Farm* big_farm = new BigFarm();
  big_farm->GetPoolOfAnimals();

  std::cout << std::endl;
  std::cout << "[Big Farm]" << std::endl;
  big_farm->MakeAllAnimalSound();

  delete small_farm;
  delete big_farm;

  return 0;
}