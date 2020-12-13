#pragma once

#include <string>
#include <vector>


class AbstractCommand {
public:
	AbstractCommand();
	AbstractCommand(AbstractCommand *p_next);
	~AbstractCommand();
	void execute(std::string command);

private:
	AbstractCommand *p_nextCommand;

	virtual bool isForMe(std::string command) = 0;
	virtual void executeMe(std::string command) = 0;

protected:
	std::vector<std::string> devideCommandForAguments(std::string);
};
