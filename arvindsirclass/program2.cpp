#include <iostream>
using namespace std;
class Example{
    private:
    int a ,b;
  public:
  void getdata();
  void print();
};
void Example::getdata(){
    cout<<"\n enter the number:";
    cin>>a>>b;
}
void Example::print(){
    cout<<"the number are: "<<a<<" "<<b;
}
int main(){
Example c;
c.getdata();
c.print();

}