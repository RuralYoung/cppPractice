#include "Truck.h"
#include <iostream>
#include <string>

 using namespace std;

//constructors
Truck::Truck(){
    setBody("Empty truck");
    setMake("Empty make");
    setModel("Empty model");
    setWheels(0);
    setSeats(0);
    setdriverSide("Empty");
}

Truck::Truck(int wheels, int seats, string driverSide, string make, string model) {
    setBody("Truck");
    setWheels(wheels);
    setSeats(seats);
    setdriverSide(driverSide);
    setMake(make);
    setModel(model);
}

//setters
void Truck::setBody(string body) {
    this->body = body;
}

void Truck::setMake(string make) {
    this->make = make;
}

void Truck::setModel(string model) {
    this->model = model;
}

//Polymorphism
void Truck::honk() {
    cout << "The Truck blares it's horns!" << endl;
}
