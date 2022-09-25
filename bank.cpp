#include <iostream>
#include <string.h>
using namespace std;

class A
{
public:
    int state_sbi;
    void state()
    {
    label1:
        cout << "----------------------Welcome to SBI------------------------" << endl;
        cout << "Enter your state from the given list : " << endl;
        cout << "1. Gujarat" << endl;
        cout << "2. Rajasthan" << endl;
        cout << "3. Maharashtra" << endl;
        cout << "4. Delhi" << endl;
        cout << "Select your state(number) : ";
        cin >> state_sbi;
        if (state_sbi == 1 || state_sbi == 2 || state_sbi == 3 || state_sbi == 4)
        {
            cout << endl
                 << "State selected successfully." << endl
                 << endl;
        }
        else
        {
            cout << endl
                 << "Enter correct choice from above." << endl
                 << endl;
            goto label1;
        }
    }
};

class B : public A
{
public:
    int city_sbi;
    void city()
    {
    label2:
        if (state_sbi == 1)
        {
            cout << "-------------------Welcome to Gujarat SBI------------------------" << endl;
            cout << "Enter your city : " << endl;
            cout << "1. Ahmedabad" << endl;
            cout << "2. Surat" << endl;
            cout << "3. Baroda" << endl;
            cout << "4. Rajkot" << endl;
        }
        else if (state_sbi == 2)
        {
            cout << "-------------------Welcome to Rajasthan SBI------------------------" << endl;
            cout << "Enter your city : " << endl;
            cout << "1. Jaipur" << endl;
            cout << "2. Jodhpur" << endl;
            cout << "3. Udaipur" << endl;
            cout << "4. Kota" << endl;
        }
        else if (state_sbi == 3)
        {
            cout << "-------------------Welcome to Maharashtra SBI------------------------" << endl;
            cout << "Enter your city : " << endl;
            cout << "1. Mumbai" << endl;
            cout << "2. Nasik" << endl;
            cout << "3. Pune" << endl;
            cout << "4. Nagpur" << endl;
        }
        else if (state_sbi == 4)
        {
            cout << "-------------------Welcome to Delhi SBI------------------------" << endl;
            cout << "Enter your city : " << endl;
            cout << "1. New Delhi" << endl;
            cout << "2. Hastsal" << endl;
            cout << "3. Deoli" << endl;
            cout << "4. Fatehpur Beri" << endl;
        }
        else
        {
            cout << "Enter choice" << endl;
        }

        cout << "Enter your city(number) : ";
        cin >> city_sbi;
        if (city_sbi == 1 || city_sbi == 2 || city_sbi == 3 || city_sbi == 4)
        {
            cout << "City selected successfully " << endl;
        }
        else
        {
            cout << "Enter correct city number." << endl;
            goto label2;
        }
    }
};

