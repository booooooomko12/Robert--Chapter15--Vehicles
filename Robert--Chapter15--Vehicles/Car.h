#pragma once
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

using namespace std;

class Car : private Vehicle {
private:
	int doors;

public:
	Car(string, int, int);
	Car(Vehicle, int);
	Car();
	void displayInfo();

	void setDoorNum(int d) {
		doors = d;
	}
	int getDoorNum() {
		return doors;
	}

};

#endif