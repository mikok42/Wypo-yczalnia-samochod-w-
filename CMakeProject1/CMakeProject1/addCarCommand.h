#pragma once

#include <string>
#include <vector>
#include "abstractCommand.h"

class AddCarCommand :public AbstractCommand {
public:
	AddCarCommand();
	~AddCarCommand() = default;

private:
	void executeMe(std::string command);
	bool isForMe(std::string command);

	const std::string COMMAND_NAME{"addCar"};
};
