#include <iostream>
#include "car.h"


Car::Car(const std::string& manufacterer_,
	const std::string& model_,
	int passengerCapacity_,
	int trunkCapacity_,
	int pricePerDay_):
	manufacterer (std::move(manufacterer_)),
	model (std::move(model_)),
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


bool Car::operator== (const Car& rhs)
{
    return (manufacterer == rhs.manufacterer &&
    model == rhs.manufacterer &&
    passengerCapacity == rhs.passengerCapacity &&
    trunkCapacity == rhs.trunkCapacity &&
    pricePerDay == pricePerDay);
}

