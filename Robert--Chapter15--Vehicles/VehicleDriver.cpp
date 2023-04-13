// Riley Robert
// 4/10/23
// April 10, 2023

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "RobertRPersonalLibrary.h"

Vehicle makeVehicle();
Car makeCar();
Truck makeTruck();

int main() {

	cout << "[[CREATING VEHICLE]]";
	Vehicle v = makeVehicle();
	cout << "\n\n||VEHICLE INFORMATION||";
	v.displayInfo();


	cout << "\n\n[[CREATING CAR]]";
	Car c = makeCar();
	c.displayInfo();


	cout << "\n\n[[CREATING TRUCK]]";
	Truck t = makeTruck();
	t.displayInfo();



	endProgram();
}

Vehicle makeVehicle() {
	string m;
	int y;

	y = validateInt("\n\nWhen was this vehicle built? ");

	cout << "\n\nWhat is the manufacturer of this vehicle? ";
	cin.ignore(100, '\n');
	getline(cin, m);

	Vehicle v(m, y);

	return v;
}

Car makeCar() {
	Vehicle temp = makeVehicle();
	int door = validateInt("\n\nHow many doors does this car have? ");

	Car c(temp, door);
	return c;
}

Truck makeTruck() {
	Vehicle temp = makeVehicle();
	float cap = validateFloat("\n\nWhat is this truck's towing capacity? ");

	Truck t(temp, cap);
	return t;
}