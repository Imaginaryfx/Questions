// TAKING 2 BASIC COMPLEX NUMBERS INPUT AND PRINTING THEM AFTER ADDING.

#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    void setData(void);
    void displayData(void);
    void sumofcomplex(Complex c01, Complex c02);
};

void Complex::setData(void)
{
    cout << "enter real part : ";
    cin >> a;
    cout << "enter imaginary part : ";
    cin >> b;
}

void Complex::displayData(void)
{
    cout << a << "+" << b << "i" << endl;
}

void Complex::sumofcomplex(Complex c01, Complex c02)
{
    Complex c03;
    c03.a = (c01.a + c02.a);
    c03.b = (c01.b + c02.b);
    c03.displayData();
}

int main()
{
    Complex c1, c2, sum;

    c1.setData();
    cout << "Your 1st Complex no. is : ";
    c1.displayData();

    c2.setData();
    cout << "Your 2nd Complex no. is : ";
    c2.displayData();

    cout << "Sum of both Complex numbers is : ";
    sum.sumofcomplex(c1, c2);
}
