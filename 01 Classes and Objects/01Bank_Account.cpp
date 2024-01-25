#include <iostream>
#include <string.h>
using namespace std;

class BankAccount
{
private:
    string AccountHolderName;
    string AccountNumber;
    double Balance;

public:
    BankAccount(string name, string accNo, double bal)
    {
        AccountHolderName = name;
        AccountNumber = accNo;
        Balance = bal;
    }

    void show_User()
    {
        cout << "AccountHolderName : " << AccountHolderName << endl;
        cout << "AccountNumber : " << AccountNumber << endl;
        cout << "Balance : " << Balance << endl;
    }

    // DisplayBalance function
    void displayBalance()
    {
        cout << "Current Balance : " << Balance << endl;
    }

    // DepositMoney function
    void depositMoney(double money)
    {
        if (money > 0)
        {
            Balance += money;
            cout << "Deposit of $" << money << " successful." << endl;
        }
        else
        {
            cout << "Invalid deposit amount. Please enter a positive value." << endl;
        }
    }

    // Withdraw function
    void withdraw(double money)
    {
        if (money > 0 && money <= Balance)
        {
            Balance -= money;
            cout << "Withdrawal of $" << money << " successful." << endl;
        }
        else if (money <= 0)
        {
            cout << "Invalid withdrawal amount. Please enter a positive value." << endl;
        }
        else
        {
            cout << "Insufficient funds for withdrawal of $" << Balance << "." << endl;
        }
    }
};

int main()
{
    BankAccount User("Gaurav Kumar", "321012792854023", 40540.10);
    BankAccount User1("Saurav Kumar", "321017852854023", 200.10);
    BankAccount User2("Sonu Kumar", "3210127928420.2", 40.10);
    // User.show_User();
    User.depositMoney(100);
    User.withdraw(50);
    User.displayBalance();

    return 0;
}