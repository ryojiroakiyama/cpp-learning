#ifndef _CALCULATION_HPP_
#define _CALCULATION_HPP_
 
#include <iostream>

using namespace std;
 
class Calculation{
private:
	int		m_number1;
	int		m_number2;
public:
	void	setNumber1(int n);
	void	setNumber2(int s);
	int		getNumber1();
	int		getNumber2();
	int		add();
	int		sub();
};
 
#endif