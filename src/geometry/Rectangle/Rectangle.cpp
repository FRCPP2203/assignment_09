#include "Rectangle.h"

Rectangle::Rectangle(Point &p_G, double p_Width, double p_Height)
    : m_G(p_G), m_Width(p_Width), m_Height(p_Height)
{
}

Rectangle::Rectangle()
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
    std::vector<std::string> inputs = Utils::strToVec(p_s);
    m_G.setX(Utils::strToNum<double>(inputs[0]));
    m_G.setY(Utils::strToNum<double>(inputs[1]));
    m_Width = Utils::strToNum<double>(inputs[2]);
    m_Height = Utils::strToNum<double>(inputs[3]);
}
std::string Rectangle::toString()
{
    double P = getPerimeter();
    double S = getArea();
    return "Rectangle: height=" + std::to_string(m_Height) + ", weight=" + std::to_string(m_Width) + ", P=" + std::to_string(P) + ", S=" + std::to_string(S);
}

Rectangle::~Rectangle()
{
}