#pragma once

#include <string>
#include <fstream>
#include"abstractBase.h"

class txtBase : public AbstractBase
{
public:
	txtBase(std::string availible, std::string rented, std::string all);
	 void Add(Car car) override;
	 void Rent(Car car) override;
	 void Return(Car car) override;
	 void Present() override;
	 int Search(Car& car) override;
private:
	std::string availibleFileName;
	std::string rentedFileName;
	std::string allFileName;
};