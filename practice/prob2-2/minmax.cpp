#include "minmax.hpp"

int MinMax::max(int n1, int n2, int n3)
{
	if (n1 > n2)
	{
		if (n1 > n3)
			return (n1);
		else
			return (n3);
	}
	else
	{
		if (n2 > n3)
			return (n2);
		else
			return (n3);
	}
}

int MinMax::min(int n1, int n2, int n3)
{
	return (-max(-n1, -n2, -n3));
}
