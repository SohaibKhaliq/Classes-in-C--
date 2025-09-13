#include "iostream"

using namespace std;

class BankAccount
{
public:
    string accountHolder;
    double balance;

    void deposit(double amount)
    {
        cout << amount << " is successfully deposited into your account" << endl;
    }
    void withdraw(double amount)
    {
        cout << amount << " is successfully withdrawn into your account" << endl;
    }
    void displayBalance()
    {
        cout << "Your Balance is 15000";
    }
};

int main()
{
    BankAccount account1;
    account1.deposit(35000);
    account1.withdraw(20000);
    account1.displayBalance();
}