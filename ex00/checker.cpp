#include "main.hpp"

bool checkChar(std::string str)
{
	if(str.length() == 1)
		return(true);
	return(false);
}

bool checkInt(std::string str)
{
	for(int i = 0; str[i]; i++)
	{
		if (is_digit(str[i]) != 0)
			return(false);
	}
	return(true);
}

bool checkDouble(std::string str)
{
	int decimal = 0;
	for(int i = 0; str[i]; i++)
	{
		if (is_digit(str[i]) = 0)
			continue;
		else if(str[i] == '.')
			decimal++;
		else
			return(false);
	}
	if(decimal < 1 && str.back() != '.' )
		return(true);
	return(false);
}
	
bool checkFloat(std::string str)
{
	int decimal = 0;
	int f = 0;
	for(int i = 0; str[i]; i++)
	{
		if (is_digit(str[i]) == 0)
			continue;
		else if(str[i] == '.')
			decimal++;
		else if(str[i] == 'f')
			f ++;
		else
			return(false);
	}
	if(decimal == 1 && str[str.length() - 2] == '.' && f == 1 && str.back() == 'f')
		return(true);
	return(false);
}

bool checkSpecial(std::string str)
{
	if(str.compare("nanf") == true || str.compare("-inff") == true || str.compare("+inff") == true)
		return(TYPEFLOAT);
	else if(str.compare("nan") == true || str.compare("-inf") == true || str.compare("-inff") == true)
		return(TYPEDOUBLE);
	return(TYPEOTHER);
}

int checkType(std::string str)
{
	if (checkChar(str) == true)
		return(TYPECHAR);
	else if (checkInt(str) == true)
		return(TYPEINT);
	else if (checkDouble(str) == true)
		return(TYPEDOUBLE);
	else if (checkFloat(str) == true)
		return(TYPEFLOAT);
	return(checkSpecial(str));
}