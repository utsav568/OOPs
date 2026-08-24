#include <iostream>
using namespace std;
Class Swap{
    public:
    int a;
    
    public:
    void seta(int);
 
};
void Swap::getdata(int a ,int b){
    this->a =a;
   
}



void swapdata(Swap n ,Swap p){
    n.a = p.a;
    p.a =n.a;
}

int main(){//wrong
    Swap E1,E2;
    E1.seta(10);
    E2.seta(20);
    swapdata(E1 ,E2);
    cout
}