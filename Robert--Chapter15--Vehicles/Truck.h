#pragma once
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

using namespace std;

class Truck : private Vehicle {
private:
	float towingCap;

public:
	Truck(string, int, float);
	Truck(Vehicle, float);
	Truck();
	void displayInfo();

	void setDoorNum(float t) {
		towingCap = t;
	}
	float getTowingCapacity() {
		return towingCap;
	}

};

#endif