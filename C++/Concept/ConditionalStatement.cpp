/*
create a code to identify whether the input character is of uppercase,lowercase or numeric.
*/
#include <iostream>
using namespace std;

int main()
{
    char a;
    cout << "Enter a character : \n";
    cin >> a;
    if (a >= 'A' && a <= 'Z')
    {
        cout << "Given character is an uppercase alphabet \n";
    }
    else if (a >= 'a' && a <= 'z')
    {
        cout << "Given Character is a Lowercase alphabet \n";
    }
    else if (a >= '0' && a <= '9')
    {
        cout << "Given character is a numeric value \n";
    }
    else
    {
        cout << "Wrong input \n";
    }
}
