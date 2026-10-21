Name:Utsav Singh
Roll:2503201001269

#include <iostream>
using namespace std;

void TowerOfHanoi(int n, char s, char m, char d)
{
    if (n == 1)
    {
        cout << "Move disk 1 from " << s << " to " << d << endl;
        return;
    }

    TowerOfHanoi(n - 1, s, d, m);

    cout << "Move disk " << n << " from " << s << " to " << d << endl;

    TowerOfHanoi(n - 1, m, s, d);
}

int main()
{
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    TowerOfHanoi(n, 'S', 'M', 'D');

    return 0;
}
**********OUTPUT*************
Enter number of disks: 3
Move disk 1 from S to D
Move disk 2 from S to M
Move disk 1 from D to M
Move disk 3 from S to D
Move disk 1 from M to S
Move disk 2 from M to D
Move disk 1 from S to D