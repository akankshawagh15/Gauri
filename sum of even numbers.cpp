//sum of new numbers
#include<iostream>
using namespace std;
int main()
{
    int i,n,even , sum = 0;
    cout<<"\nEnter the Ending value:";
    cin>>n;
    cout<<"\nEven numbers:";
    for(i=1 ;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<"\n"<<i;
            even++;
            sum= sum +i;
        }
    }
    
    cout<<"\n Total numbers of even number:"<<even;
    cout << endl << "Sum of even numbers from 1 to " << n << " is : " << sum;
    return 0;
}   