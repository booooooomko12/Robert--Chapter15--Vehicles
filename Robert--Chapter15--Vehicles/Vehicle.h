#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>

using namespace std;

class Vehicle {
private:
	string manu;
	int year;

public:
	Vehicle(string, int);
	Vehicle();
	void displayInfo();

	void setManufacturer(string m) {
		manu = m;
	}
	void setYear(int y) {
		year = y;
	}
	string getManufacturer() {
		return manu;
	}
	int getYear() {
		return year;
	}
};

#endif