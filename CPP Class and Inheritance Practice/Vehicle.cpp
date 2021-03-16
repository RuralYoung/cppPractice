#include "Vehicle.h"
#include <iostream>
#include <string>

using namespace std;

//Constructors
Vehicle::Vehicle() {
    setWheels(0);
    setSeats(0);
    setdriverSide("Empty Vehicle");
}

Vehicle::Vehicle(int wheels, int seats, string driverSide) {
    setWheels(wheels);
    setSeats(seats);
    setdriverSide(driverSide);
};

//setters
void Vehicle::setWheels(int wheels){
    this->wheels = wheels;
}

void Vehicle::setSeats(int seats){
    this->seats = seats;
}

void Vehicle::setdriverSide(string driverSide) {
    this->driverSide = driverSide;
}

void Vehicle::honk() {
    cout << "The Vehicle honks!" << endl;
}
