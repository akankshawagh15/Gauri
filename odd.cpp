//Odd numbers from 1 to 20

#include<iostream>
using namespace std;
int main()
{
    int i,n,odd;
    cout<<"\nEnter the Ending value:";
    cin>>n;
    cout<<"\nOdd numbers:";
    for(i=1 ;i<=n;i++)
    {
        if(i%2==1)
        {
            cout<<"\n"<<i;
            odd++;
        }
    }
    cout<<"\n Total numbers of odd number:"<<odd;
    return 0;
}   