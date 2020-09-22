#include <iostream>

using namespace std;

class		B
{
private:
	int		m_b;

public:
	B(const int &m_b_in)
	{
		m_b = m_b_in;
	}

	void	print()
	{
		cout << m_b << endl;
	}
};

class		Something
{
private:
	int		m_i;
	double	m_d;
	char	m_c;
	int		m_arr[5];
	B		m_b;

public:
	Something()
	: 	m_i(3),
		m_d(3.14),
		m_c('a'),
		m_arr{ 1, 2, 3, 4, 5 },
		m_b(m_i - 1)
		//: m_i{ 1 }, m_d{ 3.14 }, m_c{ 'a' } // 이렇게 쓰는 것도 가능. 다만 형 변환이 안된다.
	{
	// 	m_i = 1;
	// 	m_d = 3.14;
	// 	m_c = 'a';
	}

	void print()
	{
		cout << m_i << " " << m_d << " " << m_c << endl;
		for (auto &e: m_arr)
			cout << e << " ";
		cout << endl;
		m_b.print();
	}
};

int			main(void)
{
	Something	some;
	some.print();


}
