#include "Vehicle.h"


Vehicle::Vehicle(string m, int y) {
	manu = m;
	year = y;
}

Vehicle::Vehicle() {
	manu = "";
	year = 0;
}

void Vehicle::displayInfo() {
	cout << "\n\nManufacturer: " << manu;
	cout << "\nYear Built: " << year;
}