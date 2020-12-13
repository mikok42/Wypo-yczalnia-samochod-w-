#include "abstractCommand.h"
#include <sstream>
#include "exceptions.h"

using namespace std;

AbstractCommand::AbstractCommand() {
	p_nextCommand = NULL;
}

AbstractCommand::AbstractCommand(AbstractCommand *p_next) {
	p_nextCommand = p_next;
}

AbstractCommand::~AbstractCommand() {
	delete p_nextCommand;
}

void AbstractCommand::execute(string command) {
	try {
		if(isForMe(command)) {
			executeMe(command);
			return;
		}
		if(p_nextCommand == NULL) {
			throw CommandDoesNotExist("This command does not exist");
			return;
		}
		p_nextCommand->execute(command);
	} catch(InvalidArguments & e) {
		throw InvalidArguments(e.what());
	} catch(CommandDoesNotExist & e) {
		throw CommandDoesNotExist(e.what());
	} catch(...) {
		throw UnKnownException("unknown exception");
	}
}

vector<string> AbstractCommand::devideCommandForAguments(string command) {
	vector<string> result;
	istringstream inputStringStream(command);
	string argument;
	while(inputStringStream >> argument) {
		result.push_back(argument);
	}
	return result;
}
