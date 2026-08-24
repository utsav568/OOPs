#include <iostream>
using namespace std;

class Swap {
private:
    int a;
    int b;

public:
    void setValue(int x, int y) {
        a = x;
        b = y;
    }

    void swapValue() {
        int temp = a;
        a = b;
        b = temp;
    }

    void display() {
        cout << a << " " << b << endl;
    }
};

int main() {
    Swap s;

    s.setValue(10, 20);
    s.display();
    s.swapValue();
   s.display();

  
}