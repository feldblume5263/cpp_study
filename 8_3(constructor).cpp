#include <iostream>
using namespace std;

class		Fraction
{
private:
	int		m_numerator;
	int		m_denominator;

public:
	void	print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}
	void	input()
};

int			main(void)
{
	Fraction frac;

	frac.print();

	return (0);
}
