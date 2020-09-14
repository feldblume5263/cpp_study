#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>

using namespace std;

int			main(void)
{
	//int	fibonacci[] =
	//			{0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};

	std::vector<int> fibonacci = {0, 1, 1, 2, 300, 5, 8};

	for (auto &number: fibonacci)
		number *= 10;
	for (const auto num: fibonacci)
		cout << num << " ";
	cout << endl;

	int max_num = numeric_limits<int>::lowest();

	for (const auto &n: fibonacci)
		max_num = max(max_num, n);
	cout << max_num << endl;
	return (0);
}
