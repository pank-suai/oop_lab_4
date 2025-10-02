#include "cottage.hpp"
#include "hostel.hpp"
#include "house.hpp"
#include "housing.hpp"
#include <iostream>

int main() {
  Housing housing("Крутое жилище", 100.0, 50.0, 4);

  std::cout << "Информация о жилище:" << std::endl;
  housing.print();
  std::cout << "Стоимость: " << housing.calculateCost() << std::endl
            << std::endl;

  Cottage cottage("Коттедж", 150.0, 60.0, 6, 200.0, 2);
  std::cout << "Информация о коттедже:" << std::endl;
  cottage.print();
  std::cout << "Стоимость: " << cottage.calculateCost() << std::endl
            << std::endl;

  Hostel hostel("Хостел 2", 300.0, 20.0, 50, 100);
  std::cout << "Информация об хостеле:" << std::endl;
  hostel.print();
  std::cout << "Стоимость: " << hostel.calculateCost() << std::endl
            << std::endl;

  House house("Дом №21", 120.0, 40.0, 5, "Кирпич", 12.0);
  std::cout << "Информация о доме:" << std::endl;
  house.print();
  std::cout << "Стоимость: " << house.calculateCost() << std::endl << std::endl;

  House house2("Дом №42", 120.0, 40.0, 5, "Дерево");
  std::cout << "Информация о доме:" << std::endl;
  house2.print();
  std::cout << "Стоимость: " << house2.calculateCost() << std::endl
            << std::endl;

  return 0;
}
