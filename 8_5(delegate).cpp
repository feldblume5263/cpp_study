#include <iostream>

using namespace std;

class	Student
{
private:
	int				m_id;
	string			m_name;

public:
	Student(const string &name_in)
		// : Student(0, name_in)
	{
		init(0, name_in);
	}

	Student(const int &id_in, const string &name_in)
		// : m_id(id_in), m_name(name_in)
	{
		init(id_in, name_in);
	}

	void	init(const int &id_in, const string &name_in)
	{
		m_id = id_in;
		m_name = name_in;
	}

	void	print()
	{
		cout << m_id << " " << m_name << endl;
	}
};

int		main(void)
{
	Student st1(0, "junhpark");
	Student st2("kyeo");

	st1.print();
	st2.print();

	// Student *st;
	// int		st_num;
	// int		i;

	// st_num = 4;
	// st = (Student *)malloc(sizeof(Student) * st_num);
	// st[0] = Student(000, "junhpark");
	// st[1] = Student(001, "kyeo");
	// st[2] = Student(002, "jikang");
	// st[3] = Student(003, "yunslee");

	// i = -1;
	// while (++i < st_num)
	// 	st[i].print();

	return (0);
}
