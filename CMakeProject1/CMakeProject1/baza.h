#include<iostream>
#include<vector>
#include<car.h>

class Baza
{
public:
	Baza();

	Add();
	Rent();
	Present();
private:
	std::vector<Car> carVec;
};