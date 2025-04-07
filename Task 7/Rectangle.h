#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
  private:
    double length;
    double width;

    public:
    Rectangle();
    Rectangle(double valueA, double valueB);
    ~Rectangle();
    double getLength();
    double getWidth();
    void setLength(float length);
    void setWidth(float width);
    double area();
};

#endif