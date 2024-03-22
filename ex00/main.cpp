#include "Checker.cpp"



int main(int argc, char** argv)
{
	LitteralType number;
	if (argc == 2)
	{
		checkType(argv[1]);
	}
	else
		std::cout << "Only one parameter needed."
}