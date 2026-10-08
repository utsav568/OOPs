#include <iostream>
using namespace std;
class Example{
    public:
    static int a;
};
int Example::a =10;
int main(){
    cout<<Example::a<<endl;
    Example E1;
    cout<<E1.a;
}