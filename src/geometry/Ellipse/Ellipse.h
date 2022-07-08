#ifndef __ELLIPSE_H__
#define __ELLIPSE_H__

#include "../Shape/Shape.h"
#include "../../Utils/Utils.h"
#include "../../Point/Point.h"

class Ellipse : public Shape
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

#endif // __ELLIPSE_H__