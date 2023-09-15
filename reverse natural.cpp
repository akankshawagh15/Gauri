//WAP for printing all natural numbers in reverse order starting from 20

#include<iostream>
using namespace std;

int main()
{
	int num;
	
	cout << " Enter number to be print  ";
	cin >> num;
	
	cout << " Print  Natural Numbers from " << num << " to 1 are\n"; 
	for(int i = num; i >= 1; i--)
  	{
		cout << i <<" ";
  	}
		
 	return 0;
}