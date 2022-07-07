#pragma once
#include "../Shape/Shape.h"

class Circle : public Shape
{
private:
    Point m_G;
    double m_R;

public:
    Circle(Point &p_G, double p_R);
    double getPerimeter() override;
    double getArea() override;
    void fromString(const std::string &p_s) override;
    std::string toString() override;
    ~Circle();
};
