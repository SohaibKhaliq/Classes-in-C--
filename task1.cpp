#include "iostream"

using namespace std;

class BankAccount
{
public:
    string accountHolder;
    double balance;

    string deposit(double amount)
    {
        balance=balance+amount;
        return "Amount Have been deposited successfully!";
    }
    void withdraw(double amount)
    {
        cout << amount << " is successfully withdrawn into your account" << endl;
    }
    void displayBalance()
    {
        cout << balance;
    }
};

int main()
{
    BankAccount account1;
    account1.accountHolder="sohaib";
    account1.balance=1000;
    account1.deposit(35000);
    // account1.withdraw(20000);
    account1.displayBalance();
    
}