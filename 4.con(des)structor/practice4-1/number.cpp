#include "number.hpp"
 
//コンストラクタ
Number::Number() : a(-1), b(-1)
{
	cout << "constructor:" << a << ", " << b << endl;
}

//  二つの数値を設定
void Number::setNumbers(int n1, int n2)
{
    a = n1;
    b = n2;
}
int Number::getAdd()
{
    return a + b;
}