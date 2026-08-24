#include <iostream>
using namespace std;
class Digit{
    private:
    int n;
    public:
    void getdata(int);
    int print ();
};
void Digit::getdata(int n){
   int sum =0;
   int ld = n%10;
   sum+=ld;
   this->n = sum;

}
int print(){
    int p = sum;
}
int main(){
    
}