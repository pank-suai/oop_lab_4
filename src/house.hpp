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
        std::string material, double rent)
      : Housing(name, area, price, residents), material(material), rent(rent) {
	isPrivate = false;
  }

  House(std::string name, double area, double price, unsigned int residents,
        std::string material)
      : Housing(name, area, price, residents), material(material) {
	isPrivate = true;
  }

  void print() const override {
    Housing::print();
    std::cout << "Материал: " << material << std::endl;
    std::cout << (isPrivate ? "Частный" : "Аренда") << std::endl;
    if (!isPrivate) {
      std::cout << "Стоимость аренды в месяц " << rent << std::endl;
    }
  }

  double calculateCost() const override {
    if (isPrivate) {
      return Housing::calculateCost();
    } else {
      return this->residents * this->price + rent / 30.0;
    }
  }
};
