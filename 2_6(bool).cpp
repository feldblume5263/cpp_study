#include <iostream>

bool	isEqual(int a, int b)
{
	bool result = (a == b);

	return (result);
}

int		main(void)
{
	using namespace std;

	bool b1 = true;
	bool b2(false);
	bool b3 = { true };
	b3 = false;

	cout << boolalpha;
	cout << b3 << endl;
	cout << b1 << endl;

	cout << noboolalpha;
	cout << b3 << endl;
	cout << b1 << endl;

	cout << boolalpha;
	cout << !true << endl;
	cout << !false << endl;

	cout << isEqual(4, 1) << endl;
	cout << isEqual(1, 1) << endl;
	return (0);
}
