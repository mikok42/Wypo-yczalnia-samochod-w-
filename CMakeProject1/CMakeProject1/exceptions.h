#pragma once

#include <string>

class Exception {
public:
	Exception();
	Exception(std::string message);
	std::string what();

protected:
	std::string message;
};

class UnKnownException :public Exception {
public:
	UnKnownException();
	UnKnownException(std::string message);
};

class InvalidArguments :public Exception {
public:
	InvalidArguments();
	InvalidArguments(std::string message);
};

class CommandDoesNotExist :public Exception {
public:
	CommandDoesNotExist();
	CommandDoesNotExist(std::string message);
};
