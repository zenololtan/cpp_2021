#include "Data.hpp"

uintptr_t 	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int	main()
{
	Data		test("test message");
	uintptr_t	ret;

	std::cout << test << std::endl;
	ret = serialize(&test);
	std::cout << "serialized: " << ret << std::endl;
	Data new_data(*deserialize(ret));
	std::cout << "unserialized: " << new_data << std::endl;
	return 0;
}
