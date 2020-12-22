#include "txtBase.h"
#include <iostream>

 txtBase::txtBase(std::string availible, std::string rented, std::string all):
	 availibleFileName(availible),
	 rentedFileName(rented),
	 allFileName(all)
{

}

void txtBase::Add(Car car)
{
	std::ofstream allCarFile(allFileName ,std::ios::app);
	std::ofstream availibleCarFile(availibleFileName, std::ios::app);

	if (allCarFile.is_open() && availibleCarFile.is_open())
	{
		//std::cout << "adding " << car << std::endl;
		allCarFile << car;
		availibleCarFile << car;
	}
	allCarFile.close();
	availibleCarFile.close();
}

void txtBase::Present()
{
	std::ifstream carFile(availibleFileName);
	std::string line;

	if (carFile.is_open())
	{
		while (std::getline(carFile, line))
		{
			std::cout << line << std::endl;
		}
	}
	carFile.close();
}

void txtBase::Rent(Car car)
{

}

void txtBase::Return(Car car)
{

}


int txtBase::Search(Car& car)
{
	return 0;
}