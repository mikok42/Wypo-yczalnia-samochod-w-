#include "exceptions.h"

using namespace std;

Exception::Exception() {
}

Exception::Exception(string message) {
	this->message = message;
}

string Exception::what() {
	return message;
}

UnKnownException::UnKnownException() :Exception() {
}

UnKnownException::UnKnownException(string message) :Exception(message) {
}

InvalidArguments::InvalidArguments() :Exception() {
}

InvalidArguments::InvalidArguments(string message) :Exception(message) {
}

CommandDoesNotExist::CommandDoesNotExist() :Exception() {
}

CommandDoesNotExist::CommandDoesNotExist(string message) :Exception(message) {
}
