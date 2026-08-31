#include <iostream>
using namespace std;

void display() {
    cout<<"end";
   // return;
}

template <typename T, typename... Args>
void display(T first, Args... rest) {
    cout << first << endl;
    display(rest...);
}

int main() {
    display(10, 20.4, "hello", "A", true);
}