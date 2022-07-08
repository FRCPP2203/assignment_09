#include "ShapeFactory.h"

ShapeFactory::ShapeFactory()
{
}
Shape *ShapeFactory::createShape(int type, const std::string &s)
{
    Shape *shapeObj = nullptr;
    switch (type)
    {
    case 0:
        shapeObj = new Triangle();
        shapeObj->fromString(s);
        break;
    case 1:
        shapeObj = new Rectangle();
        shapeObj->fromString(s);
        break;
    case 2:
        shapeObj = new Circle();
        shapeObj->fromString(s);
        break;
    case 3:
        shapeObj = new Ellipse();
        shapeObj->fromString(s);
        break;

    default:
        break;
    }
    return shapeObj;
}

std::list<Shape *> ShapeFactory::readShapesFromFile(const std::string &filename)
{
    std::string line;
    std::ifstream data(filename);
    std::list<Shape *> shapes;
    if (data.is_open())
    {
        while (getline(data, line))
        {
            std::string type = line.substr(0, 1);
            std::string s = line.substr(2, line.length() - 2);
            shapes.push_back(createShape(Utils::strToNum<int>(type), s));
        }
        data.close();
    }

    else
        std::cout << "Unable to open file";

    return shapes;
}

void ShapeFactory::saveShapesToFile(const std::string &filename, const std::list<Shape *> &shapes)
{
    std::ofstream record(filename);

    for (Shape *shape : shapes)
    {
        std::cout << shape->toString() << "\n";
        record << shape->toString() << "\n";
    }
    record.close();
}