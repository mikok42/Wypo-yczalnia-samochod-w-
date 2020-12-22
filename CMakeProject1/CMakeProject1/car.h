#pragma once

#include <string>
#include <iostream>



class  Car
{
public:
	Car(const std::string& manufacterer_,
		const std::string& model_,
		int passengerCapacity_,
		int trunkCapacity_,
		int pricePerDay_);

	void showOff();
	
	Car& operator= (const Car& car);

	friend bool compare(Car candidate, Car target);

	friend std::ostream& operator<<(std::ostream& os, const Car& car);

    bool operator== (const Car& rhs);

private:
	 std::string manufacterer;
	 std::string model;
	 int passengerCapacity;
	 int trunkCapacity;
	 int pricePerDay;

	bool rented;
};