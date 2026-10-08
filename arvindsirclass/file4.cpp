#include <iostream>
#include <vector>
using namespace std;

class Collection
{
private:
    vector<int> numbers;

public:
    void setdata();
    void display();
};

void Collection::setdata()
{
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> value;
        numbers.push_back(value);
    }
}

void Collection::display()
{
    cout << "Elements are: ";

    for (auto element : numbers)
    {
        cout << element << " ";
    }

    cout << endl;
}

int main()
{
    Collection obj;

    obj.setdata();
    obj.display();

    return 0;
}