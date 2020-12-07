#pragma once

#include <string>


class  Car
{
public:
	Car( std::string manufacterer_,
		 std::string model_,
		 int passengerCapacity_,
		 int trunkCapacity_,
		 int pricePerDay_);
	//Car(Car& carToCopy);
	void showOff();
	
	Car& operator= (const Car& car);

	friend bool compare(Car candidate, Car target);

private:
	 std::string manufacterer;
	 std::string model;
	 int passengerCapacity;
	 int trunkCapacity;
	 int pricePerDay;

	bool rented;
};