#include "vehicle.h"
#include <iostream>

Vehicle::Vehicle(std::string _brand, int _year) : brand(_brand), year(_year) {}

void Vehicle::displayInfo() {
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Year: " << year << std::endl;
}

Car::Car(std::string _brand, int _year, int _numDoors)
    : Vehicle(_brand, _year), numDoors(_numDoors) {}

void Car::displayInfo() {
    std::cout << "Car Information" << std::endl;
    Vehicle::displayInfo();
    std::cout << "Number of Doors: " << numDoors << std::endl;
}

Motorcycle::Motorcycle(std::string _brand, int _year, std::string _type)
    : Vehicle(_brand, _year), type(_type) {}

void Motorcycle::displayInfo() {
    std::cout << "Motorcycle Information" << std::endl;
    Vehicle::displayInfo();
    std::cout << "Type: " << type << std::endl;
}
