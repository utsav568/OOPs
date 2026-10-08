#include <iostream>
using namespace std;
class Example{
    private:
   
    static int count;
    public:
   static void display();
    
};

int Example:: count = 10;
void Example :: display(){
  
    cout<<"The count is : "<<count<<endl;
}
int main(){
   Example E;
   Example::display();
   E.display();

}