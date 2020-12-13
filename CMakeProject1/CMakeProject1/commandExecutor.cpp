#include "commandExecutor.h"
#include <iostream>
#include "exceptions.h"

using namespace std;

CommandExecutor::CommandExecutor() {
	p_firstCommand = new AddCarCommand;
}

CommandExecutor::~CommandExecutor() {
	delete p_firstCommand;
}

void CommandExecutor::execute(string command) {
	try {
		p_firstCommand->execute(command);
	} catch(InvalidArguments & e) {
		cerr << e.what() << endl;
	} catch(CommandDoesNotExist & e) {
		cerr << e.what() << endl;
	} catch(UnKnownException & e) {
		cerr << e.what() << endl;
	}
}
