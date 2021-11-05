#include <iostream>

void	other_way()
{
	std::cout << "HelloWorld." << std::endl;
}

using namespace std;

int		main()
{
	printf("HelloWorld.\n");
	cout << "HelloWorld." << endl;
	other_way();
	return (0);
}
