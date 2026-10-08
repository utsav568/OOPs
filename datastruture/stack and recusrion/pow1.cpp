#include <iostream>
using namespace std;
int pow(int a ,int n){
    if(n==0) return 1;
    else return a * pow(a ,n-1);
}
int main(){
    cout<<pow(2,4);
}