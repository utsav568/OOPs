Name:Utsav Singh
Roll:2503201001269

#include <iostream>
#include <vector>
using namespace std;

vector<int> DAT(101, 0);

int Fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1 || n == 2)
    {
        return 1;
    }

    if (DAT[n] == 0)
    {
        DAT[n] = Fibonacci(n - 1) + Fibonacci(n - 2);
    }

    return DAT[n];
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci = " << Fibonacci(n);

    return 0;
}

**************OUTPUT*************
Enter n: 7
Fibonacci = 13