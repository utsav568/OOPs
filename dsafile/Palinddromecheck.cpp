Name:Utsav Singh
Roll:2503201001269

#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n = 121;
    int temp = n, digit, rev = 0;
    stack<int> s;
    while (temp > 0){
        digit = temp % 10;
        s.push(digit);
        temp = temp / 10;
    }
    while (!s.empty()){
        digit = s.top();
        s.pop();
        rev = rev * 10 + digit;
    }

    if (n == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}

*********OUTPUT*********
Palindrome