#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 단순한 기능은 struct
// 기능을 넣을 때는 class를 쓰자.

class		Friend
{
public: // access specifier (public private, protected)
	string	name;
	string	address;
	int		age;
	double	height;
	double	weight;

	void	print()
{
	cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
}
};



void	print(const string &name, const string &address, const int &age, const double &height, const double &weight)
{
	cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
}

int		main()
{
	Friend		jj {"Jack", "uptown", 22, 170, 50};

	//print(jj.name, jj.address, jj.age, jj.height, jj.weight);
	jj.print();

	vector<string>	name_vec;
	vector<string>	addr_vec;
	vector<int>		age_vec;
	vector<double>	hegiht_vec;
	vector<double>	weight_vec;

	print(name_vec[0], addr_vec[0], age_vec[0], hegiht_vec[0], weight_vec[0]);
	return (0);
}
