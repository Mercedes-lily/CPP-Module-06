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
		if (i == 0 && str[i] == '-')
			continue;
		if (!isdigit(str[i]))
			return(false);
	}
	return(true);
}

bool checkDouble(std::string str)
{
	int decimal = 0;
	for(int i = 0; str[i]; i++)
	{
		if (i == 0 && str[i] == '-')
			continue;
		else if (isdigit(str[i]))
			continue;
		else if(str[i] == '.' && str[i + 1])
			decimal++;
		else
			return(false);
	}
	if(decimal == 1)
		return(true);
	return(false);
}
	
bool checkFloat(std::string str)
{
	int decimal = 0;
	int f = 0;
	for(int i = 0; str[i]; i++)
	{
		if (i == 0 && str[i] == '-')
			continue;
		if (isdigit(str[i]))
			continue;
		else if(str[i] == '.' && str[i + 1] != 'f')
			decimal++;
		else if(str[i] == 'f' && !str[i + 1])
			f++;
		else
			return(false);
	}
	if(decimal == 1 && f == 1)
		return(true);
	return(false);
}

int checkSpecial(std::string str)
{
	int type;
	if (str.compare("nan") == 0 || str.compare("-inf") == 0 || str.compare("+inf") == 0)
		type = TYPEDOUBLE;
	else if (str.compare("nanf") == 0 || str.compare("-inff") == 0 || str.compare("+inff") == 0)
		type = TYPEFLOAT;
	else
		type = TYPEOTHER;
	return(type);
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