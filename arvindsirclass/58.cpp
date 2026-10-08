#include <iostream>
using namespace std;

class Circle;

class Rectangle {
    int l, b;

public:
    void getdata(int, int);
    friend class Circle;
    void display(Circle, Rectangle);
};

class Circle {
    int r;

public:
    void getdata(int);
    friend class Rectangle;
};

void Rectangle::getdata(int a, int c) {
    l = a;
    b = c;
}

void Circle::getdata(int a) {
    r = a;
}

void Rectangle::display(Circle C, Rectangle R) {
    float area = 3.14 * C.r * C.r;
    int areaR = R.l * R.b;

    if (area > areaR) {
        cout << "Circle";
    }
    else {
        cout << "Rectangle";
    }
}

int main() {
    Rectangle X;
    Circle C;

    C.getdata(10);
    X.getdata(10, 20);

    X.display(C, X);


}