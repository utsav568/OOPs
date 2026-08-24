#include <iostream>
using namespace std;
class Example{
    private:
    int a;
    int b;
    public:
    void setdata(){
        cin>>a>>b;
    }
    void print(){
        cout<<a<<b;
    }
};
int main(){
Example data;
data.setdata();
data.print();
}