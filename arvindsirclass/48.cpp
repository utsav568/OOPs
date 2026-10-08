#include <iostream>
using namespace std;

class Example {
    int a, b;

public:
    Example(int, int);
    void swap();
    void display();
};

Example::Example(int x, int y) {
    a = x;
    b = y;
}

void Example::display() {
    cout << a << " " << b << endl;
}

void Example::swap() {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    Example E1(10, 20);

    E1.display();

    E1.swap();

    E1.display();

    Example E2(10, 20);
    E2.display();
    
}