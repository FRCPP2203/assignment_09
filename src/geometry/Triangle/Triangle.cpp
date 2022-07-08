#include "Triangle.h"

Triangle::Triangle(Point &p_A, Point &p_B, Point &p_C)
    : m_A(p_A), m_B(p_B), m_C(p_C)
{
    m_ab = m_A.distance(p_B);
    m_ac = m_A.distance(p_C);
    m_bc = m_B.distance(p_C);
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
    std::vector<std::string> inputs = Utils::strToVec(p_s);
    m_A.setX(Utils::strToNum<double>(inputs[0]));
    m_A.setY(Utils::strToNum<double>(inputs[1]));
    m_B.setX(Utils::strToNum<double>(inputs[2]));
    m_B.setY(Utils::strToNum<double>(inputs[3]));
    m_C.setX(Utils::strToNum<double>(inputs[4]));
    m_C.setY(Utils::strToNum<double>(inputs[5]));
    m_ab = m_A.distance(m_B);
    m_ac = m_A.distance(m_C);
    m_bc = m_B.distance(m_C);
}
std::string Triangle::toString()
{
    double P = getPerimeter();
    double S = getArea();
    return "Triangle: AB=" + std::to_string(m_ab) + ", BC=" + std::to_string(m_bc) + ", AC=" + std::to_string(m_ac) + ", P=" + std::to_string(P) + ", S=" + std::to_string(S);
}

Triangle::~Triangle()
{
}