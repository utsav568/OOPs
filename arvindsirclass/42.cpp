
#include <iostream>
using namespace std;

class Example {
    int a;

public:
    void geta(int);
    Example Sum(Example, Example);
    void display(Example);
};

void Example::geta(int x) {
    a = x;
}

Example Example::Sum(Example E1, Example E2) {
    Example S;
    S.a = E1.a + E2.a;
    return S;
}

void Example::display(Example E) {
    cout << E.a;
}

int main() {
    Example A, B, C, R;

    A.geta(10);
    B.geta(20);

    R = C.Sum(A, B);

    R.display(R);

    return 0;
}

