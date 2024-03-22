#ifndef MAIN_HPP
# define MAIN_HPP

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <climits>
#include <cstring>
#include <string>


enum checkType
{
	TYPECHAR,
	TYPEINT,
	TYPEDOUBLE,
	TYPEFLOAT,
	TYPEOTHER
};

bool checkChar(std::string str);
bool checkInt(std::string str);
bool checkDouble(std::string str);
bool checkFloat(std::string str);
bool checkSpecial(std::string str);
int checkType(std::string str);
void charcast(char *str);
void intcast(char *str);
void doublecast(char *str);
void floatcast(char *str);

#endif