#include "hoge.hpp"
#include <iostream>
 
Hoge::Hoge()
{
	cout << "コンストラクタ" << endl;
}

Hoge::~Hoge()
{
	cout << "デストラクタ" << endl;
}

void Hoge::foo()
{
    cout << "fooメソッド" << endl;
}