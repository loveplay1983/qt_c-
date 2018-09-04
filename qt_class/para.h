#ifndef PARA
#define PARA
#include "rectangle.h"
#include <iostream>

using namespace std;
/*************************************************************************/
// Parallelepiped class

class Para
{
public:

    Para(int w, int l, int h):r(w,l),height(h)
    {
        cout << "Para constructor called." << endl;
    }

    int getVol()
    {
        return r.getArea() * height;
    }



private:
    Rectangle r;
    int height;

};

#endif // PARA

