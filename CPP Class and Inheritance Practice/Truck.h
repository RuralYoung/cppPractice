#include "Vehicle.h"
#ifndef TRUCK_H
#define TRUCK_H

#include <iostream>
#include <string>

using namespace std;

class Truck: public Vehicle {
    private:
        string body;
        string make;
        string model;

    public:
        //Constructor
        Truck();
        Truck(int wheels, int seats, string driverSide, string make, string model);

        //setters
        void setBody(string body);
        void setMake(string make);
        void setModel(string model);

        //getters
        string getBody(){ return body; }
        string getMake(){ return make; }
        string getModel(){ return model; }

        //Polymorphism
        void honk();
};

#endif