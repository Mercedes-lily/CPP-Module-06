#include "main.hpp"

int main(int argc, char** argv)
{
	int type;
	if (argc == 1)
		std::cout << "One parameter needed.";
	else if (argc == 2)
	{
		type = checkType(argv[1]);
		if(type == TYPECHAR)
			charcast(argv[1]);
		else if(type == TYPEINT)
			intcast(argv[1]);
		else if(type == TYPEDOUBLE)
			doublecast(argv[1]);
		else if(type == TYPEFLOAT)
			floatcast(argv[1]);
		else
		{
			std::cout << "Invalid type. Please enter a valid type" << std::endl; 
			std::cout << "EXEMPLE" << std::endl; 
			std::cout << "Char : c" << std::endl; 
			std::cout << "Int : 42" << std::endl; 
			std::cout << "Double : 42.0" << std::endl;
			std::cout << "Float : 42.0f" << std::endl;
		}
	}
	else
		std::cout << "Only one parameter needed.";
}