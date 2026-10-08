#include <iostream>
using namespace std;

class Example{
    int a;
    int b;

public:
    void setdata(int,int);
    Example sum(Example &);
    void display();
};

void Example::setdata(int x,int y){
    a=x;
    b=y;
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
    Example A,B,S;

    A.setdata(10,20);
    B.setdata(100,200);

    S = A.sum(B);

   

   
    cout << "S:" << endl;
    S.display();

}