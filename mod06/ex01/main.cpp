#include "Data.hpp"

int	main()
{
	Data		test;
	uintptr_t	ret;

	std::cout << test << std::endl;
	ret = serialize(&test);
	std::cout << "serialized?: " << ret << std::endl;
	Data new_data(*deserialize(ret));
	std::cout << new_data << std::endl;
	return 0;
}
