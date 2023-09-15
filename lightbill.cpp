/*	WAP to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/

# include <iostream>
using namespace std;
int main()
{
   int unit;
		float amt,subcharge,bill_amt;
		cout<<"Enter number of units:"<<" ";
		cin>>unit;
		if(unit<=50)
		{			
			amt = unit*0.50f;
		}
		else if(unit<=150)
		{
			amt = unit*0.75f;
		}
		else if(unit<=250)
		{
			amt = unit*1.20f;
		}
		else
		{
			amt = unit*1.50f;
		}
 
		subcharge = amt*0.2f;
		bill_amt = amt+subcharge;
		cout<<"Total Electricity Bill : "<<+bill_amt;
		cin>>bill_amt;
		return 0;
}