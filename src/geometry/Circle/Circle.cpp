#include "Circle.h"

Circle::Circle(Point &p_G, double p_R)
    : m_G(p_G), m_R(p_R)
{
}

double Circle::getPerimeter()
{
    return 2 * m_R * 3.14;
}
double Circle::getArea()
{
    return 3.14 * m_R * m_R;
}
void Circle::fromString(const std::string &p_s)
{
}
std::string Circle::toString()
{
    return "";
}

Circle::~Circle()
{
}