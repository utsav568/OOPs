#include <iostream>
#include <string>
using namespace std;

template <class t>
void display(t value, t name) {
    cout << value + name;
    cout << endl;
}

int main() {
    display(10, 40);
    display(4.5, 4.5);
    display(string("utsav"), string("singh"));
}