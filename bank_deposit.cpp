// Enter an Amount for a fixed tenure at an agreed rate of interest.
// It will give you the amount you have invested plus compound interest.

#include <bits/stdc++.h>
using namespace std;

class Bank_deposit
{
    int principleValue;
    int year;
    int intrestRate;
    float returnValue;

public:
    Bank_deposit() {}
    Bank_deposit(int, int, int);
    void show_return();
};

Bank_deposit::Bank_deposit(int pV, int yR, int iR)
{
    principleValue = pV;
    year = yR;
    intrestRate = iR;
    returnValue = principleValue;

    for (int i = 0; i < yR; i++)
    {
        returnValue += ((iR * returnValue) / 100);
    }
}

void Bank_deposit::show_return()
{
    cout << "Amount invested : " << principleValue << endl
         << "Total Profit : " << (returnValue-principleValue) << endl
         << "Return Amount : " << returnValue << endl;
}

int main()
{
    int pV;
    int yR;
    int iR;

    cout << "Amount : ";
    cin >> pV;
    cout << "Total Year : ";
    cin >> yR;
    cout << "Intrest Rate (%) : ";
    cin >> iR;

    Bank_deposit D1;
    D1 = Bank_deposit(pV, yR, iR);
    D1.show_return();
}