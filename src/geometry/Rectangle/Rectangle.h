#pragma once
#include "../IShape.h"

class Rectangle : public IShape
{
private:
    Point m_G;
    double m_Width, m_Height;

public:
    Rectangle(Point &p_A, double p_Width, double p_Height);
    double getPerimeter();
    double getArea();
    void fromString(const std::string &s);
    std::string toString();
    ~Rectangle();
};
