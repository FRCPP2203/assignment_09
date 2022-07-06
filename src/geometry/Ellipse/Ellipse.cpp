#include "Ellipse.h"

Ellipse::Ellipse(Point &p_G, double p_R)
    : m_G(p_G), m_R(p_R)
{
}

double Ellipse::getPerimeter()
{
    return 2 * m_R * 3.14;
}
double Ellipse::getArea()
{
    return 3.14 * m_R * m_R;
}
void Ellipse::fromString(const std::string &p_s)
{
}
std::string Ellipse::toString()
{
    return "";
}

Ellipse::~Ellipse()
{
}