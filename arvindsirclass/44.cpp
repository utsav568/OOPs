#include <iostream>
using namespace std;
class Example{
    int a ,b;
    public:
    Example();
    void display();
};
Example::Example(){
    cin>>a>>b;
}
void Example::display(){
    cout<<a<<" "<<b;
}
int main(){
    Example E1;
    E1.display();
}