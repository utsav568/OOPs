#include <iostream>
using namespace std;

class S;

class A {
    int a;

public:
    void geta(int);
    friend class S;
};

class B {
    int a;

public:
    void getb(int);
    friend class S;
};

void A::geta(int a) {
    this->a = a;
}

void B::getb(int b) {
    a = b;
}

class S {
public:
    int sum(A a1, B b1) {
        return a1.a + b1.a;
    }
};

int main() {
    A a1;
    B b1;

    a1.geta(10);
    b1.getb(20);

    S s1;

    int x = s1.sum(a1, b1);

    cout << x;

    return 0;
}