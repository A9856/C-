// //3. Abstract Data Type (ATM)
// #include<iostream>
// using namespace std;
// class ATM
// {
// private:
//     int balance=10000;

// public:
//     void deposit(int money)
//     {
//         balance += money;
//     }

//     void withdraw(int money)
//     {
//         if(balance>=money)
//         {
//             balance -= money;
//             cout<<"Withdraw Successful"<<endl;
//         }
//         else
//         {
//             cout<<"Insufficient Balance"<<endl;
//         }
//     }

//     void checkBalance()
//     {
//         cout<<"Balance = "<<balance<<endl;
//     }
// };

// int main()
// {
//     ATM user;

//     user.checkBalance();

//     user.deposit(5000);

//     user.withdraw(7000);

//     user.checkBalance();
// }

/* 2. example */
#include<iostream>
using namespace std;

class ATM
{
private:
    int balance;
    int pin;

public:

    // Constructor
    ATM()
    {
        balance = 10000;
        pin = 1234;
    }

    // Login Function
    bool login(int enteredPin)
    {
        if(enteredPin == pin)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // Deposit Function
    void deposit(int amount)
    {
        if(amount > 0)
        {
            balance = balance + amount;
            cout<<"Amount Deposited Successfully"<<endl;
        }
        else
        {
            cout<<"Invalid Amount"<<endl;
        }
    }

    // Withdraw Function
    void withdraw(int amount)
    {
        if(amount <= balance)
        {
            balance = balance - amount;
            cout<<"Please Collect Your Cash"<<endl;
        }
        else
        {
            cout<<"Insufficient Balance"<<endl;
        }
    }

    // Balance Check Function
    void checkBalance()
    {
        cout<<"Current Balance = "<<balance<<endl;
    }

    // Mini Statement Function
    void miniStatement()
    {
        cout<<"\n----- MINI STATEMENT -----"<<endl;
        cout<<"Account Holder : Adil Khan"<<endl;
        cout<<"Account Number : 1234567890"<<endl;
        cout<<"Current Balance: "<<balance<<endl;
    }

    // Change PIN Function
    void changePin(int oldPin,int newPin)
    {
        if(oldPin == pin)
        {
            pin = newPin;
            cout<<"PIN Changed Successfully"<<endl;
        }
        else
        {
            cout<<"Wrong Old PIN"<<endl;
        }
    }
};

int main()
{
    ATM user;

    int enteredPin;
    int choice;
    int amount;
    int oldPin,newPin;

    cout<<"Enter ATM PIN : ";
    cin>>enteredPin;

    if(user.login(enteredPin))
    {
        do
        {
            cout<<"\n========== ATM MENU =========="<<endl;
            cout<<"1. Deposit"<<endl;
            cout<<"2. Withdraw"<<endl;
            cout<<"3. Check Balance"<<endl;
            cout<<"4. Mini Statement"<<endl;
            cout<<"5. Change PIN"<<endl;
            cout<<"6. Exit"<<endl;

            cout<<"Enter Choice : ";
            cin>>choice;

            switch(choice)
            {
                case 1:
                    cout<<"Enter Deposit Amount : ";
                    cin>>amount;
                    user.deposit(amount);
                    break;

                case 2:
                    cout<<"Enter Withdraw Amount : ";
                    cin>>amount;
                    user.withdraw(amount);
                    break;

                case 3:
                    user.checkBalance();
                    break;

                case 4:
                    user.miniStatement();
                    break;

                case 5:
                    cout<<"Enter Old PIN : ";
                    cin>>oldPin;

                    cout<<"Enter New PIN : ";
                    cin>>newPin;

                    user.changePin(oldPin,newPin);
                    break;

                case 6:
                    cout<<"Thank You for Using ATM"<<endl;
                    break;

                default:
                    cout<<"Invalid Choice"<<endl;
            }

        }
        while(choice!=6);
    }
    else
    {
        cout<<"Invalid ATM PIN"<<endl;
    }

    return 0;
}

/*यहाँ User को केवल

deposit()
withdraw()
checkBalance()
dikhayi deta hai internally balance kaise organize kiya ja rha vah user ko pta nhi chlta..isi ko ADT kahte hai. */