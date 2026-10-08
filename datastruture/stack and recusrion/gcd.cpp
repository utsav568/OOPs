#include <iostream>
using namespace std;
int gcd(int a ,int b){
    if(a>b) return gcd(a-b,b);
    else if(b>a) return gcd(a,b-a);
    else return a;
}
int main(){
    cout<<gcd(27,33);
}