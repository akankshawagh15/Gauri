// WAP to print even number from 1 to 20

#include<iostream>
using namespace std;
int main()
{
    int i,n,even;
    cout<<"\nEnter the Ending value:";
    cin>>n;
    cout<<"\nEven numbers:";
    for(i=1 ;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<"\n"<<i;
            even++;
        }
    }
    cout<<"\n Total numbers of even number:"<<even;
    return 0;
}   