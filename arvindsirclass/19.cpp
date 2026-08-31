#include <iostream>
using namespace std;
// # define n 10
// int main(){

//     for(int i=0;i<n;i++){
//         cout<<i<<" ";
//     }
// }

//---------macro function----------
#define square(n) n*n
int main(){
    int r = 125/square(5);
    cout<<r;
}