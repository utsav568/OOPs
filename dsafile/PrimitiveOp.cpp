Name = Utsav
Roll :2503201001269

#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
   st.push(20);
   st.push(30);
   st.push(40);
   st.push(50);
   st.push(60);
   st.pop();
   cout<<"Size of Stack : "<<st.size()<<endl;
     cout<<"Empty stack : "<<st.empty()<<endl;
     cout<<"Top Element of Stack : "<<st.top()<<endl;
     cout<<"The Element of Stack are  : ";
   while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
   }
}
    ******OUTPUT******
Size of Stack : 5
Empty stack : 0
Top Element of Stack : 50
The Element of Stack are  : 50 40 30 20 10 