#pragma once
#include "User.h"
#include "Message.h"
#include "ChatException.h"
#include <vector>
#include <memory>

class Chat
{
public:
	Chat() = default;

	void start(); // program start method

	~Chat() = default;

private:
	bool chatSwitch_ = false; // the value of this variable is used to track the operation of the program
	std::shared_ptr<User> activeUser_ = nullptr; // the value of this pointer is used to track user activity
	std::vector <User> userData; // stores the data of all registered users (arguments: login, password, name)
	std::vector <Message> messageData; // stores the data of all written messages (arguments: from, to, text)

	void userAdminRegistration(); // user registration: login - "All", name "all"
	void setChatSwitch(); // changes the value of a variable (chatSwitch_)
	bool getChatSwitch() const; // returns the value of a variable (chatSwitch_)
	void setActiveUser(); // changes the value of a pointer (activeUser_)
	std::shared_ptr<User> getActiveUser() const; // returns the pointer value (activeUser_)

	void showMainMenu(); // displays the first menu with a choice: SignIn, Registration, Exit. Calls appropriate methods
	void userSignIn(); // enter the chat, checks if the user exists in the database and matches the arguments
	void userRegistration(); // chat registration, checks if the user exists in the database and registers the new user
	std::shared_ptr<User> chekUserLogin(const std::string& login) const; //checks if the login attribute matches in the database
	std::shared_ptr<User> chekUserName(const std::string& name) const; //checks if the name attribute matches in the database

	// displays a chat menu with a choice of username (showAllUsersNames)
	// calls the message display method (showAllChatMessages)
	// calls the send message method (sendMessage)
	void showChatMenu();
	void showAllUsersNames(const std::string& name) const;
	void showAllChatMessages(const std::string& name) const;
	void sendMessage(const std::string& name);
};
