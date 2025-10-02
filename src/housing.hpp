#pragma once

#include <iostream>
#include <string>
class Housing {
protected:
  std::string name;
  double totalArea; // площадь
  double price;     // базовая стоимость проживания в сутки
  unsigned int residents;

public:
  Housing(std::string name, double area, double price, unsigned int residents)
      : name(name), totalArea(area), price(price), residents(residents) {}

  virtual void print() const {
    std::cout << "Название: " << name << std::endl;
    std::cout << "Площадь: " << totalArea << std::endl;
    std::cout << "Стоимость проживания в сутки: " << price << std::endl;
    std::cout << "Количество жильцов: " << residents << std::endl;
  }

  virtual double calculateCost() const { return residents * price; }
};
