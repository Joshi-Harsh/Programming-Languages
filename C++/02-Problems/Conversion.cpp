/*
Write a code to convert fahrenheit to celsius.
*/

#include <iostream>
using namespace std;

int main()
{
    int cel, fah;
    cout << "Enter the temperature in fahrenheit : \n";
    cin >> fah;

    cel = (fah - 32) * 5 / 9;

    cout << "The temperature entered is " << cel << " Celsius \n";
}