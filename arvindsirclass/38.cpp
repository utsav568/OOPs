#include <iostream>
using namespace std;

class B;

class A {
    int a;

public:
    void geta(int);
    void showa();
    friend class B;
    void displayb(B);
};

class B {
    int b;

public:
    void getb(int);
    void showb();
    void displayA(A);
    friend class A;
};

void A::geta(int a) {
    this->a = a;
}

void B::getb(int b) {
    this->b = b;
}

void A::showa() {
    cout << a << endl;
}

void B::showb() {
    cout << b << endl;
}

void A::displayb(B b1) {
    cout << b1.b << endl;
}

void B::displayA(A a1) {
    cout << a1.a << endl;
}

int main() {
    A X;
    X.geta(10);
    X.showa();

    B Y;
    Y.getb(20);
    Y.showb();

    X.displayb(Y);
   Y.displayA(X);


}