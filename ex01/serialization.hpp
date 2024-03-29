#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP
# include <string>
# include <iostream>

typedef struct Data
{
	int number;
	std::string str;
} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif