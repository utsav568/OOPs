Name:Utsav Singh
Roll:2503201001269

#include <iostream>
using namespace std;

int Partition(int arr[], int low, int high){
    int mid = low + (high - low) / 2;

    if (arr[low] > arr[mid])
    {
        swap(arr[low], arr[mid]);
    }

    if (arr[low] > arr[high])
    {
        swap(arr[low], arr[high]);
    }

    if (arr[mid] > arr[high])
    {
        swap(arr[mid], arr[high]);
    }

    swap(arr[mid], arr[high]);

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

void MedianQuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int p = Partition(arr, low, high);

        MedianQuickSort(arr, low, p - 1);
        MedianQuickSort(arr, p + 1, high);
    }
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

    MedianQuickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
*************Output**************
Enter n: 5
Enter array elements: 40 10 50 20 30
Sorted array: 10 20 30 40 50