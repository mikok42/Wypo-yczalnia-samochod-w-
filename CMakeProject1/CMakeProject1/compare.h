#pragma once

bool compare(Car candidate, Car target)
{
	if (candidate.manufacterer != target.manufacterer)
	{
		return 0;
	}
	else if (candidate.model != target.model)
	{
		return 0;
	}
	else if (candidate.passengerCapacity != target.passengerCapacity)
	{
		return 0;
	}
	else if (candidate.trunkCapacity != target.trunkCapacity)
	{
		return 0;
	}
	else if (candidate.pricePerDay != target.pricePerDay)
	{
		return 0;
	}
	else return 1;
}