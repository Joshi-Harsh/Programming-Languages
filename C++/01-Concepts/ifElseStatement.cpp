/* 
 This proram is written to understand the use of Selection Statements like if else statement and switch case statement in CPP
*/

#include<iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    
    /* Selection Statement: if - else if - else ladder
    if(age<18)
    {
        cout << "You cannot vote in the elections" << endl;
    }
    else if(age>=18)
    {
        cout << "You can vote for elections" << endl;
    }
    */

    // Selection Statement: switch case statement

    switch (age)
    {
        case 18:
        {
            cout << "you are turnwd into and adult" << endl;
            break;
        }

        case 20:
        {
            cout << "Your teenage has been ended" << endl;
            break;
        }

        default:
        {
            cout << "no speacial case" << endl;
        }
    }

    return 0;
}