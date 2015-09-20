#include<iostream>
using namespace std;

// Point class declaration
class Point {
private:
    int x;
    int y;

public:
    Point();
    Point(int x, int y);
    int getX();
    void setX(int x);
    int getY();
    void setY(int y);
    void print();
};

Point::Point() {
	this->x=0;
	this->y=0;
}

Point::Point(int x, int y) {
	this->x=x;
	this->y=y;
}

int Point::getX()  {
    return this->x;
}

void Point::setX(int x) {
    this->x = x;
}

int Point::getY()  {
    return this->y;
}

void Point::setY(int y) {
    this->y = y;
}

void Point::print()  {
    cout << "(" << x << "," << y << ")" << endl;
}
