#include "Ellipse.h"

Ellipse::Ellipse(Point &p_G, double p_RX, double p_RY)
    : m_G(p_G), m_RX(p_RX), m_RY(p_RY)
{
}

double Ellipse::getPerimeter()
{
    return 2 * PI * sqrt((pow(m_RX, 2) + pow(m_RY, 2)) / 2);
}
double Ellipse::getArea()
{
    return PI * m_RX * m_RY;
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