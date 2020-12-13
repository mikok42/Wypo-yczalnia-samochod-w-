#include "deleteCarCommand.h"
#include <iostream>
#include <vector>
#include "exceptions.h"

using namespace std;

DeleteCarCommand::DeleteCarCommand() :AbstractCommand() {
}

void DeleteCarCommand::executeMe(string command) {
	vector<string> arguments = devideCommandForAguments(command);

	if(arguments.size() < 2)
		throw InvalidArguments("No arguments");

	cout << "deleting car: ";
	for(int i = 1; i < arguments.size(); i++)
		cout << arguments[i] << " ";
	cout << endl;
}

bool DeleteCarCommand::isForMe(string command) {
	vector<string> arguments = devideCommandForAguments(command);
	return (arguments.size() > 0 && arguments[0] == COMMAND_NAME);
}
