#pragma once
#include <string>
#include "../Point/Point.h"
#define PI 3.14
class IShape : public Point
{
public:
    virtual double getPerimeter() = 0;
    virtual double getArea() = 0;
    virtual void fromString(const std::string &s) = 0;
    virtual std::string toString() = 0;
};