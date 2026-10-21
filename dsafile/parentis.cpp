Name:Utsav Singh
Roll:2503201001269

#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<char> st;
    string exp;
   cout << "Enter expression: ";
    cin >> exp;
     for (int i = 0; i < exp.length(); i++) {
        if (exp[i] == '(')
            st.push(exp[i]);
               else if (exp[i] == ')') {
            if (st.empty()) {
                cout << "Invalid Expression";
                return 0;
            }
            st.pop();
        }
    }
   if (st.empty())
        cout << "Valid Expression";
    else
        cout << "Invalid Expression";

    return 0;
}
**********OUTPUT***********
Enter expression: (a+b)*(c-d)
Valid Expression