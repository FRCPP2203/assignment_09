#include <iostream>
#include <string>
#include <fstream>

int main()
{

    std::string line;
    std::ifstream data("res/data.txt");
    if (data.is_open())
    {
        while (getline(data, line))
        {
            switch (line[0])
            {
            case '0':
                // ptr_shape = new Triangle(Point(line[1], line[2]), Point(line[3], line[4]), Point(line[5], line[6]));
                std::cout << "Triangle" << std::endl;
                break;
            case '1':
                std::cout << "Rectangle" << std::endl;
                break;
            case '2':
                std::cout << "Circle" << std::endl;
                break;
            case '3':
                std::cout << "Ellipse" << std::endl;
                break;
            default:
                break;
            }
        }
        data.close();
    }

    else
        std::cout << "Unable to open file";

    return 0;
}