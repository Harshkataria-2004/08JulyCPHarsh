// Write a program of find the simple interest using constructor with dynamic
// initialization. Make constructor like Interest (int principal, int year, int rate)
// Interest (int principal, int year, float rate = 2.5)

#include <iostream>
using namespace std;

class interest
{
private:
    float principal;
    float rate;
    float year;
    float si;
    float amount;

public:
    interest()
    {
        cout << " Enter Principle Amount :: ";
        cin >> principal;
        cout << "\n Enter Rate of Interest :: ";
        cin >> rate;
        cout << "\n Enter Number of years :: ";
        cin >> year;

        si = (principal * rate * year) / 100;
        amount = si + principal;
        cout << "\n Entered Details are :: \n";
        cout << "\n Principle Amount: " << principal;
        cout << "\n\n Rate of Interest: " << rate;
        cout << "\n\n Number of years: " << year;
        cout << "\n\n Interest : " << si;
        cout << "\n\n Total Amount : " << amount << "\n";
    }
};

int main()
{
    interest b;
    return 0;
}