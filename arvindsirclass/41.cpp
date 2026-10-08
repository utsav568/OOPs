#include <iostream>
using namespace std;

class Candi {
    string name;
    int amount;

public:
    void Getn(string);
    void getamount(int);
    friend Candi Sum(Candi, Candi, Candi);
    void display();
};

void Candi::Getn(string s) {
    name = s;
}

void Candi::getamount(int a) {
    amount = a;
}

Candi Sum(Candi a1, Candi a2, Candi a3) {
    Candi temp;
    temp.amount = a1.amount + a2.amount + a3.amount;
   
    return temp;
}

void Candi::display() {
  

    if (amount >= 100000)
        cout << "Yes" << endl;
    else
        cout << "Not " << endl;
}

int main() {
    Candi c1, c2, c3, result;

    c1.Getn("Ram");
    c1.getamount(30000);

    c2.Getn("Shyam");
    c2.getamount(40000);

    c3.Getn("Amit");
    c3.getamount(35000);

    result = Sum(c1, c2, c3);

    result.display();

   
}