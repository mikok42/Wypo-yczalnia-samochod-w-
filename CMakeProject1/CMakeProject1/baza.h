#pragma once

#include <iostream>
#include <vector>
#include "car.h"
#include "exceptions.h"

class Baza
{
public:

	//Baza();

	void Add(Car car);
	void Rent(Car car);
	void Return(Car car);
  void Present();
  
	int Search(Car& car);

	void Remove(std::vector<Car> removeFrom, Car car);

	int Find(std::vector<Car> whereToLook, Car car);



private:
	std::vector<Car> carVec;
	std::vector<Car> availableCarVec;
	std::vector<Car> rentedCarVec;

	//std::vector<std::vector<Car>> vecOfAllVecs;

};