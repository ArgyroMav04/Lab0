/*
File: Lab0.cpp
Author: Argyro Mavrou
Course: COMP 118 / COMP 119
Description:
Menu driven program that performs simple math operations:
1) Sum two numbers
2) Area of a circle
3) Circumference of a circle
4) Price including VAT
*/

#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

// Global Constants
const double PI = 3.141592653589793;

// Function Prototypes
double sumTwoNumbers(double num1, double num2);
double areaOfCircle(double radius);
double circumferenceOfCircle(double radius);
double priceIncludingVAT(double price, int vat);

//----------------------------------------------------
// Main function
//----------------------------------------------------
int main()
{
    int option = -1;

    while(option != 0)
    {
        cout << "\n------ MENU ------\n";
        cout << "0) Exit\n";
        cout << "1) Sum two numbers\n";
        cout << "2) Calculate area of a circle\n";
        cout << "3) Calculate circumference of a circle\n";
        cout << "4) Calculate price with VAT\n";

        cout << "\nEnter your Option: ";
        cin >> option;

        if(option == 1)
        {
            double a, b;
            cout << "Enter first number: ";
            cin >> a;
            cout << "Enter second number: ";
            cin >> b;

            cout << "Result: " << sumTwoNumbers(a,b) << endl;
        }

        else if(option == 2)
        {
            double r;
            cout << "Enter radius: ";
            cin >> r;

            cout << "Area = " << areaOfCircle(r) << endl;
        }

        else if(option == 3)
        {
            double r;
            cout << "Enter radius: ";
            cin >> r;

            cout << "Circumference = " << circumferenceOfCircle(r) << endl;
        }

        else if(option == 4)
        {
            double price;
            int vat;

            cout << "Enter price: ";
            cin >> price;

            cout << "Enter VAT percentage: ";
            cin >> vat;

            cout << "Price with VAT = " << priceIncludingVAT(price,vat) << endl;
        }

        else if(option != 0)
        {
            cout << "Invalid option. Try again.\n";
        }
    }

    cout << "\nProgram exited.\n";

    return 0;
}


//----------------------------------------------------
// Function: sumTwoNumbers
// Returns the sum of two numbers
//----------------------------------------------------
double sumTwoNumbers(double num1, double num2)
{
    cout << "\nThe sum of the Numbers\n";

    return num1 + num2;
}


//----------------------------------------------------
// Function: areaOfCircle
// Returns the area of a circle
//----------------------------------------------------
double areaOfCircle(double radius)
{
    cout << "\nThe areaOfCircle\n";

    assert(radius >= 0);

    return PI * radius * radius;
}


//----------------------------------------------------
// Function: circumferenceOfCircle
// Returns the circumference of a circle
//----------------------------------------------------
double circumferenceOfCircle(double radius)
{
    cout << "\nThe circumferenceOfCircle\n";

    assert(radius >= 0);

    return 2 * PI * radius;
}


//----------------------------------------------------
// Function: priceIncludingVAT
// Returns price including VAT
//----------------------------------------------------
double priceIncludingVAT(double price, int vat)
{
    cout << "\nThe priceIncludingVAT\n";

    assert(price >= 0);
    assert(vat >= 0);

    return price + (price * vat / 100.0);
}
