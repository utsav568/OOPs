#include <iostream>
#include <string>
using namespace std;

template <class t1 ,class t2>
void display(t1 a , t2 b) {
  cout<<a<<" "<<b;
  cout<<endl;
}

int main() {
    display(10, 40.5);
    display(4.5, 4);
    display(4 ,"f");

}