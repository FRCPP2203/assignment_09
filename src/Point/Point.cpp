#include "Point.h"
#include "math.h"

Point::Point(double p_x, double p_y)
    : x(p_x), y(p_y)
{
}

Point::Point(const Point &p_point)
{
}

void Point::setX(double x)
{
    this->x = x;
}
double Point::getX()
{
    return x;
}

void Point::setY(double y)
{
    this->y = y;
}
double Point::getY()
{
    return y;
}

Point &Point::operator=(const Point &p_point)
{
    x = p_point.x;
    y = p_point.y;
    return *this;
}

Point &Point::operator+(const Point &p_point)
{
    x += p_point.x;
    y += p_point.y;
    return *this;
}
Point &Point::operator-(const Point &p_point)
{
    x -= p_point.x;
    y -= p_point.y;
    return *this;
}
Point &Point::operator*(const Point &p_point)
{
    x *= p_point.x;
    y *= p_point.y;
    return *this;
}
Point &Point::operator/(const Point &p_point)
{
    x /= p_point.x;
    y /= p_point.y;
    return *this;
}

double Point::distance(const Point &p_point1, const Point &p_point2)
{
    return sqrt(pow(p_point2.x - p_point1.x, 2) + pow(p_point2.y - p_point1.x, 2));
}
double Point::dotProduct(const Point &p_point1, const Point &p_point2)
{
    return (p_point1.x * p_point2.x) + (p_point1.y * p_point2.y);
}
Point::~Point()
{
}