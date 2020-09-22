#include <iostream>

using namespace std;

class		IntArray
{
private:
	int		*m_arr = nullptr;
	int		m_length = 0;

public:
	IntArray(const int length_in)
	{
		m_length = length_in;
		m_arr = new int[m_length];
	}
	int		size() { return (m_length); }

	~IntArray() // vector는 안에 이게 내장되어있다.
	{
		if (m_arr != nullptr)
			delete[]	m_arr;
	}
};

class		Simple
{
private:
	int		m_id;

public:
	Simple(const int &id_in)
		: m_id(id_in)
	{
		cout << "Constructor " << m_id << endl;
	}

	~Simple()
	{
		cout << "Destructor " << m_id << endl;
	}
};

int			main(void)
{
	Simple		s1(0);
	Simple		s2(1);
	// 0 - > 1 순서로 생성되고, 1 - > 0 순서로 사라짐

	while (true)
	{
		IntArray	my_int_arr(10000);
	}
}
