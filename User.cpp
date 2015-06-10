#include "User.h"

User::User(std::string paramUserId, std::string paramUserName, std::vector <std::string> paramUserPrivileges)
{ 
	userId = paramUserId;	
	name = paramUserName;
	list_of_privileges = paramUserPrivileges;
	std::cout << "Witaj " << name << std::endl;	
}
User::~User()
{ 
	std::cout << "Wylogowano uzytkownika " << name << std::endl;
}