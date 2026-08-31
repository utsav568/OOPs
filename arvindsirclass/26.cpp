```cpp
#include <iostream>
using namespace std;

class Student{
    private:
    int n;
    int *mark;

    public:
    void setdata(int);
    void display();
};

void Student::setdata(int n){

    this->n = n;

    mark = new int[n];

    for(int i=0; i<n; i++){
        cout<<"Enter the value: ";
        cin>>mark[i];
    }
}

void Student::display(){

    int sum = 0;

    for(int i=0; i<n; i++){

        sum += mark[i];

        if(mark[i] > 90){
            cout<<"A+"<<endl;
        }
        else if(mark[i] >= 70 and mark[i] <= 90){
            cout<<"B+"<<endl;
        }
        else{
            cout<<"Fail"<<endl;
        }
    }

    cout<<"The sum of marks is: "<<sum<<endl;

  
}

int main(){

    Student s;

    int n;

    cout<<"Enter number of subjects: ";
    cin>>n;

    s.setdata(n);

    s.display();

    return 0;
}
```
