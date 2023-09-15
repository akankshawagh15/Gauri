/*5.Write a program that takes one input as number and it will display whether the  number is +ve, -ve or
 zero.  If the number is +ve, then it will display whether the number is odd or even.*/

# include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	//positive or negative
    {
        if (num > 0)
         cout << "The number is positive"<<endl;
        else if (num < 0)
        cout << "The number is negative"<<endl;
        else
        cout << "Zero"<<endl;
    }
    //Even or odd
	{
        if(num%2==0)
		cout<<"EVEN number"<<endl;
	    else
		cout<<"ODD number"<<endl;
    }
	
	return 0;
}
