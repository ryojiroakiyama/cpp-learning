#ifndef _OBJECT_HPP_
#define _OBJECT_HPP_

#include <iostream>
 
using namespace std;

class Object{
private:
    static int m_objectNum;
public:
    //  コンストラクタ
    Object();
    //  デストラクタ
    ~Object();
	static int getObjectNum();
};

#endif