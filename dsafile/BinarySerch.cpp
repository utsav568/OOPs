Name:Utsav Singh
Roll:2503201001269

#include <iostream>
using namespace std;
int BinarySearch(int arr[], int low, int high, int key){
    if (low > high){
        return -1;
    }
 int mid = low + (high - low) / 2;
 if (arr[mid] == key){
        return mid;
    }
   if (arr[mid] > key){
        return BinarySearch(arr, low, mid - 1, key);
    }
    else{
        return BinarySearch(arr, mid + 1, high, key);
    }
}
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key;
    cout << "Enter key: ";
    cin >> key;
    int result = BinarySearch(arr, 0, n - 1, key);

    if (result == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at index: " << result;
    }

    return 0;
}
*************OUTPUT****************
Enter key: 30
Element found at index: 2