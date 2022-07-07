#include "Triangle.h"
#include <iostream>
Triangle::Triangle(Point &p_A, Point &p_B, Point &p_C)
    : m_A(p_A), m_B(p_B), m_C(p_C)
{
    m_ab = distance(m_A, m_B);
    m_ac = distance(m_A, m_C);
    m_bc = distance(m_B, m_C);
}

Triangle::Triangle()
{
}
double Triangle::getPerimeter()
{
    return m_ab + m_bc + m_ac;
}
double Triangle::getArea()
{
    double p = 0.5 * (m_ab + m_ac + m_bc); // p is half perimeter
    // Heron
    return sqrt(p * (p - m_ab) * (p - m_bc) * (p - m_ac));
}
void Triangle::fromString(const std::string &p_s)
{
    int index = 0;
    int len = p_s.size();
    while (len >= 0 && index < len)
    {
        if (p_s[index + 1] != ' ')
        {
            index = index + 1;
            continue;
        }
        std::cout << p_s[index] << std::endl;
        index += 2;
        len--;
    }

    // m_A.setX(strToNum<int>(p_s));
    // m_A.setY(strToNum<int>(p_s));
    // m_B.setX(strToNum<int>(p_s));
    // m_B.setY(strToNum<int>(p_s));
    // m_C.setX(strToNum<int>(p_s));
    // m_C.setY(strToNum<int>(p_s));
}
std::string Triangle::toString()
{
    return "HI Triangle";
}

Triangle::~Triangle()
{
}