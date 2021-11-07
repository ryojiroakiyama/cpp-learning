#ifndef _VECTOR_HPP_
#define _VECTOR_HPP_
 
//  ベクトルクラス
class Vector{
private:
    double m_x;
    double m_y;
public:
    //  コンストラクタ
    Vector();
	//  引数付きコンストラクタ
	Vector(double num_x, double num_y);
    //  成分の設定
    void set(double x, double y);
    //  x成分の取得
    double getX();
    //  y成分の取得
    double getY();
};
 
#endif