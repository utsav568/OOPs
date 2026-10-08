#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    void getdata(int, string);
    void display();
};

void Student::getdata(int roll, string name) {
    this->roll = roll;
    this->name = name;
}

void Student::display() {
    cout << roll << " " << name;
}

int main() {
    Student s;

    s.getdata(101, "Utsav");
    s.display();

    return 0;
}