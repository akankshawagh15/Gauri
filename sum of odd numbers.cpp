#include<iostream>
using namespace std;
int main()
{
    int i,n,odd, sum = 0;
    cout<<"\nEnter the Ending value:";
    cin>>n;
    cout<<"\nOdd numbers:";
    for(i=1 ;i<=n;i++)
    {
        if(i%2==1)
        {
            cout<<"\n"<<i;
            odd++;
            sum= sum +i;
        }
    }
    
    cout<<"\n Total numbers of odd number:"<<odd;
    cout << endl << "Sum of odd numbers from 1 to " << n << " is : " << sum;
    return 0;
}   