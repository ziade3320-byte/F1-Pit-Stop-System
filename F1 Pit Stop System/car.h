#pragma once
#include <iostream>
using namespace std;
class Car {
public:
	string DriverName;
	string Team;
	int LapNumber;
	string ServiceType;

	Car() {
		DriverName = " ";
		Team = " ";
		LapNumber = 0;
		ServiceType = " ";
	}

	Car(string DriverName, string Team, int LapNumber, string ServiceType) {
		this->DriverName = DriverName;
		this->Team = Team;
		this->LapNumber = LapNumber;
		this->ServiceType = ServiceType;
	}
};
