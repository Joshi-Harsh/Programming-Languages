#include <iostream>
using namespace std;

int main()
{
    int a = 0, n, sum = 0;
    cout << "Enter the value upto which you want to print numbers \n";
    cin >> n;

    while (a <= n)
    {

        sum = sum + a;
        a = a + 2;
    }
    cout << sum << endl;
}