#include "Vehicle.h"
#include "Truck.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    //Declaring empty vehicles
    Vehicle testVehicleEmpty;
    Truck testTruckEmpty;
    
    Vehicle testVehicleGeneric(4, 4, "left");
    Truck testTruckXterra(4, 4, "left", "Nissan", "Xterra");

    //Test the information within the classes
    cout << "\n\nTesting the empty parent class: Vehicle" 
         << "\nEmpty Vehicle Wheels: " << testVehicleEmpty.getWheels()
         << "\nEmpty Vehicle Seats: " << testVehicleEmpty.getSeats()
         << "\nEmpty Vehicle Driver side: " << testVehicleEmpty.getdriverSide() << endl;

    cout << "\n\nTesting the empty child class: Truck"
         << "\nEmpty Truck body: " << testTruckEmpty.getBody() 
         << "\nEmpty Truck Wheels: " << testTruckEmpty.getWheels()
         << "\nEmpty Truck Seats: " << testTruckEmpty.getSeats()
         << "\nEmpty Truck Driver side: " << testTruckEmpty.getdriverSide() 
         << "\nEmpty Truck Body: " << testTruckEmpty.getBody() 
         << "\nEmpty Truck Make: " << testTruckEmpty.getMake()
         << "\nEmpty Truck Model: " << testTruckEmpty.getModel() << endl;

    cout << "\n\nTesting the Non-empty parent class: Vehicle" 
         << "\nGeneric Vehicle Wheels: " << testVehicleGeneric.getWheels()
         << "\nGeneric Vehicle Seats: " << testVehicleGeneric.getSeats()
         << "\nGeneric Vehicle Driver side: " << testVehicleGeneric.getdriverSide() << endl;
    
    cout << "\n\nTesting the Non-empty child class: Truck"
         << "\nNon-empty Truck body: " << testTruckXterra.getBody() 
         << "\nNon-empty Truck Wheels: " << testTruckXterra.getWheels()
         << "\nNon-empty Truck Seats: " << testTruckXterra.getSeats()
         << "\nNon-empty Truck Driver side: " << testTruckXterra.getdriverSide() 
         << "\nNon-empty Truck Body: " << testTruckXterra.getBody() 
         << "\nNon-empty Truck Make: " << testTruckXterra.getMake()
         << "\nNon-empty Truck Model: " << testTruckXterra.getModel() << endl;

    return 0;
}