#include "addCarCommand.h"
#include "deleteCarCommand.h"
#include <iostream>
#include "exceptions.h"
#include "baza.h"
#include <cstdlib>

using namespace std;

AddCarCommand::AddCarCommand() :AbstractCommand(new DeleteCarCommand) {
}

bool AddCarCommand::isForMe(std::string command) {
	vector<string> arguments = devideCommandForAguments(command);
	return (arguments.size() > 0 && arguments[0] == COMMAND_NAME);
}

void AddCarCommand::executeMe(string command) {
	vector<string> arguments = devideCommandForAguments(command);

	if(arguments.size() < NUMBER_OF_ARGUMENTS)
		throw InvalidArguments("Not enough arguments");

	commandArguments = arguments;
}

Car AddCarCommand::generateCar() {
	string manufacterer = getManufacterer();
	string model = getModel();
	int passengerCapacity = getPassengerCapacity();
	int trunkCapacity = getTrunkCapacity();
	int pricePerDay = getPricePerDay();
	return Car{manufacterer, model, passengerCapacity, trunkCapacity, pricePerDay};
}

string AddCarCommand::getManufacterer() {
	return commandArguments[MANUFACTERER_INDEX];
}

string AddCarCommand::getModel() {
	return commandArguments[MODEL_INDEX];
}

int AddCarCommand::getPassengerCapacity() {
	string temp = commandArguments[PASSENGER_CAPACITY_INDEX];
	int result = atoi(temp.c_str());
	return result;
}

int AddCarCommand::getTrunkCapacity() {
	string temp = commandArguments[TRUNK_CAPACITY_INDEX];
	int result = atoi(temp.c_str());
	return result;
}

int AddCarCommand::getPricePerDay() {
	string temp = commandArguments[PRICE_PER_DAY_INDEX];
	int result = atoi(temp.c_str());
	return result;
}
