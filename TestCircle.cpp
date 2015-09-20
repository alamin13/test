#include <iostream>
#include "Circle.cpp"   // using Circle class
using namespace std;

int main() {
    Point p1(3, 4);
    p1.print();

    Point p2;
    cout << "x = " << p2.getX() << endl;
    cout << "y = " << p2.getY() << endl;
    p2.setX(6);
    p2.setY(8);
    p2.print();

    Circle c1(p1, 4, "red");
    c1.print();

    return 0;
}
