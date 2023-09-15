//WAP for printing all natural numbers till 20.


#include<iostream>
using namespace std;
int main()
{
	int num;
	
	cout << " Enter number to be print  ";
	cin >> num;
	
	cout << " Print  Natural Numbers from " << num << " to 20 are\n"; 
	for(int i = 1; i <= num; i++)
  	{
		cout << i <<" ";
  	}
		
 	return 0;
}