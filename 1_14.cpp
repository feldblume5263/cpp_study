#include <iostream>
#include <algorithm>

using namespace std;

#define LIKE_APPLE

int			main(void)
{
#ifdef LIKE_APPLE
		cout << "Apple " << endl;
#endif

#ifndef LIKE_APPLE
	cout << "Orange " << endl;
#endif
	return (0);
}
