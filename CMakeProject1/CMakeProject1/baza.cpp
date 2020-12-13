#include <string>
#include "baza.h"

using namespace std;

void Baza::Add(Car car)
{

}

void Baza::Rent(Car car)
{

}

void Baza::Return(Car car)
{

}

void Baza::Present()
{
	for (int i = 0; i < availableCarVec.size(); i++)
	{
		availableCarVec[i].showOff();
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


