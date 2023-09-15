/*2.	Write a program that generate the following output
10, 20, 19
Use an integer constant for 10, an arithmetic C++ ASSIGNMENT  operator to generate the 20, 
and a decrement operator to generate 19.
*/

# include <iostream>
using namespace std;
int main ()
{
    int a = 10;
    cout<< a << endl;
    a *= 2;
    cout << a-- <<endl;
    cout << a << endl;
    return 0;
}

    
