#pragma once
#include <string>

class User // creating an object of class User
{
public:
	User() = default;

	// class object initialization, arguments: login, password, name
	User(const std::string& login, const std::string& password, const std::string& name) 
		: login_(login), password_(password), name_(name) {}

	const std::string& getUserLogin() const; // returns the user's login
	const std::string& getUserPassword() const; // returns the user's password
	const std::string& getUserName() const; // returns the username

	~User() = default;

private:
	const std::string login_;
	std::string password_;
	std::string name_;
};