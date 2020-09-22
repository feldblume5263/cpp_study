#include <iostream>
using namespace std;

class		Second
{
public:
	Second()
	{
		cout << "class second constructor()" << endl;
	}

};

class		First
{
	Second	sec;
public:
	First()
	{
		cout << "class first constructor()" << endl;
	}
};

class		Fraction
{
private:
	int		m_numerator;
	int		m_denominator;

public:

	Fraction(const int &num_in = 1, const int &den_in = 1) // default value) // 생성자. 외부에서 호출되는 것이 아니라, 선언이 됨과 동시에 실행 되는 것.
	{
		m_numerator = num_in;
		m_denominator = den_in;

		cout << "fraction() constructor" << endl;
	}

	void	print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}
};

int			main(void)
{
	Fraction	one_thirds; // frac() // 매개변수가 하나는 들어가야함??.
	// one_third(1, 3); //이렇게는 안된다. 선언할 때 초기화해주거나, 퍼블릭에서 매개변수에 초기화해주거나.
	one_thirds.print();
	one_thirds = Fraction(1, 3);
	one_thirds.print();

	First		fir; // second가 first에 포함되어있기 때문에, 먼저 호출되고, 그 다음 first가 호출됨.

	return (0);
}
