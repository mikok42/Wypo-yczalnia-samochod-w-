#include "car.h"
#include <iostream>

Car::Car( std::string manufacterer_,
	 std::string model_,
	 int passengerCapacity_,
	 int trunkCapacity_,
	 int pricePerDay_): manufacterer(manufacterer_),
	model(model_),
	passengerCapacity(passengerCapacity_),
	trunkCapacity(trunkCapacity_),
	pricePerDay(pricePerDay_)
{
	rented = false;

	std::cout << "car created" << std::endl;
}

Car& Car::operator=(const Car& car)
{
	manufacterer = car.manufacterer;
	model = car.model;
	passengerCapacity = car.passengerCapacity;
	trunkCapacity = car.trunkCapacity;
	pricePerDay = car.pricePerDay;

	return *this;
}

void Car::showOff()
{
	std::cout << "manufacterer: " << manufacterer << std::endl;
	std::cout << "model: " << model << std::endl;
	std::cout << "passenger capacity: " << passengerCapacity << std::endl;
	std::cout << "trunk capacity: " << trunkCapacity << "l" << std::endl;
	std::cout << "price per day: " << pricePerDay << "zl" << std::endl;

}

/*
bool Car::compare(Car &candidate)
{
	if (candidate.manufacterer != manufacterer)
	{
		return 0;
	}
	else if (candidate.model != model)
	{
		return 0;
	}
	else if (candidate.passengerCapacity != passengerCapacity)
	{
		return 0;
	}
	else if (candidate.trunkCapacity != trunkCapacity)
	{
		return 0;
	}
	else if (candidate.pricePerDay != pricePerDay)
	{
		return 0;
	}
	else return 1;
}

*/