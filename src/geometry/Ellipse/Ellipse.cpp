#include "Ellipse.h"

Ellipse::Ellipse(Point &p_G, double p_RX, double p_RY)
    : m_G(p_G), m_RX(p_RX), m_RY(p_RY)
{
}
Ellipse::Ellipse()
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
    std::vector<std::string> inputs = Utils::strToVec(p_s);
    m_G.setX(Utils::strToNum<double>(inputs[0]));
    m_G.setY(Utils::strToNum<double>(inputs[1]));
    m_RX = Utils::strToNum<double>(inputs[2]);
    m_RY = Utils::strToNum<double>(inputs[3]);
}
std::string Ellipse::toString()
{
    double P = getPerimeter();
    double S = getArea();
    return "Ellipse: R1=" + std::to_string(m_RX) + ", R2=" + std::to_string(m_RY) + ", P=" + std::to_string(P) + ", S=" + std::to_string(S);
}

Ellipse::~Ellipse()
{
}