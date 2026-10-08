#include <iostream>
using namespace std;
class Example{
    int r;
    public:
    void setdata(int);
     
    void display();
};
void Example::setdata(int a){
    r =a;
}
void Example::display(){
  int area = 3.14*r*r;
  cout<<area;
  cout<<endl;
}
int main(){
    Example E1 ;
    E1.setdata(10);
    E1.display();

   
}