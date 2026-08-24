//Array of Object
#include <iostream>
using namespace std;
class Student{
    private:
    int roll;
    string name;
    public:
    void getdata(int ,string);
    void display();
};
void Student::getdata(int roll ,string name){
    this->roll =roll;
    this->name =name;
}
void Student::display(){
    cout<<roll<<" "<<name;
    cout<<endl;
}
int main() {
    int r1;
    string n;
    Student s[2];
    
  
    for(int i = 0; i < 2; i++) {
        cin >> r1 >> n; 
        s[i].getdata(r1, n); 
    }
    
  
    for(int i = 0; i < 2; i++) {
        s[i].display();
    }
    
    return 0;
}