#pragma once
#include <string>
#include "../../Point/Point.h"

#define PI 3.14
class Shape : public Point
{

protected:
    template <typename T>
    T strToNum(const std::string &s);
    std::vector<std::string> strToVec(const std::string &s);

public:
    Shape();
    virtual double getPerimeter();
    virtual double getArea();
    virtual void fromString(const std::string &s);
    virtual std::string toString();
};