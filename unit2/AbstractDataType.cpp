//3. Abstract Data Type (ATM)
#include<iostream>
using namespace std;

class ATM
{
private:
    int balance=10000;

public:

    void deposit(int money)
    {
        balance += money;
    }

    void withdraw(int money)
    {
        if(balance>=money)
        {
            balance -= money;
            cout<<"Withdraw Successful"<<endl;
        }
        else
        {
            cout<<"Insufficient Balance"<<endl;
        }
    }

    void checkBalance()
    {
        cout<<"Balance = "<<balance<<endl;
    }
};

int main()
{
    ATM user;

    user.checkBalance();

    user.deposit(5000);

    user.withdraw(7000);

    user.checkBalance();
}

/*यहाँ User को केवल

deposit()
withdraw()
checkBalance()

दिखते हैं।

अंदर Balance कैसे Manage हो रहा है, पता नहीं चलता।

यही ADT है।*/
