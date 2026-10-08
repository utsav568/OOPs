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
  int area = 3.14*a*b;
  cout<<area;
  cout<<endl;
}
int main(){
    Example E1 = Example(10,20);
    E1.display();
     Example E2(20,30);
    E1.display();
}