#include <iostream>
using namespace std;
class ATM
{
    string Holder;
    long int AccNo;
    int pin;
    double balance;

    bool isValid(int balance)
    {
        return balance > 0;
    }

public:
    ATM(string n, long int no, int p, double b)
    {
        Holder = n;
        AccNo = no;
        pin = p;
        if (b >= 0)
        {
            balance = b;
        }
        else
        {
            balance = 0;
        }
    }
    string getAccH()
    {
        return Holder;
    }
    long getAccNo()
    {
        return AccNo;
    }
    double getbal()
    {
        return balance;
    }
    void withdrawl()
    {
        int amount;
        cout << "Enter amount to withdraw : ";
        cin >> amount;

        if (isValid(amount))
        {
            int po;
            cout << "Enter pin : ";
            cin >> po;
            if (po == pin)
            {
                if (balance >= amount)
                {
                    balance -= amount;
                    cout << "Amount deposited : " << amount << endl;
                    cout << "Remaining balance : " << balance << endl;
                }
                else
                {
                    cout << "Insufficient balance" << endl;
                }
            }
            else
            {
                cout << "Enter correct pin" << endl;
            }
        }
        else
        {
            cout << "Invalid amount" << endl;
        }
    }
};

int main()
{
    ATM A1("Jatin", 454541, 9845, 10000);

    cout << "DETAILS " << endl;
    cout << "Account holder : " << A1.getAccH() << endl;
    cout << "Account number : " << A1.getAccNo() << endl;

    A1.withdrawl();

    return 0;
}