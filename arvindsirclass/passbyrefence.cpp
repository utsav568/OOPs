#include <iostream>
using namespace std;

class Swap {
private:
    int a;
    int b;

public:
    Swap(int x, int y) {
        a = x;
        b = y;
    }

    void swapReference() {
        int temp = a;
        a = b;
        b = temp;
    }

    void display() {
        cout  << a << " " << b << endl;
    }
};

int main() {
    Swap s(10, 20);

    s.swapReference();
    s.display();

    
}