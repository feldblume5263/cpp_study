#include <iostream>
#include <array>

using namespace std;

int		main(void)
{
	int array_test[5] = {1, 2, 3, 4, 5};

	std::array<int, 5> my_arr = {1, 2, 3, 4, 5};
	my_arr = {0, 1, 2, 3, 4};
	my_arr = {0, 1, 2, };

	//cout << my_arr[10] << endl;
	cout << my_arr.at(10) << endl;
}
