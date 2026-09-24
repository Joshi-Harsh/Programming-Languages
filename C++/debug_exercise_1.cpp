
/*
Pattern
N = 4
   1
  232
 34543
4567654
*/
#include<iostream>
using namespace std;
int main(){
    int no;
    cin>>no;
    int i=1;
    int n = 2*no;
    while(i<=(no)){
        int gaps = n - i,k=1;
        int j = i;
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        int ch = n - gaps + 1, z = (ch+1)/2;
        while(z>1){
            cout<<j;
            j = j - 1;
            z = z + 1;
        }
        j = j - 1;
        z = (ch-1)/2;
        while(z>=1){
            j = j - 1;
            cout<<j;
            z = z - 1;
        }
        k = 1;
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}

/* 
Question - 1: Debug the code. Take input a character, print 1, if its a capital alphabet, print 0, if its a lowercase alphabet, else print -1.

#include<iostream>
using namespace std;

int main() {
	char c;
    cin>>c;
    if('a'<=c && c<= 'z'){
        cout<<0;
    }
	else if('A'<=c && c<= 'Z'){
        cout<<1;
    }
    else{
        cout<<-1;
    }
} */

/* 

Question - 2: Debug the code. It is trying to print the given pattern.
Pattern:
1
23
345
4567

#include<iostream>
using namespace std;


int main(){
    int n=4;
    int i=1;
    while(i<=n){
        int j = i,count = 1;
        while(count<=i){
            cout<<j;
            j = j + 1;
            count = count + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}
 */

/*
Question - 3: Debug the code. It is trying to print the given pattern.
Pattern
N = 4
   *
  ***
 *****
*******


#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i=1;
    while(i<=n){
        int j = i,count = 2*n-1,gaps=(n-i),k=1;
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        int m = 1,ch = count - 2*gaps;
        while(m<=ch){
            cout<<"*";
            m = m + 1;
        }
        k = 1;
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }

    return 0;
}
    
*/

/*
Question - 4: Debug the code. It is trying to print the given pattern.
Pattern
N = 4
1
22
333
4444

#include<iostream>
using namespace std;

int main(){
  int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
	        cout<<i;
        }
    cout<<endl;
    }
}

*/

/*
Question - 5: Debug the code. It is trying to print the given pattern.
Pattern
N = 4
1
21
321
4321

#include<iostream>
using namespace std;

int main(){
  int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
       int p;
        for(j=1;j<=i;j++){
          p = i - j + 1;
          cout<<p;
          
        }
        cout<<endl;
        
    }
}
*/

/*
Question - 6: Debug the code. It is trying to print the given pattern.
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE

#include<iostream>
using namespace std;

int main() {
    int i,j,n;;
    cin>>n;
    for(i=1;i<=n;i++){
        char p;
        for(j=1;j<=i;j++){
            p = 'A' + (j - i + 4);
            cout<<p;
            
        }
        cout<<endl;
    }
}
*/