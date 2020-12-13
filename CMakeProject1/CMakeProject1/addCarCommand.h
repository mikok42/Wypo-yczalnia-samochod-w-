#pragma once

#include <string>
#include <vector>
#include "abstractCommand.h"
#include "car.h"

class AddCarCommand :public AbstractCommand {
public:
	AddCarCommand();
	~AddCarCommand() = default;

private:
	void executeMe(std::string command);
	bool isForMe(std::string command);

	const std::string COMMAND_NAME{"addCar"};
	const int NUMBER_OF_ARGUMENTS{6};

	std::vector<std::string> commandArguments;

	const int MANUFACTERER_INDEX{1};
	const int MODEL_INDEX{2};
	const int PASSENGER_CAPACITY_INDEX{3};
	const int TRUNK_CAPACITY_INDEX{4};
	const int PRICE_PER_DAY_INDEX{5};

	Car generateCar();
	std::string getManufacterer();
	std::string getModel();
	int getPassengerCapacity();
	int getTrunkCapacity();
	int getPricePerDay();
};
