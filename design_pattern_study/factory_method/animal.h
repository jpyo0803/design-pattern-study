#ifndef DESIGN_PATTERN_STUDY_FACTORY_METHOD_ANIMAL_H_
#define DESIGN_PATTERN_STUDY_FACTORY_METHOD_ANIMAL_H_

#include <string>

// This is an animal interface
class Animal {
 public:
  virtual std::string GetType() = 0;

  virtual std::string GetSound() = 0;
};

#endif /* DESIGN_PATTERN_STUDY_FACTORY_METHOD_ANIMAL_H_ */
