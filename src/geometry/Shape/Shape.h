#ifndef __SHAPE_H__
#define __SHAPE_H__

#include <string>

#define PI 3.14
class Shape
{
public:
    Shape();
    virtual double getPerimeter() = 0;
    virtual double getArea() = 0;
    virtual void fromString(const std::string &s) = 0;
    virtual std::string toString() = 0;
};
#endif // __SHAPE_H__