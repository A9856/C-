
//2. Information Hiding (Bank Account)

#include<iostream>
using namespace std;

class BankAccount
{
private:
    int balance;

public:

    BankAccount()
    {
        balance=5000;
    }

    void deposit(int amount)
    {
        balance += amount;
    }

    void withdraw(int amount)
    {
        if(amount<=balance)
            balance -= amount;
                // balance =balance - amount;
        else
            cout<<"Insufficient Balance"<<endl;
    }

    void showBalance()
    {
        cout<<"Current Balance : "<<balance<<endl;
    }
};

int main()
{
    BankAccount user;

    user.showBalance();

    user.deposit(3000);

    user.withdraw(2000);

    user.showBalance();
}
