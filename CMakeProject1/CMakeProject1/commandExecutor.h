#pragma once

#include <string>
#include "abstractCommand.h"
#include "addCarCommand.h"

class CommandExecutor {
public:
	CommandExecutor();
	~CommandExecutor();
	void execute(std::string command);

private:
	AbstractCommand *p_firstCommand;
};
