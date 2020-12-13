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

	void showOff();
	
	Car& operator= (const Car& car);

	friend bool compare(Car candidate, Car target);

    bool operator== (const Car& rhs);

private:
	 std::string manufacterer;
	 std::string model;
	 int passengerCapacity;
	 int trunkCapacity;
	 int pricePerDay;

	bool rented;
};