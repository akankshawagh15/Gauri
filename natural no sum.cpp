//WAP to print all digits of a number and their sum.

#include <iostream>
using namespace std;
int main()
{
    int num , rem ,sum;
    cout << "Enter number: ";
    cin >> num;
    while(num > 0)
    {
        rem = num % 10;
        sum= sum + rem;
        num = num / 10;
    }
    cout<< "Sum is:"<<sum<<endl;
    return 0;
    
}