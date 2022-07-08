#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include "../Shape/Shape.h"
#include "../../Utils/Utils.h"
#include "../../Point/Point.h"
class Circle : public Shape
{
private:
    Point m_G;
    double m_R;

public:
    Circle();
    Circle(Point &p_G, double p_R);
    double getPerimeter() override;
    double getArea() override;
    void fromString(const std::string &p_s) override;
    std::string toString() override;
    ~Circle();
};

#endif // __CIRCLE_H__