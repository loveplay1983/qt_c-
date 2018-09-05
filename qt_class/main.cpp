/*

main take away from this demo

https://www.geeksforgeeks.org/access-modifiers-in-c/
https://www.learncpp.com/cpp-tutorial/115-inheritance-and-access-specifiers/


*/

#include <iostream>
#include "rectangle.h"
#include "para.h"
#include "square.h"

using namespace std;

/*******************************************************************************************/
// main function

int main()
{
   /* Rectangle r;
    r.setWidth(10);
    r.setLength(20);
    cout << "The area of this rectangle is: " << r.getArea() << endl*/;

//    Rectangle *r = new Rectangle(10,100); // unrecommended with dynamic allocation
//    cout << "The area of this new rectangle is: " << r->getArea() <<endl;
    Rectangle r(10, 100);
    cout << "the area of this new rectangle is: " << r.getArea() << endl;

    Para p(10, 10, 10);
    cout << "the volumn of this parallelepiped " << p.getVol() << endl;

    Square s(40);
    cout << "the area of the square is: " << s.getArea() << endl;
    return 0;
}











