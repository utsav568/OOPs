#include <iostream>
using namespace std;

class Test;

class Example
{
    private:
    int a;

public:
    void setdata(int);
    void Adisplay();

  
    friend void swap(Example&, Test&);
};

void Example::setdata(int x)
{
    a = x;
}

void Example::Adisplay()
{
    cout << "The value of a : " << a << endl;
}


class Test
{
    private:
    int b;

public:
    void setb(int);
    void Bdisplay();

    
    friend void swap(Example&, Test&);
};

void Test::setb(int x)
{
    b = x;
}

void Test::Bdisplay()
{
    cout << "The value of b : " << b << endl;
}

void swap(Example &E, Test &T)
{
    int temp = E.a;
    E.a = T.b;
    T.b = temp;
}


int main()
{
    Example E1;
    Test T1;

    E1.setdata(10);
    T1.setb(20);

   
    E1.Adisplay();
    T1.Bdisplay();

    swap(E1, T1);

    E1.Adisplay();
    T1.Bdisplay();

    

  
}