#ifndef BASE_HPP
# define BASE_HPP

class Base
{
public:
	virtual ~Base(void);
};

#endif

Base * generate(void);
void identify(Base* p);
void identify(Base& p);