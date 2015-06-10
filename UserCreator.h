#pragma once
#include <iostream>
#include <vector>
#include "User.h"


class UserCreator
{
public:
	UserCreator ();
	
	std::vector <User*> list_of_users;
	
	void addUser();
	void listUsers();
	void showUsers();
	void cleanUp();

};

