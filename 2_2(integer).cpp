#include <iostream>
#include <cmath>

int			main(void)
{
	using namespace std;

	short		s = 1;
	cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;
	// 2의 16제곱에 부호 이용 빼고, 0 빼고 최대값
	cout << numeric_limits<short>::max() << endl;
	cout << numeric_limits<short>::min() << endl;
	cout << numeric_limits<short>::lowest() << endl;
	return (0);
}
