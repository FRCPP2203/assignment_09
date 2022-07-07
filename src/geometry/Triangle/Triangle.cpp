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
    std::vector<std::string> inputs = strToVec(p_s);
    // std::cout << inputs.size() << std::endl;
    /*     m_A.setX(strToNum<int>(inputs[0]));
        m_A.setY(strToNum<int>(inputs[1]));
        m_B.setX(strToNum<int>(inputs[2]));
        m_B.setY(strToNum<int>(inputs[3]));
        m_C.setX(strToNum<int>(inputs[4]));
        m_C.setY(strToNum<int>(inputs[5])); */
}
std::string Triangle::toString()
{
    return "HI Triangle";
}

Triangle::~Triangle()
{
}