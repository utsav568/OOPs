#include <iostream>
using namespace std;
class Example{
    int a,b;
    public:
    void getdata(int ,int);
    void add();
};
void Example::getdata(int x ,int y){
    a=x;
    b=y;
}
void Example::add(){
    cout<<"the addition of two number :"<<a+b;
}
int main(){
    Example E1;
    E1.getdata(10,20);
    E1.add();
}