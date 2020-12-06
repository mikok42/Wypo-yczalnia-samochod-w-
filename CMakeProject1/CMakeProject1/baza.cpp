
#include "baza.h"

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

