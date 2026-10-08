#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string name;
    double balance;

public:
    void input();
    void deposit();
    void withdraw();
    void display();
};

void BankAccount::input()
{
    cout << "Enter Account Number: ";
    cin >> accountNumber;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Initial Balance: ";
    cin >> balance;
}

void BankAccount::deposit()
{
    double amount;

    cout << "Enter Deposit Amount: ";
    cin >> amount;

    balance = balance + amount;

    cout << "Amount Deposited Successfully!" << endl;
}

void BankAccount::withdraw()
{
    double amount;

    cout << "Enter Withdrawal Amount: ";
    cin >> amount;

    if (amount <= balance)
    {
        balance = balance - amount;
        cout << "Amount Withdrawn Successfully!" << endl;
    }
    else
    {
        cout << "Insufficient Balance!" << endl;
    }
}

void BankAccount::display()
{
    cout << "\nAccount Number: " << accountNumber << endl;
    cout << "Name: " << name << endl;
    cout << "Balance: " << balance << endl;
}

int main()
{
    BankAccount obj;

    obj.input();
    obj.deposit();
    obj.withdraw();
    obj.display();

    return 0;
}