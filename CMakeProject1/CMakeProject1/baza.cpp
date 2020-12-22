
#include <string>
#include <iostream>
#include "baza.h"
#include "compare.h"
/*
Baza::Baza()
{
	vecOfAllVecs.push_back(carVec);
	vecOfAllVecs.push_back(availableCarVec);
	vecOfAllVecs.push_back(rentedCarVec);
}
*/

using namespace std;


int Baza::Find(std::vector<Car> whereToLook, Car car)
{
	for (int i = 0; i < whereToLook.size(); i++)
	{
		if (compare(whereToLook[i], car))
		{
			return i;
			break;
		}
	}
	return 2147483647;
}

void Baza::Add(Car car)
{
	availableCarVec.push_back(car);
	carVec.push_back(car);
}

void Baza::Rent(Car car)
{
	int index, lastIndex;
	
	index = Find(availableCarVec, car);

	if (index == 2147483647)
	{
		std::cout << "car not found" << std::endl;
	}
	else {
		lastIndex = availableCarVec.size() - 1;

		std::swap(availableCarVec[index], availableCarVec[lastIndex]);

		availableCarVec.pop_back();
		rentedCarVec.push_back(car);
	}

	
}

void Baza::Return(Car car)
{
	int index, lastIndex;
	index = Find(rentedCarVec, car);


	if (index == 2147483647)
	{
		std::cout << "car not found" << std::endl;
	}
	else {
		lastIndex = rentedCarVec.size() - 1;

		std::swap(availableCarVec[index], availableCarVec[lastIndex]);

		rentedCarVec.pop_back();
		availableCarVec.push_back(car);

	}

	
}

void Baza::Remove(std::vector<Car> removeFrom, Car car)
{


	int index, lastIndex;
	index = Find(removeFrom, car);

	if (index == 2147483647)
	{
		std::cout << "car not found" << std::endl;
	}
	else {
		lastIndex = removeFrom.size() - 1;

		std::swap(removeFrom[index], removeFrom[lastIndex]);

		removeFrom.pop_back();
	}

	
}

void Baza::Present()
{
	std::cout << "availible cars: \n \n";
	for (int i = 0; i <availableCarVec.size(); i++)
	{
		availableCarVec[i].showOff();
		std::cout<<std::endl;
	}
}

int Baza::Search(Car& car)
{
    int res = 0;

    for (const auto& elem : availableCarVec)
    {
        if (car == elem)
            res++;
    }

    return res;
}


