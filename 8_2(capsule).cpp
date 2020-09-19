#include <iostream>
#include <string>
#include <vector>

using namespace std;

class	Date
{
private: // 접근 지정자
	int		m_month;
	int		m_day;
	int		m_year;

// 같은 클래스의 멤버라면, public에서 private로 접근할 수 있다.
public: // access function
	void setDate(const int &month_input, const int &day_input, const int &year_input)
	{
		m_month = month_input;
		m_day = day_input;
		m_year = year_input;
	}
	void copyFrom(const Date &original)
	{
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;
	}
};

int		main(void)
{
	Date today;

// Class인 경우 이렇게 수정해주는 것이 불가능, struct는 가능
// 단, class에 public으로 묶어주면 가능하다. 따로 기재하지 않으면 private이 기본
	// today.m_month = 9;
	// today.m_day = 19;
	// today.m_year = 2020;

	today.setDate(9, 19, 2020);

	Date copy;
	copy.copyFrom(today);
}
