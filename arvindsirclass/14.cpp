#include <iostream>
using namespace std;

class Swap {
public:
    int a;

    void seta(int);
};

void Swap::seta(int a) {
    this->a = a;
}

void swapdata(Swap &n, Swap &p) {
    int temp = n.a;
    n.a = p.a;
    p.a = temp;
}

int main() {
    Swap E1, E2;

    E1.seta(10);
    E2.seta(20);

    swapdata(E1, E2);

    cout << E1.a << endl;
    cout << E2.a << endl;

    return 0;
}