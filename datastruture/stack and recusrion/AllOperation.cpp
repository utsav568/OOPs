#include <iostream>
#include <vector>
using namespace std;

void MergeArray(vector<int>& A, vector<int>& B, int m, int n) {
    int i = 0;
    int j = 0;
    vector<int> c;

    while (i < m && j < n) {
        if (A[i] < B[j]) {
            c.push_back(A[i]);
            i++;
        }
        else {
            c.push_back(B[j]);
            j++;
        }
    }

    while (i < m) {
        c.push_back(A[i]);
        i++;
    }

    while (j < n) {
        c.push_back(B[j]);
        j++;
    }

    for (int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
    }
}

void Union(vector<int>& A, vector<int>& B, int m, int n) {
    int i = 0;
    int j = 0;
    vector<int> c;

    while (i < m && j < n) {

        if (A[i] < B[j]) {
            c.push_back(A[i]);
            i++;
        }
        else if (B[j] < A[i]) {
            c.push_back(B[j]);
            j++;
        }
        else {
            c.push_back(A[i]);
            i++;
            j++;
        }
    }

    while (i < m) {
        c.push_back(A[i]);
        i++;
    }

    while (j < n) {
        c.push_back(B[j]);
        j++;
    }

    for (int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
    }
}

void Intersection(vector<int>& A, vector<int>& B, int m, int n) {
    int i = 0;
    int j = 0;
    vector<int> c;

    while (i < m && j < n) {

        if (A[i] < B[j]) {
            i++;
        }
        else if (B[j] < A[i]) {
            j++;
        }
        else {
            c.push_back(A[i]);
            i++;
            j++;
        }
    }

    for (int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
    }
}

void ABMinus(vector<int>& A, vector<int>& B, int m, int n) {
    int i = 0;
    int j = 0;
    vector<int> c;

    while (i < m && j < n) {

        if (A[i] < B[j]) {
            c.push_back(A[i]);
            i++;
        }
        else if (B[j] < A[i]) {
            j++;
        }
        else {
            i++;
            j++;
        }
    }

    while (i < m) {
        c.push_back(A[i]);
        i++;
    }

    for (int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
    }
}

void Symmetric(vector<int>& A, vector<int>& B, int m, int n) {
    int i = 0;
    int j = 0;
    vector<int> c;

    while (i < m && j < n) {

        if (A[i] < B[j]) {
            c.push_back(A[i]);
            i++;
        }
        else if (A[i] > B[j]) {
            c.push_back(B[j]);
            j++;
        }
        else {
            i++;
            j++;
        }
    }

    while (i < m) {
        c.push_back(A[i]);
        i++;
    }

    while (j < n) {
        c.push_back(B[j]);
        j++;
    }

    for (int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
    }
}

int main() {

    vector<int> A;

    A.push_back(10);
    A.push_back(10);
    A.push_back(20);
    A.push_back(30);
    A.push_back(55);

    vector<int> B;

    B.push_back(45);
    B.push_back(55);
    B.push_back(60);
    B.push_back(70);

    cout << "Merge sort is : ";
    MergeArray(A, B, A.size(), B.size());

    cout << endl;

    cout << "The Union is : ";
    Union(A, B, A.size(), B.size());

    cout << endl;

    cout << "The Intersection is : ";
    Intersection(A, B, A.size(), B.size());

    cout << endl;

    cout << "A - B is : ";
    ABMinus(A, B, A.size(), B.size());

    cout << endl;

    cout << "Symmetric Difference is : ";
    Symmetric(A, B, A.size(), B.size());

  
}