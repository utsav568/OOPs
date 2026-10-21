Name:Utsav Singh
Roll:2503201001269

#include <iostream>
using namespace std;

int SumArray(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    return arr[n - 1] + SumArray(arr, n - 1);
}

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Sum = " << SumArray(arr, n);

    return 0;
}

**********Output*********
Enter n: 5
Enter array elements: 1 2 3 4 5
Sum = 15