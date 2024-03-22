#include <iostream>
#include <string>
#include <cctype>

enum checkType
{
	TYPECHAR,
	TYPEINT,
	TYPEDOUBLE,
	TYPEFLOAT
	TYPEOTHER
};


bool checkChar(std::string str)
{
	if(str.length == 1)
		return(true);
	return(false);
}

bool checkInt(std::string str)
{
	for(int i = 0, str[i], i++)
	{
		if (is_digit(str[i]) = false)
			return(false)
	}
	return(true);
}

bool checkDouble(std::string str)
{
	int decimal = 0;
	for(int i = 0, str[i], i++)
	{
		if (is_digit(str[i]) = true)
			continue;
		else if(str[i] == '.')
			decimale ++;
		else
			return(false);
	}
	else if(decimal < 1 && str[back] != '.' )
		return(true);
	return(false);
}
	
bool checkFloat(std::string str)
{

}

bool checkSpecial(std::string str)
{
	if(str.compare == "nanf" || str.compare == "-inff" || str.compare == "+inff")
		return(TYPEFLOAT)
	else if(str.compare == "nan" || str.compare == "-inf" || str.compare == "+inf")
		return(TYPEDOUBLE)
	return(TYPEOTHER)
}

int checkType(std::string str)
{
	if (checkChar(std::string str) == true)
		return(TYPECHAR);
	else if (checkInt(std::string str) == true)
		return(TYPEINT);
	else if (checkDouble(std::string str) == true)
		return(TYPEDOUBLE);
	else if (checkFloat(std::string str) == true)
		return(TYPEFLOAT);
	return(checkSpecial(std::string str));
}