Name:Utsav Singh
Roll:2503201001269

#include <iostream>
#include <stack>
using namespace std;
int main(){
    string exp = "{(a+b)*[c-d]}";
    stack<char> s;
   for (int i = 0; i < exp.length(); i++){
        char ch = exp[i];
          if (ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']'){
            if (s.empty()) {
                cout << "Invalid Expression";
                return -1;
            }
           if ((ch == ')' && s.top() != '(') ||
                (ch == '}' && s.top() != '{') ||
                (ch == ']' && s.top() != '[')) {
                cout << "Invalid Expression";
                return -1;
            }
           s.pop();
        }
    }
    if (s.empty())
        cout << "Valid Expression";
    else
        cout << "Invalid Expression";
     return 0;
}

*****OUTPUT************
Valid Expression
 
