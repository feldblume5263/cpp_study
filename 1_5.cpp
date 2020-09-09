#include <iostream>

using namespace std;

int			multiplyTwoNumbers(int num_a, int num_b)
{
	int		sum;

	sum = num_a * num_b;
	return (sum);
}

int			main(void)
{
	int		x;
	int		y;

	cin >> x;
	cin >> y;
	cout << multiplyTwoNumbers(x, y) << endl;
}
