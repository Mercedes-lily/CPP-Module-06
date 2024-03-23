#include "serialization.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
	return(raw);
}

Data* deserialize(uintptr_t raw)
{
	Data *data = reinterpret_cast<Data *>(raw);
	return(data);
}

int main()
{
	Data *data = new Data;
	Data *data2;
	uintptr_t raw;
	data->number = 127;
	data->str = "lapin";
	std::cout << data << std::endl;
	std::cout << data->str << std::endl;
	std::cout << data->number << std::endl;
	raw = serialize(data);
	std::cout << &raw << std::endl;
	std::cout << raw << std::endl;
	data2 = deserialize(raw);
	std::cout << data2 << std::endl;
	std::cout << data2->str << std::endl;
	std::cout << data2->number << std::endl;
	delete data;
}