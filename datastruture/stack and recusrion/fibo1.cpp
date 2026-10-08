#include <iostream>
#include <vector>

using namespace std;

int fib(int n ,vector<int>&dat){
    if(n==1)return 0;
    if(n==2)return 1;
    if(dat[n]==0)
    dat[n]=fib(n-1 ,dat)+fib(n-2 ,dat);
return dat[n];
}
int main(){
       vector<int>dat(101,0);
    for(int i=0;i<=100;i++){
        cout<<i<<" "<<fib(i ,dat)<<endl;
    }
}