#include "ShapeFactory.h"

Shape *ShapeFactory::createShape(int type, const std::string &s)
{
    Shape *shapeObj = nullptr;
    return shapeObj;
}

std::list<Shape *> ShapeFactory::readShapesFromFile(const std::string &filename)
{
    std::list<Shape *> shapes;
    std::string line;
    std::ifstream data("res/data.txt");
    if (data.is_open())
    {
        while (getline(data, line))
        {
            int type = strToInt(line.substr(0, 1));
            std::string s = line.substr(2, line.size());
        }
        data.close();
    }

    else
        std::cout << "Unable to open file";

    return shapes;
}

void ShapeFactory::saveShapesToFile(const std::string &filename, const std::list<Shape *> &shapes)
{
}