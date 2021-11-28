#include "design_pattern_study/factory_method/farm.h"

#include <iostream>

void Farm::MakeAllAnimalSound() {
  for (const auto& animal : animals_) {
    std::cout << animal->GetType() << ": " << animal->GetSound() << std::endl;
  }
}