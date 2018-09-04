#ifndef RECTANGLE
#define RECTANGLE
class Rectangle
{

public:

    // default constructor
    Rectangle();

    // another constructor
    Rectangle(int width, int length);

    void setWidth(int width);
//    {
//        // this means the object target of Rectangle class after it is instantiated
//        this->width = width;
//    }

    void setLength(int length);
//    {
//        this->length = length;
//    }

    int getArea()
    {
        // here we use can directly use the private varible widthand length cuz they are in
        // the same scope of the class
        return width * length;
    }

private:
    int width;
    int length;
};



#endif // RECTANGLE

