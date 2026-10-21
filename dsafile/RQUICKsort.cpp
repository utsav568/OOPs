Name:Utsav Singh
Roll:2503201001269

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int RandomizedPartition(int arr[], int low, int high)
{
    int r = low + rand() % (high - low + 1);

    swap(arr[r], arr[high]);

    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return i + 1;
}

void RandomizedQuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int p = RandomizedPartition(arr, low, high);

        RandomizedQuickSort(arr, low, p - 1);
        RandomizedQuickSort(arr, p + 1, high);
    }
}

int main()
{
    srand(time(0));

    int n;

    cout << "Enter n: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    RandomizedQuickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
**************Output**************
Enter n: 5
Enter array elements: 40 10 50 20 30
Sorted array: 10 20 30 40 50