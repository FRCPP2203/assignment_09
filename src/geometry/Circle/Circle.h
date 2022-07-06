#pragma once
#include "../IShape.h"

class Circle : public IShape
{
private:
    Point m_G;
    double m_R;

public:
    Circle(Point &p_G, double p_R);
    double getPerimeter();
    double getArea();
    void fromString(const std::string &s);
    std::string toString();
    ~Circle();
};
