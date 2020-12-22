#pragma once

#include <iostream>
#include <vector>

#include "exceptions.h"
#include "abstractBase.h"

class Baza: public AbstractBase
{
public:

	//Baza();

	void Add(Car car) override;
	void Rent(Car car) override;
	void Return(Car car) override;
	void Present() override;
  
	int Search(Car& car);

	void Remove(std::vector<Car> removeFrom, Car car);

	int Find(std::vector<Car> whereToLook, Car car);



private:
	std::vector<Car> carVec;
	std::vector<Car> availableCarVec;
	std::vector<Car> rentedCarVec;

	//std::vector<std::vector<Car>> vecOfAllVecs;

};