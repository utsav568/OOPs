Name:Utsav Singh
Roll:2503201001269

#include <iostream>
using namespace std;
int GCD(int a, int b){
    if (a == 0) {
        return b;
    }
  if (b == 0){
        return a;
    }
   if (a == b){
        return a;
    }
   if (a > b){
        return GCD(a % b, b);
    }
    else{
        return GCD(a, b % a);
    }
}
int main(){
    int a, b;

    cout << "Enter a and b: ";
    cin >> a >> b;

    cout << "GCD = " << GCD(a, b);

    return 0;
}
****************OUTPUT***************
Enter a and b: 12 18
GCD = 6