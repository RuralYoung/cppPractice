#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

using namespace std;

class Vehicle {
    protected:
        int wheels;
        int seats;
        string driverSide;
    
    public:
        //Constructors
        Vehicle();
        Vehicle(int wheels, int seats, string driverSide);
        
        //setters
        void setWheels(int wheels);
        void setSeats(int seats);
        void setdriverSide(string driverSide);
        
        //getters
        int getWheels() { return wheels; }
        int getSeats(){ return seats; }
        string getdriverSide(){ return driverSide; }

        //Polymorphism parent
        void honk();
};

#endif