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
	printf("char*:%s\n", s.c_str());// c_str:string(C++) -> const char * (C)
	return (0);
}
