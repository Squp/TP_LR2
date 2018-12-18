#pragma once
#include <string>

//класс исключений
class Exception{
private:
	std::string message;
public:
	explicit Exception(const char *message = ""):message(message){}
	const char* Message() const{ return message.c_str(); }
};
