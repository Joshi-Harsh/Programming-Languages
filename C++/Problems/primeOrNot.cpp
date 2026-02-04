/*
Write a program to check whether the given number is prime or not.
*/

#include <iostream>
using namespace std;

int main()
{
    int num, i = 2;

    cout << "Enter a number to check whether its prime or not : \n";
    cin >> num;

    while (i < num)
    {
        if (num % i == 0)
        {
            cout << "The Entered number is not prime";
            break;
        }
        else
        {
            cout << "The Entered number is prime";
        }
        i = i + 1;
        
    }
}