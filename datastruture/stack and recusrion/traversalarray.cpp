
#include <iostream>
#include <vector>
using namespace std;

void display(vector<int>& v, int idx) {
    int n = v.size();

    if(idx < n) {
        cout << v[idx] << " ";
        display(v, idx + 1);
    }
}

int main() {
    
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    display(v, 0);
}

