#pragma once
#include <string>

class Message // creating an object of class Message
{
public:
	Message() = default;

	// class object initialization, arguments: from, to, text
	Message(const std::string& from, const std::string& to, const std::string& text)
		: from_(from), to_(to), text_(text) {}

	const std::string& getMassageFrom() const; // returns the message argument - from (from whom)
	const std::string& getMassageTo() const; // returns the message argument - to (to whom)
	const std::string& getMassageText() const; // returns the message argument - text

	~Message() = default;

private:
	std::string from_;
	std::string to_;
	std::string text_;
};