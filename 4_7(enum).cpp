#include <iostream>
#include <typeinfo>

/*int			computerDamage(int weapon_id)
{
	if (weapon_id == 0) // sword
	{
		return (1);
	}
	if (weapon_id == 1) // hammer
	{
		return (2);
	}
}*/

enum Color // user-defined data types
{
	COLOR_BLACK = -3,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN = 5,
	COLOR_SKYBLUE = 5, // 맨 뒤에 , 있어도 괜찮음.
	//BLUE <- 서로 달라보이는 열거도 겹치면 오류가 난다.
};

enum Feeling
{
	HAPPY,
	JOY,
	TIRED,
	BLUE,
};


int			main(void)
{
	using namespace std;

	Color paint = COLOR_BLACK;
	Color house(COLOR_BLUE);
	Color apple = {COLOR_RED};

	Color my_color = COLOR_RED;
	cout << my_color << " "<< COLOR_RED << endl;

	if (COLOR_GREEN == COLOR_SKYBLUE)
	{
		cout << "EQUAL" << endl;
	}
}
