#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w);

    // Member function to calculate area
    double calculateArea();
};

#endif // RECTANGLE_H