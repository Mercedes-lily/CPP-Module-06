#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	static int i = 0;
	if(i == 0)
	{
		srand(time(NULL));
		i = 1;
	}
	int number = rand() % 3;
	if(number == 0)
		Base *newbase = new A;
	else if(number = 1)
		Base *newbase = new B;
	else
		Base *newbase = new C;
	return(newbase);
}
void identify(Base* p)
{
	
}
void identify(Base& p)
{

}

int main()
{

}
