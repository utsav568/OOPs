#include <iostream>
using namespace std;
namespace first{
    int a =10;
}
namespace second{
    double a=20.4;
}

int main(){
string a ="c++";
cout<<a<<endl;
cout<<second::a<<endl;
cout<<first::a;
}