class C : public B
{
public:
    int reg;
    char log_user_name[50], log_password[50];
    char reg_user_name[50], reg_dob[50], reg_adhaar_pin[50], reg_address[50];
    int reg_acc_type;
    void registration()
    {
    label3:
        if (state_sbi == 1)
        {
            if (city_sbi == 1)
            {
                cout << "---------------------Welcome to Ahmedabad SBI------------------------ " << endl;
            }
            else if (city_sbi == 2)
            {
                cout << "---------------------Welcome to Surat SBI------------------------ " << endl;
            }
            else if (city_sbi == 3)
            {
                cout << "---------------------Welcome to Baroda SBI------------------------ " << endl;
            }
            else if (city_sbi == 4)
            {
                cout << "---------------------Welcome to Rajkot SBI------------------------ " << endl;
            }
            else
            {
                cout << "Enter correct city(number).";
                goto label3;
            }
        }
        else if (state_sbi == 2)
        {
            if (city_sbi == 1)
            {
                cout << "---------------------Welcome to Jaipur SBI------------------------ " << endl;
            }
            else if (city_sbi == 2)
            {
                cout << "---------------------Welcome to Jodhpur SBI------------------------ " << endl;
            }
            else if (city_sbi == 3)
            {
                cout << "---------------------Welcome to Udaipur SBI------------------------ " << endl;
            }
            else if (city_sbi == 4)
            {
                cout << "---------------------Welcome to Kota SBI------------------------ " << endl;
            }
            else
            {
                cout << "Enter correct city(number).";
                goto label3;
            }
        }
        else if (state_sbi == 3)
        {
            if (city_sbi == 1)
            {
                cout << "---------------------Welcome to Mumbai SBI------------------------ " << endl;
            }
            else if (city_sbi == 2)
            {
                cout << "---------------------Welcome to Nasik SBI------------------------ " << endl;
            }
            else if (city_sbi == 3)
            {
                cout << "---------------------Welcome to Pune SBI------------------------ " << endl;
            }
            else if (city_sbi == 4)
            {
                cout << "---------------------Welcome to Nagpur SBI------------------------ " << endl;
            }
            else
            {
                cout << "Enter correct city(number).";
                goto label3;
            }
        }
        else if (state_sbi == 4)
        {
            if (city_sbi == 1)
            {
                cout << "---------------------Welcome to New Delhi SBI------------------------ " << endl;
            }
            else if (city_sbi == 2)
            {
                cout << "---------------------Welcome to Hastsal SBI------------------------ " << endl;
            }
            else if (city_sbi == 3)
            {
                cout << "---------------------Welcome to Deoli SBI------------------------ " << endl;
            }
            else if (city_sbi == 4)
            {
                cout << "---------------------Welcome to Fatehpur Beri SBI------------------------ " << endl;
            }
            else
            {
                cout << "Enter correct city(number).";
                goto label3;
            }
        }
        else
        {
            cout << "Enter correct choice." << endl;
            goto label3;
        }
        char logged_name[100] = {"harsh"};
        char logged_pswd[100] = {"h@rsh2004"};
        cout << "Are you a registered user ?" << endl;
        cout << "1.YES              2.NO" << endl;
        cout << "Select from above(number) : ";
        cin >> reg;
        if (reg == 1)
        {
            cout << "-------------------------LOGIN-------------------------" << endl;
            fflush(stdin);
            cout << "User name : ";
            gets(log_user_name);
            cout << "Password(alphabets) : ";
            gets(log_password);
            if (strcmp(logged_name, log_user_name) == 0 && strcmp(logged_pswd, log_password) == 0)
            {
                cout << "LOGGED IN SUCCESSFULLY";
            }
            else
            {
                cout << "PLEASE ENTER CORRECT DETAILS";
            }
        }
        else if (reg == 2)
        {
            cout << "--------------------------REGISTRATION-------------------------" << endl;
            fflush(stdin);
            cout << "Enter name : ";
            gets(reg_user_name);
            cout << "Enter DOB : ";
            gets(reg_dob);
            cout << "Enter Adhaar PIN : ";
            gets(reg_adhaar_pin);
            cout << "Address : ";
            gets(reg_address);

            cout << "Enter Account type : " << endl;
            cout << "1.SAVINGS            2.CURRENT                3.FIXED DEPOSIT" << endl;
            cout << "Enter your account type number : ";
            cin >> reg_acc_type;
            cout << endl
                 << "SUCCESSFULLY REGISTERED" << endl;

            cout << endl
                 << "---------------------------Your Bank Details------------------------" << endl;
            cout << "Name : " << reg_user_name << endl;
            cout << "DOB : " << reg_dob << endl;
            cout << "Adhaar PIN : " << reg_adhaar_pin << endl;
            cout << "Address : " << reg_address << endl;

            cout << "IFSC code : 1526845625" << endl;
            cout << "Account No. : 2562" << endl;
            cout << "Account Type : " << reg_acc_type << endl;
        }
        else
        {
            cout << endl
                 << "Enter correcct choice." << endl;
        }
    }
};

class D : public C
{
public:
    int menu_choice, menu_total = 10000, menu_debit, menu_credit;
    void menu()
    {
        cout << "------------------------MENU--------------------------------" << endl;
        cout << "1. DEBIT " << endl;
        cout << "2. CREDIT " << endl;
        cout << "3. VIEW " << endl;
        cout << "4. LOGOUT " << endl;
        cout << "Enter your choice(number) : ";
        cin >> menu_choice;
        if (menu_choice == 1)
        {
            cout << "Enter amount to debit : ";
            cin >> menu_debit;
            menu_total = menu_total - menu_debit;
            cout << "Amount left in account : " << menu_total << endl;
        }
        else if (menu_choice == 2)
        {
            cout << "Enter amount to debit : ";
            cin >> menu_credit;
            menu_total = menu_total + menu_credit;
            cout << "Amount left in account : " << menu_total << endl;
        }
        else if (menu_choice == 3)
        {
            cout << "Amount in account : " << menu_total << endl;
        }
        else if (menu_choice == 4)
        {
            cout << "SUCCESSFULLY LOGGED OUT" << endl;
            exit(0);
        }
        else
        {
            cout << "Enter correct choice." << endl;
        }
    }
};

int main()
{
    system("cls");
    int deposit_first = 0;
    D obj;
    obj.state();
    obj.city();
    obj.registration();
    if (obj.reg == 1)
    {
        obj.menu();
    }
    else if (obj.reg == 2)
    {
        obj.menu_total = 0;
        cout << "Enter the amount to deposit first :";
        cin >> obj.menu_total;
        if (obj.menu_total == 0)
        {
            cout << endl
                 << "You cannot debit cash from account." << endl;
        }
        else
        {
            obj.menu();
        }
        return 0;
    }
}