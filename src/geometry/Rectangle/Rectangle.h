#pragma once
#include "../IShape.h"

class Rectangle : public IShape
{
private:
    Point m_G;
    double m_Width, m_Height;

public:
    Rectangle(Point &p_A, double p_Width, double p_Height);
    double getPerimeter() override;
    double getArea() override;
    void fromString(const std::string &p_s) override;
    std::string toString() override;
    ~Rectangle();
};
