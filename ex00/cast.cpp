#include "main.hpp"

void charcast(char *str)
{
	char c = static_cast<char>(str[0]);
	std::cout << "char   : '" << c << "'"<< std::endl;
	std::cout << "int    : " << static_cast<int>(c) << std::endl;
	std::cout << "double : " << static_cast<double>(c) << std::endl;
	std::cout << "float  : " << static_cast<float>(c) << std::endl;
}

void intcast(char *str)
{
	double i = atoi(str);
	if(i < 0 || i > 127)
		std::cout << "char   : char overflow" << std::endl;
	else if((i >= 0 && i <= 31) || i == 127)
		std::cout << "char   : Non displayable" << std::endl;
	else 
		std::cout << "char   : '" << static_cast<char>(i) << "'"<< std::endl;
	std::cout << "int    : " << i << std::endl;
	std::cout << "double : " << static_cast<double>(i) << std::endl;
	std::cout << "float  : " << static_cast<float>(i) << std::endl;
}

void doublecast(char *str)
{
	double d = std::strtod(str, NULL);
	if(std::strcmp("nan", str) == true)
	{
		std::cout << "char   : impossible" << std::endl;
		std::cout << "int    : impossible" << std::endl;
		std::cout << "double : " << d << std::endl;
		std::cout << "float  : " << static_cast<float>(d) << std::endl;
	}
	if(d < 0 || d > 127)
		std::cout << "char   : char overflow" << std::endl;
	else if((d >= 0 && d <= 31) || d == 127)
		std::cout << "char   : Non displayable" << std::endl;
	else 
		std::cout << "char   : '" << static_cast<char>(d) << "'"<< std::endl;
	if (d > INT_MAX || d < INT_MIN)
		std::cout << "int   : " << "int overflow" << std::endl;
	else
		std::cout << "int    : " << static_cast<int>(d) << std::endl;
	std::cout << "double : " << d << std::endl;
	std::cout << "float  : " << static_cast<float>(d) << std::endl;
}

void floatcast(char *str)
{
	float f = std::strtof(str, NULL);
	if(std::strcmp("nanf", str) == true)
	{
		std::cout << "char   : impossible" << std::endl;
		std::cout << "int    : impossible" << std::endl;
		std::cout << "double : " << static_cast<float>(f) << std::endl;
		std::cout << "float  : " << f << std::endl;
	}
	if(f < 0 || f > 127)
		std::cout << "char   : char overflow" << std::endl;
	else if((f >= 0 && f <= 31) || f == 127)
		std::cout << "char   : Non displayable" << std::endl;
	else 
		std::cout << "char   : '" << static_cast<char>(f) << "'"<< std::endl;
	if (f > INT_MAX || f < INT_MIN)
		std::cout << "int   : " << "int overflow" << std::endl;
	else
		std::cout << "int    : " << static_cast<int>(f) << std::endl;
	std::cout << "double : " << static_cast<double>(f) << std::endl;
	std::cout << "float  : " << f << std::endl;
}