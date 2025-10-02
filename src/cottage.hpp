#pragma once

#include "housing.hpp"

class Cottage : public Housing {
private:
  double gardenArea;
  unsigned int floors;

public:
  Cottage(std::string name, double area, double price, unsigned int residents,
          double gardenArea, unsigned int floors);

  void print() const override;

  double calculateCost() const override {
    return Housing::calculateCost() + gardenArea * 0.1 + 10 * floors;
  }
};
