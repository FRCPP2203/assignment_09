#ifndef __SHAPEFACTORY_H__
#define __SHAPEFACTORY_H__

#pragma once
#include <list>
#include <fstream>
#include <iostream>
#include "../Shape/Shape.h"
#include "../Triangle/Triangle.h"
#include "../Circle/Circle.h"
#include "../Rectangle/Rectangle.h"
#include "../Ellipse/Ellipse.h"
#include "../../Utils/Utils.h"

class ShapeFactory
{
private:
    /* data */
public:
    ShapeFactory(/* args */);
    Shape *createShape(int type, const std::string &s);
    std::list<Shape *> readShapesFromFile(const std::string &filename);
    void saveShapesToFile(const std::string &filename, const std::list<Shape *> &shapes);
    ~ShapeFactory();
};
#endif // __SHAPEFACTORY_H__