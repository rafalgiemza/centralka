#include "UserCreator.h"
#include "PrivilegesController.h"
#include <sstream>
#define SSTR( x ) dynamic_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()

UserCreator::UserCreator() {};

enum user_enum 
{
	GUEST = 0,
	MASTER = 1,
	OTHER = 2
};

void UserCreator::addUser() { //do³o¿yæ klasê abstrakcyjn¹ 
int k=1;
		while (k!=0)
		{
			std::string login;
			std::vector <std::string> privileges;
			int chose_type=0;
			std::cout << "Podaj login" << std::endl;
			std::cin >> login;
			std::cout << "1 Gosc, 2 Gospodarz, 3 Inne "<< std::endl;
			std::cin >> chose_type;
			PrivilegesController PrivilegesControllerObject;
			switch (chose_type)
			{
			case GUEST: 
				for (int i=0; i<2; i++) 
					privileges.push_back(PrivilegesControllerObject.list_of_privileges.at(i)); 
				break;
			case MASTER: 
				for (int i=0; i<5; i++)	
					privileges.push_back(PrivilegesControllerObject.list_of_privileges.at(i)); 
				break;
			case OTHER: 
				for (int i=0; i<5; i++)	
					std::cout << (PrivilegesControllerObject.list_of_privileges.at(i)) << std::endl;  
					int chose_privilege;
					std::cin >> chose_privilege;
					for (int i=0; i<chose_privilege; i++) 
						privileges.push_back(PrivilegesControllerObject.list_of_privileges.at(i));
				break;
			}
			std::string nazwa = "user" + SSTR(list_of_users.size());
			list_of_users.push_back(new User(nazwa, login, privileges));
			std::cout << "Czy utworzyc jeszcze jednego? [1-yes/0-no]" << std::endl;
			std::cin >> k;
		}	
}

void UserCreator::listUsers()
{
	std::cout << "Nazwa: " << list_of_users.at(0) ->name << " Uprawnienia: " << std::endl;
	for (int i=0; i < list_of_users.at(0)->list_of_privileges.size();	i++) {
		if (!list_of_users.at(0)->list_of_privileges.empty())
			std::cout << list_of_users.at(0)->list_of_privileges.at(i)	<< std::endl;
		else std::cout << "Brak uprawnien" << std::endl;
	}
	
}


void UserCreator::cleanUp()
{
	while (!list_of_users.empty())
	{
		delete list_of_users.at(list_of_users.size()-1);
		list_of_users.pop_back();
	}
}

