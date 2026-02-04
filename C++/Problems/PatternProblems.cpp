#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the even number of rows of diamond you wish to create:" << endl;
    cin >> n;

    for (int rows = 0; rows < n/2; rows++)
    {
        for (int  col = 0; col < (n/2)-(1+rows); col++) // col condn is nothing but n/2 - rows - 1 w.r.t. spaces.
        {
            cout << " ";
        }
        
        for (int col = 0; col < 2*rows + 1; col++)
        {
           if (col == 0)
           {
               cout << "*";
           }
           else if (col == 2*rows)
           {
               cout << "*";
           }
           else
           {
               cout << " ";
           }
        
        }
        cout << endl;
    }

    
/*     for (int rows = n/2; rows < n; rows++)
    {
        for (int  col = 0; col < n-(1+rows); col++)
        {
            cout << " ";
        }
        
        for (int col = 0; col < rows + 1; col++)
        {
           if (col == 0)
           {
               cout << "*";
           }
           else if (col == 2*rows)
           {
               cout << "*";
           }
           else
           {
               cout << " ";
           }
        
        }
        cout << endl;
    } */
    

    /* write a code to print a Diamond pattern like  --- IMP---

            *
           * *
          * * *
         * * * *
        * * * * *
        * * * * *
         * * * *
          * * *
           * *
            *

        int n;

        cout << "Enter the Number of Rows of pramid you want to create : \n";
        cin >> n;

        for (int rows = 0; rows < n/2; rows++)
        {
            for (int colm = 0; colm < n - rows - 1; colm++)
            {
                cout << " ";
            }
            for (int colm = 0; colm < rows + 1; colm++)
            {
                cout << "* ";  // Here there is a empty space left after every star to give it a clean look.
            }
            cout << endl;
        }

        for (int rows = n/2; rows < n; rows++)
        {
            for (int colm = 0; colm < rows; colm++)
            {
                cout << " ";
            }

            for (int colm = 0; colm < n - rows; colm++)
            {
                cout << "* ";
            }

            cout << endl;
        }
    */

    /* write a code to print a Nice Visualized pyramid pattern like  --- IMP---

       * * * * *
        * * * *
         * * *
          * *
           *

       int n;

       cout << "Enter the Number of Rows of pramid you want to create : \n";
       cin >> n;

       for (int rows = 0; rows < n; rows++)
       {
           for (int colm = 0; colm < rows; colm++)
           {
               cout << " ";
           }

           for (int colm = 0; colm < n - rows; colm++)
           {
               cout << "* ";
           }

           cout << endl;
       }
    */ 

    /* write a code to print a Nice Visualized pyramid pattern like  --- IMP---

          *
         * *
        * * *
       * * * *

    int n;

    cout << "Enter the number of rows of pyramid you wish to create : \n ";
    cin >> n;

    for (int rows = 0; rows < n; rows++)
    {
        for (int colm = 0; colm < n - rows - 1; colm++)
        {
            cout << " ";
        }
        for (int colm = 0; colm < rows + 1; colm++)
        {
            cout << "* ";  // Here there is a empty space left after every star to give it a clean look.
        }
        cout << endl;
    }
    */
     

    

    /* write a code to print a full Hollow pyramid pattern like  --- IMP---

      *
     * *
    *   *
   *******

   Code:
   int n;

   cout << "Enter the numbers of rows of pyramid you wish to print: \n";
   cin >> n;

   for (int rows = 0; rows < n; rows++)
   {
       int k = 0;
       for (int colm = 0; colm < (2*n)-1; colm++)
       {
           if (colm < n-rows-1)
           {
               cout << " ";
           }
           else if(k < 2 * rows + 1){
               if( k == 0 || k == 2 * rows || rows == n - 1)
               {
                   cout << "*";
               }
               else {
                   cout << " ";
               }
               k++;
           }
           else{
               cout << " ";
           }
       }
       cout << endl;
   }
   */

    /* write a code to print a full pyramid pattern like ---IMP---

  *  
 *** 
*****

Code:

int n;

cout << "Enter the numbers of rows of pyramid you wish to print: \n";
cin >> n;

for (int rows = 0; rows < n; rows++)
{
    int k = 0;
    for (int colm = 0; colm < (2*n)-1; colm++)
    {
        if (colm < n-rows-1)
        {
            cout << " ";
        }
        else if(k < 2 * rows + 1){
            cout << "*";
            k++;
        }
        else{
            cout << " ";
        }
    }
    cout << endl;
}
*/

/* write a code to print a hollow inverted pyramid pattern like
****
* *
**
*

Code:
int n;

cout << "Enter the numbers of rows of pyramid you wish to print: \n";
cin >> n;

for (int rows = 1; rows <= n; rows++)
{
    for (int colm = 1; colm <= n; colm++)
    {
        if (rows == 1 || colm == 1)
        {
            cout << "*";
        }
        else if(rows + colm == n + 1){
            cout << "*";
        }
        else{
            cout << " ";
        }
    }
    cout << endl;
} */
/* 
write a code to print a hollow square pattern like
****
*  *
*  *
****

Code:
int n;

cout << "Enter the numbers of rows you wish to print: \n";
cin >> n;

for (int rows = 1; rows <= n; rows++)
{
    for (int colm = 1; colm <= n; colm++)
    {
        if (rows == 1 || rows == n || colm == 1 || colm == n)
        {
            cout << "*";
        }
        else{
            cout << " ";
        }
    }
    cout << endl;
}
 */

/*
write a code to print a square pattern like
****
****
****
****

Code:

int n;

cout << "Enter the numbers of rows you wish to print: \n";
cin >> n;

for(int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cout << "*";
    }
    cout << endl;
}
*/

/*     
write a code to print a square pattern like
1111
2222
3333
4444

Code:
    
    int n, rows = 1;

    cout << "Enter the value of rows to be printed : \n";
    cin >> n;

    while (rows <= n)
    {
        int columns = 1;

        while (columns <= n)
        {
            cout << rows;
            columns = columns + 1;
        }
        cout << endl;
        rows = rows + 1;
    } */



}