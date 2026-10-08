#include <iostream>
using namespace std;
int sumarray(int arr[],int n){
    if(n==-1) return -1;
    else return arr[n] + sumarray[arr,n-1];
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sumarray(arr,3);
}