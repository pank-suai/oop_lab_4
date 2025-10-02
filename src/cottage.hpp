#pragma once

#include "housing.hpp"

class Cottage : public Housing {
private:
  double gardenArea;
  unsigned int floors;

public:
  Cottage(std::string name, double area, double price, unsigned int residents,
          double gardenArea, unsigned int floors)
      : Housing(name, area, price, residents), gardenArea(gardenArea),
        floors(floors) {}

  void print() const override {
    Housing::print();
    std::cout << "Площадь земельного участка: " << gardenArea << std::endl;
    std::cout << "Количество этажей: " << floors << std::endl;
  }

  double calculateCost() const override {
    return Housing::calculateCost() + gardenArea * 0.1 + 10 * floors;
  }
};
