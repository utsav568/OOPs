Name:Utsav Singh
Roll:2503201001269

#include <iostream>
#include <stack>
using namespace std;
int main(){
    string str = "HELLO";
    string rev = "";
    stack<char> s;
   for (int i = 0; i < str.length(); i++){
        s.push(str[i]);
    }
   while (!s.empty()){
        rev = rev + s.top();
        s.pop();
    }
    cout << "Reversed String: " << rev;
   return 0;
}
**********OUTPUT************
Reversed String: OLLEH