#include <iostream>
using namespace std;

namespace verylongnamespace {
    int a = 10;
}

namespace vln = verylongnamespace;

int main() {
    cout << vln::a;
}