#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks, totalMarks, percentage;

public:
    void input();
    void display();
};


void Student::input()
{
    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Obtained Marks: ";
    cin >> marks;

    cout << "Enter Total Marks: ";
    cin >> totalMarks;

    percentage = (marks / totalMarks) * 100;
}


void Student::display()
{
  
    cout << "Roll Number : " << rollNo << endl;
    cout << "Name        : " << name << endl;
    cout << "Marks       : " << marks << "/" << totalMarks << endl;
    cout << "Percentage  : " << percentage << "%" << endl;
}

int main()
{
    cout << "Student 1" << endl;
    Student s1;
    s1.input();

   

   

    cout << "Student Details" << endl;

    s1.display();
   
   

    return 0;
}