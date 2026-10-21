Name:Utsav Singh
Roll:2503201001269

#include <iostream>
#include <string>
#include <stack>
using namespace std;
int solve(int val1 ,int val2, char ch){
    if(ch=='+')return val1+val2;
    else if(ch=='-')return val1-val2;
    else if(ch=='*')return val1*val2;
    else return val1/val2;
}
int main(){
   string s ="+-*+7839+26";
   stack<int>value;
   for(int i=s.length()-1;i>=0;i--){
     if(s[i]>=48 and s[i]<=57){
        value.push(s[i]-48);
    }
    else{
     int val1 = value.top();
     value.pop();
     int val2 = value.top();
     value.pop();
     int ans = solve(val1,val2,s[i]);
     value.push(ans);
    }
   }
cout<<"Prefix : "<<value.top();
}
************OUTPUT*************
Prefix : 44