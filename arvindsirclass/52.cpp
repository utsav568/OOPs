#include <iostream>
using namespace std;

class Example{
    int a;
    int b;

public:
     Example();
    Example sum(Example &);
    void display();
    Example(int, int);
};

Example::Example(int x, int y){
    a = x;
    b = y;
}
Example::Example(){
    a=0;
    b=0;
}

Example Example::sum(Example &x){
    Example S;

    S.a = a + x.a;
    S.b = b + x.b;

    return S;
}

void Example::display(){
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main(){
    Example A(10,20);
    Example B(100,120);
    Example S;

    S = A.sum(B);

    cout << "S:" << endl;
    S.display();
}