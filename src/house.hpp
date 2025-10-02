#pragma once

#include "housing.hpp"
#include <ostream>

class House : public Housing {
private:
  std::string material;
  bool isPrivate; // Частный или нет
  double rent;    // Стоимость аренды на месяц

public:
  House(std::string name, double area, double price, unsigned int residents,
        std::string material, double rent);
  House(std::string name, double area, double price, unsigned int residents,
        std::string material);

  void print() const override;
  double calculateCost() const override;
};
