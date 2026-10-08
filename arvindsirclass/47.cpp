#include <iostream>
using namespace std;
class Example{
    int a ,b;
    public:
    Example(int ,int);

    void display();
};
Example::Example(int x ,int y){
    a=x;
    b=y;
}
void Example::display(){
    cout<<a<<" "<<b;
    cout<<endl;
}
int main(){
    Example E1 = Example(10,20);
    E1.display();
     Example E2(10,20);
    E1.display();
}