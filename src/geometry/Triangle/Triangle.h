#pragma once
#include "../IShape.h"

class Triangle : public IShape
{
private:
    Point m_A, m_B, m_C;
    double m_ab, m_bc, m_ac;

public:
    Triangle(Point &p_A, Point &p_B, Point &p_C);
    double getPerimeter();
    double getArea();
    void fromString(const std::string &p_s);
    std::string toString();
    ~Triangle();
};
