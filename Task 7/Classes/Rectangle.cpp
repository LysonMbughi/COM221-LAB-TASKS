#include "Rectangle.h"

Rectangle::Rectangle()
{
    length = 0;
    width = 0;
}

Rectangle::Rectangle(double valueA, double valueB)
{
    length = valueA;
    width = valueB;
}

Rectangle::~Rectangle(){

}

double Rectangle::getLength(){

    return length;
}

double Rectangle::getWidth(){

    return width ;
}


void Rectangle::setLength(float value){
    length = value;
}

void Rectangle::setWidth(float value){
    width = value;
}

double Rectangle::area(){
    return (width * length);
}