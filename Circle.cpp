#include <string>
#include "Point.cpp"
using namespace std;

// Circle class declaration
class Circle {
private:
    double radius;
    Point center;
    string color;

public:
    Circle(Point center, double radius, string color);
    Point getCenter();
    void print();
};

Circle::Circle(Point center, double radius, string color) {
    this->center = center;
	this->radius = radius;
	this->color = color;
}


Point Circle::getCenter() {
	return center;
}

void Circle::print()  {
	cout << "Center: (" << center.getX() << "," << center.getY() << ") Radius: " << radius << " Color: " << color << endl;
}


