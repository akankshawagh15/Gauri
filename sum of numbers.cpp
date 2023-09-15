//sum of numbers from 1 to 20

#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,n;
    cout<<"\nEnter the Limit:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}