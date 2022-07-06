#include <iostream>
#include <string>
#include <fstream>
#include "Point/Point.h"
#include "geometry/Shape/Shape.h"

int main()
{

    std::string line;
    std::ifstream data("../res/data.txt");

    if (data.is_open())
    {
        while (getline(data, line))
        {
            std::cout << line << '\n';
        }
        data.close();
    }

    else
        std::cout << "Unable to open file";

    return 0;
}