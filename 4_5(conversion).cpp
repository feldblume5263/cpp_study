#include <iostream>
#include <typeinfo>

int			main(void)
{
	using namespace std;

	// numeric promotion
	float a = 1.0f;
	double d = a;

	cout << typeid(a).name() << endl;

	// numeric conversion
	int i = 30000;
	char c = i;

	cout << static_cast<int>(c) << endl;


	return (0);
}
