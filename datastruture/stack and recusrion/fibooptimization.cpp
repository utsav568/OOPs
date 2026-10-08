#include <iostream>
#include <vector>

using namespace std;
vector<int>dat(101,0);
int fib(int n){
    if(n==1)return 0;
    if(n==2)return 1;
    if(dat[n]==0)
    dat[n]=fib(n-1)+fib(n-2);
return dat[n];
}
int main(){
    for(int i=0;i<=100;i++){
        cout<<i<<" "<<fib(i)<<endl;
    }
}