#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
protected:
    std::string brand;
    int year;

public:
    Vehicle(std::string _brand, int _year);
    void displayInfo();
};

class Car : public Vehicle {
private:
    int numDoors;

public:
    Car(std::string _brand, int _year, int _numDoors);
    void displayInfo();
};

class Motorcycle : public Vehicle {
private:
    std::string type;

public:
    Motorcycle(std::string _brand, int _year, std::string _type);
    void displayInfo();
};

#endif
