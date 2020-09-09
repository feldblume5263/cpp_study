#include <iostream>

int			main(void)
{
	using namespace std;
	/*bool item1_flag = false;
	bool item2_flag = false;
	bool item3_flag = false;
	bool item4_flag = false;*/
	/*
	// event!
	item1_flag = true;

	// die! item2 los
	item2_flag = false;

	if (item3_flag)
	{
		// event
	}

	if (item3_flag && !item4_flag)
	{
		item3_flag = false;
		item4_flag = true;
	} */						//이런식으로 일일히 넣어주기 복잡함

	//array compact 하게 사용하는 것과 비슷

	const unsigned char	opt0 = 1 << 0;
	const unsigned char	opt1 = 1 << 1;
	const unsigned char	opt2 = 1 << 2;
	const unsigned char	opt3 = 1 << 3;

	unsigned char items_flag = 0;
	cout << "No Item " << bitset<8>(items_flag) << endl; // 00000000이 나온다.
	//이거 하나면 0,1로 8개의 아이템이 해결됨

	// item0 on
	items_flag |= opt0;
	cout << "Item0 optain " << bitset<8>(items_flag) << endl;

	// item3 on
	items_flag |= opt3;
	cout << "Item3 optain " << bitset<8>(items_flag) << endl;

	// item3 los
	items_flag &= ~opt3;
	cout << "Item3 lost " << bitset<8>(items_flag) << endl;

	// has item1?
	if (items_flag & opt1)
	{
		cout << "Has item1" << endl;
	}
	else
	{
		cout << "Not has item1" << endl;
	}
	// has item0?
	if (items_flag & opt0)
	{
		cout << "Has item0" << endl;
	}

	// obtain item 2, 3
	items_flag |= (opt2 | opt3);

	cout << bitset<8>(opt2 | opt3) << endl;
	cout << "Item2,3 obtained " << bitset<8>(items_flag) << endl;

	// 0을 1로 바꿔주고, 1을 0으로 바꿔준다.
	if ((items_flag & opt2) && !(items_flag & opt1))
	{
		items_flag ^= opt2;
		items_flag ^= opt1;
	}
	cout << bitset<8>(items_flag) << endl;
}
