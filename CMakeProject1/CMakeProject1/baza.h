#include<iostream>
#include<vector>
#include "car.h"

class Baza
{
public:

	void Add(Car car);
	void Rent(Car car);
	void Return(Car car);
	void Present();

private:
	std::vector<Car> carVec;
	std::vector<Car> availableCarVec;
};