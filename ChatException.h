#pragma once
#include <exception>

class ExceptionUserLogin : public std::exception // registration exception, login not available
{
public:
	virtual const char* what() const noexcept override
	{
		return "\nError: Invalid login";
	}
};

class ExceptionUserName : public std::exception //registration exception, name not available
{
public:
	virtual const char* what() const noexcept override
	{
		return "\nError: Invalid name. Enter 0 - exit";
	}
};