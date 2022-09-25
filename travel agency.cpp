#include <iostream>
#include <string.h>
using namespace std;
class A
{
public:
    char choice;
    void visit()
    {
        cout << "---------------------Welcome to travelling agency-------------------------- ";
        cout << endl
             << "Delhi" << endl
             << "Mumbai" << endl
             << "Andaman And Nicobar" << endl;
        cout << "Enter yes if you want to continue or press no : ";
        cin >> choice;
    }
};
class B : public A
{
public:
    int age;
    char name[100], email[100], city[100], username[100], password[100];
    void choose()
    {

        if (choice == 'y')
        {
            fflush(stdin);
            cout << "---------------------- Enter registration details -------------------------" << endl;
            cout << "enter name : ";
            gets(name);
            cout << "enter age : ";
            cin >> age;
            fflush(stdin);
            cout << "Enter email : ";
            gets(email);
            cout << "enter city : ";
            gets(city);

            cout << "-----------------------Enter sign-in Deatils-------------------------- " << endl;
            cout << "enter username : ";
            gets(username);
            cout << "enter password : ";
            gets(password);
        }
        else
        {
            cout << "Please visit again." << endl;
            exit(0);
        }
    }
};

class C : public B
{
public:
    char nickname[100], pass_word[100];
    void login()
    {
        cout << endl
             << "Enter user name : ";
        gets(nickname);
        cout << "Enter password : ";
        gets(pass_word);
        if (strcmp(nickname,username)==0&&(strcmp(password, pass_word)) == 0)
        {
            cout << "logged in successfully";
        }
        else
        {
            cout << "Access denied";
        }
    }
};

int main()
{
    C obj;
    obj.visit();
    obj.choose();
    obj.login();
    return 0;
}
