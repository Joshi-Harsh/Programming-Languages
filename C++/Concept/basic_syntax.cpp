/*
Basic Syntax for Printing Hello World
*/
#include <iostream>
using namespace std;
int main(){    // Starting Line of the Program Execution
    // cout << "Namaste Duniya" <<endl;  // Printing Namaste Duniya Message

    /*
    int age;  // Declaration of a variable
    cout << age << endl; // Garbage Value is stored in variable while declaration
    */

    /*
    int marks = 87; // Definition of a Variable.
    cout << marks << endl; 
    */

    int age;
    cout << "Enter your Age" << endl;
    cin >> age;
    cout << "Your age is : " << age << endl;

    return 0;  // This lines indicate as a successful execution of the complete program.
}              // Ending Line of the Main Function (Scope of Main)