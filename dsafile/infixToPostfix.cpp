Name:Utsav Singh
Roll:2503201001269

#include <iostream>
#include <string>
#include <stack>
using namespace std;
int prio(char ch){
    if(ch=='+' || ch=='-')return 1;
    else return 2;
}
string solve(string val1 ,string val2 ,char op){
  string s ="";
  s += val1;
  s += val2;
  s.push_back(op);
  return s;
}
int main(){
   string s ="(7+9)*4/8-3";
   stack<string>value;
   stack<char>op;
   for(int i=0;i<s.length();i++){
    
    if(s[i]>=48 and s[i]<=57){
        value.push(to_string(s[i]-48));

    }
    else{
        if(op.size()==0 ) op.push(s[i]);
      else  if(s[i]=='(')op.push(s[i]);
       else if(op.top()=='(')op.push(s[i]);
       else if(s[i]==')'){
                while(op.top()!='('){
                     char ch = op.top();
                op.pop();
                string val2= value.top();
                value.pop();
                string  val1 = value.top();
                value.pop();
                string ans = solve(val1,val2,ch);
                value.push(ans);
                }
                op.pop();
            }
        else if(prio(s[i])>prio(op.top()))op.push(s[i]);
            
        else {
            while(op.size()>0 and prio(s[i])<=prio(op.top())){
                char ch = op.top();
                op.pop();
                string val2= value.top();
                value.pop();
                string val1 = value.top();
                value.pop();
                string ans = solve(val1,val2,ch);
                value.push(ans);
            }
                  op.push(s[i]);
        }
    }
   }
   while(op.size()>0){
     char ch = op.top();
                op.pop();
                string val2= value.top();
                value.pop();
                string val1 = value.top();
                value.pop();
                string ans = solve(val1,val2,ch);
                value.push(ans);
   }
   cout<<"Infix To Postfix : "<<value.top();
}
********OUTPUT*************
Infix To Postfix : 79+4*8/3-