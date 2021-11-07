#include "vector.hpp"
 
//  コンストラクタ
Vector::Vector() : m_x(0), m_y(0)
{
}
//  引数付きコンストラクタ
Vector::Vector(double num_x, double num_y) : m_x(num_x), m_y(num_y)
{
}
//  成分の設定
void Vector::set(double x, double y)
{
    m_x = x;
    m_y = y;
}
//  x成分の取得
double Vector::getX()
{
    return m_x;
}
//  y成分の取得
double Vector::getY()
{
    return m_y;
}