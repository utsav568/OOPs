#include <iostream>
using namespace std;
class Sum{
    private:
    int a , b;
    public:
    void getsum(int ,int);
    int  print();
};
void Sum::getsum(int a ,int b){

this->a =b;
this->b =b;
}
int  Sum::print(){
    int r = a+b;
    return r;
}

int main(){
Sum S; 
S.getsum(2,5);
cout<<"The Sum is = "<<S.print();
}