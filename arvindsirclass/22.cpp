#include <iostream>
#include <string>
using namespace std;

template <class t>
void display(t value, t name) {
    cout << value + name << endl;
}

int main() {
    display(10, 40);
    display(4.5, 4.5);

    string first = "utsav";
    string last = "singh";
    display(first, last);
}