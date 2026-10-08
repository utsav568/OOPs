#include <iostream>
using namespace std;
class A{
    int a;
    public:
    void geta(int);
    friend A Sum(A ,A);
    void display(A);
};
void A ::geta(int x){
    a = x;
}
A Sum(A a1,A a2){
    A S;
    S.a = a1.a+a2.a;
    return S;
}
void A::display(A E){
    cout<<E.a;
}
int main(){
    A x,y,z;
    x.geta(10);
    y.geta(20);
    z = Sum(x,y);
    z.display(z);
}