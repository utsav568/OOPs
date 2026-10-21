Name:Utsav Singh
Roll:2503201001269

#include <iostream>
using namespace std;

int Reverse(int n, int rev)
{
    if (n == 0)
    {
        return rev;
    }

    rev = rev * 10 + (n % 10);

    return Reverse(n / 10, rev);
}

int main()
{
    int n, rev = 0;

    cout << "Enter n: ";
    cin >> n;

    cout << "Reverse = " << Reverse(n, rev);

    return 0;
}
********Output************
Enter n: 1234
Reverse = 4321