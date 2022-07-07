#pragma once
#include "../IShape.h"

class Triangle : public IShape
{
private:
    Point m_A, m_B, m_C;
    double m_ab, m_bc, m_ac;

public:
    Triangle(Point &p_A, Point &p_B, Point &p_C);
    double getPerimeter() override;
    double getArea() override;
    void fromString(const std::string &p_s) override;
    std::string toString() override;
    ~Triangle();
};
