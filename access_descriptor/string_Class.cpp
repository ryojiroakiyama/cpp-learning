#include <iostream>
#include <string>

using namespace std;

int	main(void)
{
	string s;
	s = "I am";
	s.append(" Akiyama.");
	cout << s << endl;
	cout << "string_length:" << s.length() << endl;
	//how to use printf(c). because of incompatible between char*(c) and string Class(c++)
	printf("char*:%s\n", s.c_str());
	return (0);
}
