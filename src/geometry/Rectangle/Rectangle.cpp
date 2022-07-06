#include "Rectangle.h"

Rectangle::Rectangle(Point &p_G, double p_Width, double p_Height)
    : m_G(p_G), m_Width(p_Width), m_Height(p_Height)
{
}

double Rectangle::getPerimeter()
{
    return 2 * (m_Width + m_Height);
}
double Rectangle::getArea()
{
    return m_Width * m_Height;
}
void Rectangle::fromString(const std::string &p_s)
{
}
std::string Rectangle::toString()
{
    return "";
}

Rectangle::~Rectangle()
{
}