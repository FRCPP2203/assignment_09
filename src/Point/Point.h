#ifndef __POINT_H__
#define __POINT_H__

#include "math.h"
#include "vector"

class Point
{
private:
    double x;
    double y;

public:
    Point();
    Point(double x, double y);
    Point(const Point &p_point);

    // encapsulation
    void setX(double x);
    double getX();

    void setY(double y);
    double getY();

    // operator overloading
    Point &operator=(const Point &p_Point);
    Point operator+(const Point &p_Point);
    Point operator-(const Point &p_Point);
    Point operator*(const Point &p_Point);
    Point operator/(const Point &p_Point);
    Point &operator+=(const Point &p_Point);
    Point &operator-=(const Point &p_Point);
    Point &operator*=(const Point &p_Point);
    Point &operator/=(const Point &p_Point);

    double distance(const Point &p_B);
    double dotProduct(const Point &p_point1, const Point &p_point2);

    ~Point();
};
#endif // __POINT_H__