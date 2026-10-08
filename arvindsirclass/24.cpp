#include <iostream>
#include <string>
using namespace std;

template <class t1, class t2>
void display(t1 a, t2 b) {
    cout << "\t" << a << endl;
    cout << "\t" << b << endl;
}

int main() {
    display(10, 20);
    display(2.4, 5.5);

    return 0;
}