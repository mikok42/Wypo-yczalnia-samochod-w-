#include "addCarCommand.h"
#include "deleteCarCommand.h"
#include <iostream>
#include "exceptions.h"

using namespace std;

AddCarCommand::AddCarCommand() :AbstractCommand(new DeleteCarCommand) {
}

bool AddCarCommand::isForMe(std::string command) {
	vector<string> arguments = devideCommandForAguments(command);
	return (arguments.size() > 0 && arguments[0] == COMMAND_NAME);
}

void AddCarCommand::executeMe(string command) {
	vector<string> arguments = devideCommandForAguments(command);

	if(arguments.size() < 2)
		throw InvalidArguments("No arguments");

	for(int i = 1; i < arguments.size(); i++)
		cout << arguments[i] << " ";
	cout << endl;
}
