#pragma once
#include "../Shape/Shape.h"
#include "../../Point/Point.h"

class Triangle : public Shape
{
private:
    Point A, B, C;

public:
    Triangle(const Point &p_A, const Point &p_B, const Point &p_C);
    double getPerimeter() override;
    double getArea() override;
    void fromString(const std::string &s) override;
    std::string toString() override;
    ~Triangle();
};