#include <iostream>
using namespace std;
int pow(int a ,int n){
    if(n==0)return 1;
    else{
        int x = pow(a,n/2);
        if(n%2==0)return x*x;
        else return a*x*x;
    }
}
int main(){
   cout<< pow(2,4);
}