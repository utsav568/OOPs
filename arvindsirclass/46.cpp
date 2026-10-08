#include <iostream>
using namespace std;

class Example {
    int a, b;

public:
    Example();
    void display();
    void swap();
};

Example::Example() {
    cin >> a >> b;
}

void Example::display() {
    cout << a << " " << b;
}

void Example::swap() {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    Example E1;

    E1.swap();

    E1.display();
}