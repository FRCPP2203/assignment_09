#include "Triangle.h"

Triangle::Triangle(Point &p_A, Point &p_B, Point &p_C)
    : m_A(p_A), m_B(p_B), m_C(p_C)
{
    m_ab = distance(m_A, m_B);
    m_ac = distance(m_A, m_C);
    m_bc = distance(m_B, m_C);
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
}
std::string Triangle::toString()
{
    return "";
}

Triangle::~Triangle()
{
}