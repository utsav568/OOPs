Name:Utsav Singh
Roll:2503201001269

#include <iostream>
#include <string>
using namespace std;

bool Palindrome(string str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }

    if (str[start] != str[end])
    {
        return false;
    }

    return Palindrome(str, start + 1, end - 1);
}

int main()
{
    string str;

    cout << "Enter string: ";
    cin >> str;

    if (Palindrome(str, 0, str.length() - 1))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}
************Output***************
Enter string: madam
Palindrome