Name:Utsav Singh
Roll:2503201001269

#include <iostream>
using namespace std;

int SumOfDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return (n % 10) + SumOfDigits(n / 10);
}

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << "Sum of Digits = " << SumOfDigits(n);

    return 0;
}
*************Output***************
Enter n: 1234
Sum of Digits = 10