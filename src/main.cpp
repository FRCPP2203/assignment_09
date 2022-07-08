#include <iostream>
#include <string>
#include "Geometry/ShapeFactory/ShapeFactory.h"
int main()
{
    ShapeFactory *shapeFactory;
    std::string filename = "res/data.txt";
    shapeFactory->saveShapesToFile("res/output.txt", shapeFactory->readShapesFromFile(filename));
    return 0;
}