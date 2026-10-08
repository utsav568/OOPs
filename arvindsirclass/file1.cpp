
#include <iostream>
using namespace std;

class Demo
{
private:
    int a, b, c;

public:
    void setValues(int, int, int);

    void callByValue(int);
    void callByReference(int &);
    void callByAddress(int *);

    int& getB();
    int* getC();
};


void Demo::setValues(int x, int y, int z)
{
    a = x;
    b = y;
    c = z;
}


int& Demo::getB()
{
    return b;
}


int* Demo::getC()
{
    return &c;
}


void Demo::callByValue(int x)
{
    x = x + 10;

    cout << "Inside Call by Value: " << x << endl;
    cout << "Original value: " << a << endl;
}


void Demo::callByReference(int &x)
{
    x = x + 10;

    cout << "Inside Call by Reference: " << x << endl;
    cout << "Original value: " << b << endl;
}


void Demo::callByAddress(int *x)
{
    *x = *x + 10;

    cout << "Inside Call by Address: " << *x << endl;
    cout << "Original value: " << c << endl;
}

int main()
{
    Demo obj;

    obj.setValues(10, 10, 10);

    obj.callByValue(10);
    cout << endl;

    obj.callByReference(obj.getB());
    cout << endl;

    obj.callByAddress(obj.getC());

    return 0;
}

