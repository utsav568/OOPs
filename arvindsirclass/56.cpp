
#include <iostream>
using namespace std;

class Example{
    string name;
    int salary;
    int id;

    public:
    void setName(string);
    void setsalary(int);
    void setid(int);
    void display();
};

void Example::setName(string str){
    name = str;
}

void Example::setsalary(int salary){
    this->salary = salary;
}

void Example::setid(int id){
    this->id = id;
}

void Example::display(){
    if(salary > 50000){
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "ID: " << id << endl;
    }
}

int main(){
    Example E1;

    E1.setName("Utsav");
    E1.setsalary(60000);
    E1.setid(101);

    E1.display();

    return 0;
}

