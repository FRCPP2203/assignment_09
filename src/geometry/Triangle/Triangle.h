#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__

#include <iostream>
#include "../Shape/Shape.h"
#include "../../Utils/Utils.h"
#include "../../Point/Point.h"

class Triangle : public Shape
{
private:
    Point m_A, m_B, m_C;
    double m_ab, m_bc, m_ac;

public:
    Triangle();
    Triangle(Point &p_A, Point &p_B, Point &p_C);
    double getPerimeter() override;
    double getArea() override;
    void fromString(const std::string &p_s) override;
    std::string toString() override;
    ~Triangle();
};

#endif // __TRIANGLE_H__