#include <iostream>
#include <cstdarg>
using namespace std;

void display(int size, ...) {
    int n;
    int sum = 0;

    va_list args;
    va_start(args, size);

    for (int i = 0; i < size; i++) {
        n = va_arg(args, int);
        cout<<n<<" ";
       
        sum = sum + n;
    }

   va_end(args);


    cout << endl<<"Sum = " << sum << endl;
}

int main() {
    display(4, 10, 20, 30, 40);
}//important