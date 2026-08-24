//scope resolution method
#include <iostream>
using namespace std;
int n = 10;
int main(){
    int n=9;
    cout<<n<<endl;
    cout<<::n;
}