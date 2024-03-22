#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>

charcast(std::string str)
{
	char c = static_cast<char>(str[0]);
	std::cout << "char   : '" << c << "'"<< std::endl;
	std::cout << "int    : " << static_cast<int>(c) << std::endl;
	std::cout << "double : " << static_cast<double>(c) << std::endl;
	std::cout << "float  : " << static_cast<float>(c) << std::endl;
}

intcast(std::string str)
{
	int i = atoi(str);
	if(i < 0 || i > 127)
		std::cout << "char   : char overflow" << std::endl
	else if((i >= 0 && i <= 31) || i == 127)
		std::cout << "char   : Non displayable" << std::endl;
	else 
		std::cout << "char   : '" << static_cast<char>(i) << "'"<< std::endl;
	std::cout << "int    : " << i << std::endl;
	std::cout << "double : " << static_cast<double>(i) << std::endl;
	std::cout << "float  : " << static_cast<float>(i) << std::endl;
}

doublecast(std::string str)
{
	double d = atof(str);
	if(str.compare == "nan")
	{
		std::cout << "char   : impossible" << std::endl;
		std::cout << "int    : impossible" << std::endl;
		std::cout << "double : " << d << std::endl;
		std::cout << "float  : " << static_cast<float>(d) << std::endl;
	}
	if(d < 0 || d > 127)
		std::cout << "char   : char overflow" << std::endl
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

floatcast(std::string str)
{
	float f = strtof(str, NULL);
	if(str.compare == "nanf")
	{
		std::cout << "char   : impossible" << std::endl;
		std::cout << "int    : impossible" << std::endl;
		std::cout << "double : " << static_cast<float>(f) << std::endl;
		std::cout << "float  : " << f << std::endl;
	}
	if(f < 0 || f > 127)
		std::cout << "char   : char overflow" << std::endl
	else if((f >= 0 && f <= 31) || f == 127)
		std::cout << "char   : Non displayable" << std::endl;
	else 
		std::cout << "char   : '" << static_cast<char>(f) << "'"<< std::endl;
	if (d > INT_MAX || d < INT_MIN)
		std::cout << "int   : " << "int overflow" << std::endl;
	else
		std::cout << "int    : " << static_cast<int>(f) << std::endl;
	std::cout << "double : " << static_cast<double>(f) << std::endl;
	std::cout << "float  : " << f << std::endl;
}