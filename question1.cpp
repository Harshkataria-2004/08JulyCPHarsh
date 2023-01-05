#include <iostream>
using namespace std;

class bank
{
    char acc_name[30], acc_type[30];
    int acc_no;
    float acc_bal;

public:
    int with_amt, dep_amt;
    void info()
    {
        cout << "Enter Your Details :" << endl
             << endl;
        cout << "Enter Account No. : ";
        cin >> acc_no;
        cout << "Enter Name : ";
        cin >> acc_name;
        cout << "Enter Account Type : ";
        cin >> acc_type;
        cout << "Enter Balance : ";
        cin >> acc_bal;
    }
    void deposit()
    {
        cout << "Enter amount to deposit = ";
        cin >> dep_amt;
        acc_bal = acc_bal + dep_amt;
        cout << "Total Balance = " << acc_bal << endl;
    }
    void withdraw()
    {
        cout << "Enter amount to withdraw = ";
        cin >> with_amt;
        if (with_amt > acc_bal)
        {
            cout << "NOT ENOUGH BALANCE IN THE ACCOUNT" << endl;
        }
        else
        {
            acc_bal = acc_bal - with_amt;
            cout << "Total Balance = " << acc_bal << endl;
        }
    }
    void display()
    {
        cout << "--------------ACCOUNT DETAILS--------------" << endl;
        cout << "Account No. : " << acc_no << endl;
        cout << "Name : " << acc_name << endl;
        cout << "Account type : " << acc_type << endl;
        cout << "Balance : " << acc_bal << endl;
    }
};

int main()
{
    bank b;
    int ch;
    cout << "-------------Welcome to the Bank--------------" << endl;
    b.info();
    cout << "Choose your option :" << endl;
    cout << "1. Deposit " << endl;
    cout << "2. Withdraw " << endl;
    cout << "3. Display " << endl;
    cout << "4. exit" << endl;
    cout << "Enter choice : ";
    cin >> ch;

    if (ch == 1)
    {
        b.deposit();
    }

    else if (ch == 2)
    {
        b.withdraw();
    }

    else if (ch == 3)
    {
        b.display();
    }

    else if (ch == 4)
    {
        exit(0);
    }
    else
    {
        cout << "enter your choice" << endl;
    }
    cout << "THANX FOR VISITING" << endl;
    return 0;
}
