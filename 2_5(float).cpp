#include <iostream>
#include <iomanip>
#include <limits>

int			main(void)
{
	using namespace std;

	float		f(3.141592f);
	double		d(3.141592);
	long double	ld;

	cout << sizeof(f) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(ld) << endl;

	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<long double>::max() << endl;

	cout << setprecision(19) << endl;
	cout << 1.0 / 3.0 << endl;
}
