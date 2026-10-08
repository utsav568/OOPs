#include <iostream>
using namespace std;

class Test;   

class Example
{
    int a;

public:
    void setdata(int);
    void Adisplay();

    friend int sum(Example, Test);
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
    int b;

public:
    void setb(int);
    void Bdisplay();

    friend int sum(Example, Test);
};

void Test::setb(int x)
{
    b = x;
}

void Test::Bdisplay()
{
    cout << "The value of b : " << b << endl;
}



int sum(Example E, Test T)
{
    int s = E.a + T.b;
    return s;
}


int main()
{
    Example E1;

    E1.setdata(10);
    E1.Adisplay();

    Test T1;

    T1.setb(20);
    T1.Bdisplay();

    int res = sum(E1, T1);

    cout << "The result is : " << res << endl;

   
}