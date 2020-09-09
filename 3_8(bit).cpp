#include <iostream>
#include <bitset>

int		main(void)
{
	using namespace std;

	// << left shift
	// >>
	// ~, &, |, ^

	//bitwise operator은 unsigned를 사용하는게 보편적

	unsigned int	a = 3;

	cout << std::bitset<4>(a) << endl; // 이진수로 바꿔줌


	unsigned int	b  = a << 1; // 패턴을 통째로 한칸 미뤄준다.
	cout << std::bitset<4>(b) << endl; // 2배씩 늘어나는 것임.


}
