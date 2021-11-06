#ifndef _COUNTER_HPP_
#define _COUNTER_HPP_

#include <iostream>
using namespace std;

class Counter{
private:
    //  回数
    int m_count;
	//  トータルカウント回数
	static int m_totalCount;
public:
    //  コンストラクタ
    Counter();
    //  リセット
    void reset();
    //  カウント
    void count();
    //  カウントの数
    int getCount();
	//  トータルカウントの数
	static int getTotalCount();
};
 
#endif
