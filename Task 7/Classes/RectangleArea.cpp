#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){

    Rectangle rectangle;
   
    double length;
    double width;

    cout << "Enter Length: ";
    cin >> length;
    rectangle.setLength(length);

    cout << "Enter Width: ";
    cin >> width;
    rectangle.setWidth(width);

    cout << endl << "The area of a Rectangle is: " << rectangle.area()<< endl << endl;


    double length2;
    double width2;

    cout << "Enter Length: ";
    cin >> length2;
    rectangle.setLength(length);

    cout << "Enter Width: ";
    cin >> width2;

    Rectangle rectangle2(length2,width2);

    cout << endl << "The area of a Rectangle2 is: " << rectangle2.area() << endl;
    

    return 0;

}