
#include <iostream>
using namespace std;

class Example
{
private:
    int a, b;

public:
   
     int add(int, int);
    int subtract(int, int = 5);

  
    int multiply(int, int);
    float multiply(float, float);
};


 int Example::add(int x, int y)
{
    return x + y;
}


int Example::subtract(int x, int y)
{
    return x - y;
}


int Example::multiply(int x, int y)
{
    return x * y;
}


float Example::multiply(float x, float y)
{
    return x * y;
}

int main()
{
    Example obj;

    cout << "Addition: "
         << obj.add(10, 5) << endl;

    cout << "Subtraction: "
         << obj.subtract(10) << endl;

    cout << "Multiplication (int): "
         << obj.multiply(10, 5) << endl;

    cout << "Multiplication (float): "
         << obj.multiply(2.5f, 4.0f) << endl;

    return 0;
}

