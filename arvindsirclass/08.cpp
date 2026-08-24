#include <iostream>
using namespace std;
void display();
namespace First {
    int a = 9;
    void display() {
        cout << "hello world";
    }
}

namespace Second {
    int a = 44;
    void display() {
        cout << "i am utsav";
    }
}
void display(){
    cout<<"hello";
}

int main() {
    int a = 34;
    display();
    cout<<endl;
    cout << a << endl;
    
    cout << First::a << " ";
    First::display(); 
    cout << endl;
    
    cout << Second::a << " ";
    Second::display(); 
    cout << endl; 
}