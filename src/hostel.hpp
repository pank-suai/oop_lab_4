#include "housing.hpp"
#include <iostream>
#include <ostream>
class Hostel : public Housing {
private:
  unsigned int maxResidents;

public:
  Hostel(std::string name, double area, double price, unsigned int residents,
         unsigned int maxResidents)
      : Housing(name, area, price, residents), maxResidents(maxResidents) {}

  void print() const override;
};
