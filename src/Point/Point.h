#pragma once

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
    Point &operator=(const Point &p_point);
    Point &operator+(const Point &p_point);
    Point &operator-(const Point &p_point);
    Point &operator*(const Point &p_point);
    Point &operator/(const Point &p_point);

    double distance(const Point &p_point1, const Point &p_point2);
    double dotProduct(const Point &p_point1, const Point &p_point2);

    ~Point();
};