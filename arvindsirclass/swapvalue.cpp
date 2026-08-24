#include <iostream>
using namespace std;
void swap(int a ,int b){
    int temp =a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
    cout<<endl;
}
int main(){
    int a= 10;
    int b = 20;
   
    cout<<a<<" "<<b<<endl;
     swap(a,b);
}