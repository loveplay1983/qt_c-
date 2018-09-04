#ifndef SQUARE
#define SQUARE
#include "rectangle.h"

/*************************************************************************/
// inheritance
// Square class which inherited from Rectangle
class Square : public Rectangle
{
public:
    Square(int side):Rectangle(side, side)
    {
//        setWidth(side);
//        setLength(side);
    }
};
#endif // SQUARE

