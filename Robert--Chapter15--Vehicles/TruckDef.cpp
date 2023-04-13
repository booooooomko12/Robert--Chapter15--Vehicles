#include "Truck.h";

Truck::Truck(string m, int y, float t) {
	setManufacturer(m);
	setYear(y);
	towingCap = t;
}

Truck::Truck() {
	setManufacturer("");
	setYear(0);
	towingCap = 0;
}

Truck::Truck(Vehicle v, float t) {
	setManufacturer(v.getManufacturer());
	setYear(v.getYear());
	towingCap = t;
}

void Truck::displayInfo() {
	cout << "\n\n||TRUCK INFORMATION||";
	cout << "\n\nManufacturer: " << getManufacturer();;
	cout << "\nYear Built: " << getYear();
	cout << "\nTowing Capacity: " << towingCap;
}