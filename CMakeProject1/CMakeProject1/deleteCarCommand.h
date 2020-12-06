#pragma once

#include "abstractCommand.h"
#include <string>

class DeleteCarCommand :public AbstractCommand {
public:
	DeleteCarCommand();
	~DeleteCarCommand() = default;

private:
	void executeMe(std::string command);
	bool isForMe(std::string command);

	const std::string COMMAND_NAME{"deleteCar"};
};
