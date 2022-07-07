#pragma once
#include "../IShape.h"

class Ellipse : public IShape
{
private:
    Point m_G;
    double m_RX, m_RY;

public:
    Ellipse(Point &p_G, double p_RX, double p_RY);
    double getPerimeter();
    double getArea();
    void fromString(const std::string &s);
    std::string toString();
    ~Ellipse();
};
