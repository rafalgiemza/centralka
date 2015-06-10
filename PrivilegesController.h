#pragma once
#include "PrivilegesDefinition.h"
#include <iostream>
#include <vector>
#include <string>

class PrivilegesController
{
public:
	PrivilegesController();
	~PrivilegesController();
	std::vector <std::string> list_of_privileges;
};

