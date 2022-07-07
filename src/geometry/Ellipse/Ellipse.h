#pragma once
#include "../IShape.h"

class Ellipse : public IShape
{
private:
    Point m_G;
    double m_RX, m_RY;

public:
    Ellipse(Point &p_G, double p_RX, double p_RY);
    double getPerimeter() override;
    double getArea() override;
    void fromString(const std::string &p_s) override;
    std::string toString() override;
    ~Ellipse();
};
