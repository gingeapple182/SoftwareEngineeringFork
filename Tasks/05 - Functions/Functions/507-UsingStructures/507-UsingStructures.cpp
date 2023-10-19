#include <iostream>
using namespace std;

// Create a new data type Point, made up of existing data types (2 integers and a float)
struct Point {
    int x;
    int y;
    float egg;
};

//Function prototypes
void displayPoint(Point p);
float calculateLength(Point p);
Point flipPoint(Point p);
Point addPoint(Point p1, Point p2);

int main()
{
    //Create two variables of type Point
    Point p1 = { 3, 4, 5.0f };      //Initialised 
    Point p2;                       //Not initialised
    p2.x = 4;                       //Set x to 4
    p2.y = 6;                       //Set y to 6
    p2.egg = calculateLength(p2);    //Calculate the length of p2, and set the member egg to this value

    //Display both points
    displayPoint(p1);
    cout << endl;
    displayPoint(p2);
    cout << endl;

    //Copy and display
    Point p3 = p1;                  //member-by-member copy
    p1 = { 0 };                     //Set all members of p1 to zero (they are all numerical, so this works)
    displayPoint(p1);               //Confirm p1 is zero set to all zeros
    displayPoint(p3);               //Showing that p3 is indepdnent of p1
    cout << endl;

    //Fix display precision to 2 decimal places
    cout.precision(3);
    cout.setf(cout.fixed);
    
    //Output the length
    cout << "The length = " << p3.egg << endl;

    //Now demonstrate returning a structure
    displayPoint(p3);               //Show p3
    Point p4 = flipPoint(p3);
    displayPoint(p4);               //Show p4
}


// Displays a point as an x,y coordinate
void displayPoint(Point p)
{
    int xPos = p.x;
    int yPos = p.y;

    cout << "(" << xPos << "," << yPos << ")";
}

// Calculate and return the distance of p from the origin (0,0)
float calculateLength(Point p)
{
    float h = sqrt(p.x * p.x + p.y * p.y);
    return h;
}

// Flip x and y
Point flipPoint(Point p)
{
    Point biscuit;
    biscuit.x = p.y;
    biscuit.y = p.x;
    biscuit.egg = p.egg;
    return biscuit;
}

Point addPoint(Point p1, Point p2)
{
    Point frog = p1;
    frog.x += p2.x;
    frog.y += p2.y;
    frog.egg += calculateLength(frog);

    return frog;
}