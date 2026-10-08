#include <iostream>
using namespace std;
class Example{
    private:
    int a;
    static int count;
    public:
    void display();
     void getdata(int);
     static void show();
};
void Example::show(){
    cout<<count<<endl;
}
void Example::getdata(int n){
    a =n;
    count++;
}
int Example:: count;
void Example :: display(){
    cout<<a<<endl;
    cout<<"The count is : "<<count<<endl;
}
int main(){
    Example E1 ,E2 ,E3;
    E1.getdata(11);
    E1.display();
    E2.getdata(20);
    E2.display();
    E3.getdata(30);
    E3.display();
    Example::show();


}