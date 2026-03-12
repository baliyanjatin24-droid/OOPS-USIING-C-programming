#include <iostream>
using namespace std;
class BankAccount
{
    string AccHolder; // These all are in private section are example of data hiding because outside of class no one access it.
    long int AccNo;
    double Balance;

    bool isValid(double bal) // Read only, logic validation, and hidden from outside
    {
        return bal > 0;
    }

public:
    BankAccount(string n, long int Ac, double b)
    {
        AccHolder = n;
        AccNo = Ac;
        if (b >= 0)
        {

            Balance = b;
        }
        else
        {
            Balance = 0;
        }
    }
    string getAccH()
    {
        return AccHolder;
    }
    long getACCn()
    {
        return AccNo;
    }
    double getBal()
    {
        return Balance;
    }
    void deposit(double amt)
    {
        if (isValid(amt))
        {
            Balance += amt;
            cout << "Deposited : " << amt << endl;
        }
        else
        {
            cout << "Invalid Amount" << endl;
        }
    }
    void withdrawl(double amt)
    {
        if (isValid(amt) && amt <= Balance)
        {
            Balance -= amt;
            cout << "Withdrawl successfully : " << amt << endl;
        }
        else
        {
            cout << "Insufficient Balance" << endl;
        }
    }
    void display()
    {
        cout << endl;
        cout << "Account holder details !" << endl;
        cout << "Account holder name : " << AccHolder << endl;
        cout << "Account number : " << AccNo << endl;
        cout << "Current balance : " << Balance << endl;
    }
    // BankAccount(const BankAccount &so)           //Copy constructor
    // {
    //     AccHolder = so.AccHolder;
    //     AccNo = so.AccNo;
    //     Balance = so.Balance;
    // }

    // BankAccount(const BankAccount &&so)          //Moving constructor
    // {
    //     AccHolder = so.AccHolder;
    //     AccNo = so.AccNo;
    //     Balance = so.Balance;
    // }
};

int main()
{
    BankAccount B1("Jatin", 455613, 20000);
    B1.deposit(10000);
    B1.withdrawl(3000);

    // cout << endl;
    // cout << "Account details " << endl;
    // cout << "Account Holder : " << B1.getAccH() << endl;
    // cout << "Account number : " << B1.getACCn() << endl;
    // cout << "Current balance : " << B1.getBal() << endl;

    B1.display();

    return 0;
}