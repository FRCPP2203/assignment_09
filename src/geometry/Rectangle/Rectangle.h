#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "../Shape/Shape.h"
#include "../../Utils/Utils.h"
#include "../../Point/Point.h"
class Rectangle : public Shape
{
private:
    Point m_G;
    double m_Width, m_Height;

public:
    Rectangle();
    Rectangle(Point &p_A, double p_Width, double p_Height);
    double getPerimeter() override;
    double getArea() override;
    void fromString(const std::string &p_s) override;
    std::string toString() override;
    ~Rectangle();
};

#endif // __RECTANGLE_H__