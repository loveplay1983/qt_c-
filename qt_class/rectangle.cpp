#include "rectangle.h"
#include <iostream>

using namespace std;

// constructor of Rectangle
Rectangle::Rectangle()
{
    clog << "default constructor gets called" << endl;
    this->length = 10;
    this->width = 10;
}

//Rectangle::Rectangle(int width, int length)
//{
//    clog << "Rectangle constructor with parameters" << endl;
//    this->width = width;
//    this->length = length;
//}

// another way to define the constructor initializer
Rectangle::Rectangle(int width, int length):width(width),length(length)
{
    clog << "Rectangle constructor with parameters in another way" << endl;
}


// create the method content outside of the class body by having className::methodName
void Rectangle::setWidth(int width)
{
    this->width = width;
}

void Rectangle::setLength(int length)
{
    this->length = length;
}

