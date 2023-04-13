#include "Car.h";

Car::Car(string m, int y, int d) {
	setManufacturer(m);
	setYear(y);
	doors = d;
}

Car::Car() {
	setManufacturer("");
	setYear(0);
	doors = 0;
}

Car::Car(Vehicle v, int d) {
	setManufacturer(v.getManufacturer());
	setYear(v.getYear());
	doors = d;
}

void Car::displayInfo() {
	cout << "\n\n||CAR INFORMATION||";
	Vehicle::displayInfo();
	cout << "\nNumber of Doors: " << doors;
}