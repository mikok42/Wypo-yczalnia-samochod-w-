#pragma once

#include "car.h"

class AbstractBase
{
public:
	AbstractBase() {};
	virtual ~AbstractBase() {};

	virtual void Add(Car car) {};
	virtual void Rent(Car car) {};
	virtual void Return(Car car) {};
	virtual void Present() {};
	virtual int Search(Car& car) { return 0; };


};