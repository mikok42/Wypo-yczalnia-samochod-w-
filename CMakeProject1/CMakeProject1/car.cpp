#include "car.h"
#include <iostream>

Car::Car(const std::string manufacterer_,
	const std::string model_,
	const int passengerCapacity_,
	const int trunkCapacity_,
	const int pricePerDay_): manufacterer(manufacterer_),
	model(model_),
	passengerCapacity(passengerCapacity_),
	trunkCapacity(trunkCapacity_),
	pricePerDay(pricePerDay_)
{
	rented = false;

	std::cout << "wolkswagen kurwo" << std::endl;
}

void Car::showOff()
{
	std::cout << "manufacterer: " << manufacterer << std::endl;
	std::cout << "model: " << model << std::endl;
	std::cout << "passenger capacity: " << passengerCapacity << std::endl;
	std::cout << "trunk capacity: " << trunkCapacity << "l" << std::endl;
	std::cout << "price per day: " << pricePerDay << "zl" << std::endl;

}