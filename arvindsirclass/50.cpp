#include <iostream>
using namespace std;

class Example {
    static int count;

public:
    Example() {
        count++;
        cout << "The number of object: " << count << endl;
    }
};

int Example::count = 0;

int main() {
    Example E1;
    Example E2;
    Example E3;

    return 0;
}