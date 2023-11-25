#include "rectangle.h"

int main() 
{
    Rectangle myRectangle(0, 0, 8, 5);

    myRectangle.print();

    myRectangle.move(2, 3);
    myRectangle.print();

    myRectangle.resize(8, 6);
    myRectangle.print();

    return 0;
}
