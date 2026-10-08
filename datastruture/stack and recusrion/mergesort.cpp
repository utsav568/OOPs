
#include <iostream>
#include <vector>
using namespace std;

vector<int> c;

void Merge(vector<int>& A, int low, int mid, int high) {
    int i = low, j = mid + 1, k = low;

    while (i <= mid && j <= high) {
        if (A[i] < A[j]) {
            c[k] = A[i];
            i++;
            k++;
        }
        else {
            c[k] = A[j];
            j++;
            k++;
        }
    }

    while (i <= mid) {
        c[k] = A[i];
        i++;
        k++;
    }

    while (j <= high) {
        c[k] = A[j];
        j++;
        k++;
    }

    for (int i = low; i <= high; i++) {
        A[i] = c[i];
    }
}

void mergesort(vector<int>& A, int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;

        mergesort(A, low, mid);
        mergesort(A, mid + 1, high);

        Merge(A, low, mid, high);
    }
}

int main() {
    int n;
    cout<<"Enter The Size : ";
    cin >> n;

    c.resize(n);

    vector<int> A(n);
    cout<<"Enter The Array : ";

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    mergesort(A, 0, n - 1);

    cout << "Sorted Array is : ";

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
}

