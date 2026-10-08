
#include <iostream>
using namespace std;

class Example {
    int a, b;

public:
    Example();

    void sum();
};

Example::Example() {
    cin >> a >> b;
}

void Example::sum() {
    cout << a + b;
}

int main() {
    Example E1;
    E1.sum();


}

