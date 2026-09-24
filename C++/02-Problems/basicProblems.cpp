#include <iostream>
using namespace std;

int main(){

/* Program to chech whether a given traingle is correct or not.

int a, b, c;
cout << "Enter the Three sides of the traingle : \n";
cin >> a >> b >> c;

if (a + b > c && a + c > b && b + c > a)
{
    cout << "The Traingle is valid. \n";
}
else{
    cout << "The traingle is invalid. \n";
} 
*/

//--------------------------------------------------------------------------

/* Program to find factorial of a number

int fact = 1,n;

cout << "Enter the number you wish to find the factorial of : \n";
cin >> n;

for (int i = 1; i <= n; i++)
{
    fact = fact * i;
}
cout << "Factorial of " << n << " is " << fact << "\n."; */

// -------------------------------------------------------------------------

/* Program to calculate Simple Interest

float principle, rate, time, interest;
cout << "Enter the principle amount \n";
cin >> principle;
cout << "Enter the annual rate of interest \n ";
cin >> rate;
cout << "Enter the the duration of loan \n";
cin >> time;

interest = (principle * (rate / 100)) * time;
cout << "The total simple interest of the above loan will be " << interest << ". \n";
 */

 //------------------------------------------------------------------------------

/* Print Counting from N to 1

int n;
cout << "Enter the value to starting number to be printed" << endl;
cin >> n;
cout << "Value of N is " << n << endl;

for (int i = n; i >= 1; i--)
{
    cout << i << endl ;
}
 */

//--------------------------------------------------------------------------------------
}