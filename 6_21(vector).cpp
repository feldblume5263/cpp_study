#include <iostream>
#include <vector>

using namespace std;

int		main()
{
	std::vector<int> array = {1, 2, 3, 4, 5};

	std::vector<int> array2 = {1, 2, 3, 4, 5};
	cout << array2.size() << endl;

	std::vector<int> array3 = {1, 2, 3};
	cout << array3.size() << endl;

	std::vector<int> array4 = {1, 2, 3};
	cout << array4.size() << endl;

	for (auto &itr: array)
		cout << itr << " ";
	cout << endl;

	cout << array[1] << endl;
	cout << array.at(1) << endl;
}
