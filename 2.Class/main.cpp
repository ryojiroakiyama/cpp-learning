#include <iostream>
#include "sample.hpp"

using namespace std;

int main()
{
	Csample obj1, obj2;
	int		num;

	obj1.set(1);
	obj2.set(2);
	
	cout << obj1.get() << endl;
	cout << obj2.get() << endl;

	return (0);
}
