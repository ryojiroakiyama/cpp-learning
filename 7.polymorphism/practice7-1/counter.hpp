#ifndef _COUNTER_HPP_
#define _COUNTER_HPP_
 
//  カウンタークラス
class Counter{
private:
    //  カウント
    int m_count;
public:
    //  コンストラクタ
    Counter();
    //  カウンタをリセット
    void reset();
    //  カウントされた回数を取得
    int getCount();
    //  1ずつカウント
    void count();
	//  引数分カウント
	void count(int num);
};
 
#endif