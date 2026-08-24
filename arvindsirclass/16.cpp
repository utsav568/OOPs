#include <iostream>
using namespace std;

class Test; // forward declaration

class Example {
    int a;

public:
    void geta(int);
    int Sum(Example, Test);
};

class Test {
private:
    int b;

public:
    int getvalue();
    void getb(int);

   // int Sum(Example, Test);
};

void Example::geta(int x) {
    a = x;
}

void Test::getb(int y) {
    b = y;
}

int Test::getvalue() {
    return b;
}

int Example::Sum(Example E1, Test T1) {
    int res = E1.a + T1.getvalue();
    return res;
}

int main() {
    Example E, E1;
    E.geta(10);

    Test T;
    T.getb(20);

    int r = E1.Sum(E, T);
    cout << r;

  
}