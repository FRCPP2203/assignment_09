#pragma once
#include <string>
#include "../../Point/Point.h"
#include "../../Utils/Utils.h"
#define PI 3.14
class Shape : public Point
{
public:
    Shape();
    virtual double getPerimeter();
    virtual double getArea();
    virtual void fromString(const std::string &s);
    virtual std::string toString();
};