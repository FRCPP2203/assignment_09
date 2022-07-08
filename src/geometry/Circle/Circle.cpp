#include "Circle.h"

Circle::Circle(Point &p_G, double p_R)
    : m_G(p_G), m_R(p_R)
{
}

Circle::Circle()
{
}
double Circle::getPerimeter()
{
    return 2 * m_R * PI;
}
double Circle::getArea()
{
    return PI * m_R * m_R;
}
void Circle::fromString(const std::string &p_s)
{
    std::vector<std::string> inputs = Utils::strToVec(p_s);
    m_G.setX(Utils::strToNum<double>(inputs[0]));
    m_G.setY(Utils::strToNum<double>(inputs[1]));
    m_R = Utils::strToNum<double>(inputs[2]);
}
std::string Circle::toString()
{
    double P = getPerimeter();
    double S = getArea();
    return "Circle: R=" + std::to_string(m_R) + ", P=" + std::to_string(P) + ", S=" + std::to_string(S);
}

Circle::~Circle()
{
}