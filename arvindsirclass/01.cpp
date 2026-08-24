#include <iostream>
using namespace std;
class Example{
    private:
    int a ,b;
    int add();
    public:
    void getdata(int ,int);

    
};
void Example::getdata(int a ,int b){
    this->a = a;
        this->b =b;
        int res = add();
        cout<<"The summ is: "<<res;
}
int Example::add(){
    int r = a+b;
    return (r);
}
int main(){
   Example s;
   s.getdata(2,3);
   
}