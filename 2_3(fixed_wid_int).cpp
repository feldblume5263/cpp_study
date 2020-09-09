#include <iostream>
//#include <cstdint>

int			main(void)
{
	using namespace std;

	std::int16_t i(5);
	std::int8_t myint = 65;

	cout << myint << endl;

	int_fast8_t fi(5);
	int_least64_t fl(5);

	return (0);
}
