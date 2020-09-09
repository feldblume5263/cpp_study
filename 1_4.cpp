#include <iostream> // cout, cin, endl, ...
#include <cstdio> // printf

int		main(void)
{
	using namespace std;
	int		x;
	double	pi;

	x = 2;
	pi = 3.141592;
	cout << "I love Wan\n\n";
	std::cout << "x is " << x << " and pi is " << pi << std::endl;
	std::cout << "abc" << "\t" << "def" << std::endl;
	std::cout << "ab" << "\t" << "cdef" << std::endl;

	x = 1;
	cout << "Before your input, X was" << x << endl;

	std::cin >> x;
	cout << "Your input is " << x << endl;

	return (0);
}
