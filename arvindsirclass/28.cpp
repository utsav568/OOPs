#include <iostream>

using namespace std;

template <class T1 ,class T2>
T2 display(T1 a , T2 b) {
  T2 s = a+b;
  return s;
  
}

int main() {
    
    cout<<display(20,20.5);

}