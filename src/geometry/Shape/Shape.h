#pragma once

#include <string>
class Shape
{
private:
    /* data */
public:
    Shape();
    virtual double getPerimeter() = 0;
    virtual double getArea() = 0;
    virtual void fromString(const std::string &s) = 0;
    virtual std::string toString() = 0;
    ~Shape();
};