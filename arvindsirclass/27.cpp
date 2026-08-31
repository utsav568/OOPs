#include <iostream>
using namespace std;
int sum(int x,int y){
    int s = x+y;
    return s;
}
float sum(float x,float y){
    float s = x+y;
    return s;
}
int main(){
    cout<<sum(10,20)<<endl;
    cout<<sum(2.5f,3.5f)<<endl;
    return 0;
}
