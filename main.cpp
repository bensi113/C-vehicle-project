#include "vehicle.h"

void changeBrand(Vehicle& vehicle, std::string newBrand) {
    vehicle.brand = newBrand;
}

void displayVehicleInfo(Vehicle& vehicle) {
    vehicle.displayInfo();
    std::cout << std::endl;
}

int main() {
    Vehicle vehicle("Unknown", 0);
    Car car("Toyota", 2022, 4);
    Motorcycle motorcycle("Harley-Davidson", 2021, "Cruiser");

    displayVehicleInfo(vehicle);
    displayVehicleInfo(car);
    displayVehicleInfo(motorcycle);

    changeBrand(vehicle, "Ford");
    changeBrand(car, "Honda");

    std::cout << "After brand change:" << std::endl << std::endl;

    displayVehicleInfo(vehicle);
    displayVehicleInfo(car);
    displayVehicleInfo(motorcycle);

    return 0;
}
