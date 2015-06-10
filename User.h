#pragma once
#include <string>
#include <iostream>
#include <vector>
class User
{
public:
	std::string userId;	
	std::string name;
	std::vector <std::string> list_of_privileges;
	User(std::string paramUserId, std::string paramUserName, std::vector <std::string> paramUserPrivileges);
	~User();
};
