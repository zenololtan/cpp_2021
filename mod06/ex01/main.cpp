#include "Data.hpp"
#include "output.hpp"

uintptr_t 	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

void _test()
{
	Data		test("hoi");
	uintptr_t	ret;

	print_line(MAGENTA);
	std::cout << test << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ret = serialize(&test);
		test = *deserialize(ret);
	}
	std::cout << test << std::endl;
	print_line(MAGENTA);
}

int	main()
{
	Data		test("test message");
	uintptr_t	ret;

	print_divider(MAGENTA, "TEST");
	std::cout << test << std::endl;
	ret = serialize(&test);
	std::cout << "serialized: " << ret << std::endl;
	Data new_data(*deserialize(ret));
	std::cout << "unserialized: " << new_data << std::endl;
	_test();
	return 0;
}
