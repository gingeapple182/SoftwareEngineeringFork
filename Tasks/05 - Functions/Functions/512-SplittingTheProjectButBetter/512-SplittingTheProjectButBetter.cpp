#include "PointLib.h"


int main()
{
    Point p1 = { 3, 4, 5.0f };

    //Now demonstrate returning a structure
    displayPoint(p1);               //Showing p1
    flipPoint(p1);                  //Pass the address so p1 can be modified by the function
    displayPoint(p1);               //Showing p4

    //Break the length on purpose
    p1.egg = 0.0f;

    //Recalculate
    calculateLength(p1);            //Pass the address to the function can modify the structure in-place
    cout << endl << "Length of p1 = " << p1.egg << endl; //Simply write it out

}

