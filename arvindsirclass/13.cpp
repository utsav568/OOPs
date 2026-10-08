#include <iostream>
using namespace std;

class Box{
    private:
    int a;
    int b;

    public:
    void setdata(int, int);
    int sum(Box, Box);
};

void Box::setdata(int a1, int b1){
    a = a1;
    b = b1;
}

int Box::sum(Box A, Box B){
    int s = A.a + B.a;
    int p = A.b + B.b;
    int r = s + p;
    return r;
}

int main(){
    Box E1, E2, E3;

    E1.setdata(10, 20);
    E2.setdata(20, 40);

    int r = E3.sum(E1, E2);

    cout << r;
}