#include <iostream>
using namespace std;

class Overload {
private:
    int a, b;

public:
    void sum();
    int sum(int, int);
};

void Overload::sum() {
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum = " << a + b << endl;
}
    
int Overload::sum(int x, int y) {
    a = x;
    b = y;
    return a + b;
}

int main() {
    int n1, n2;
    Overload l;

    l.sum();

    cout << "Enter two more numbers: ";
    cin >> n1 >> n2;

    int r = l.sum(n1, n2);
    cout << "Sum = " << r;

    return 0;
}