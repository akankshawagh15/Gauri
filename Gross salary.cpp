/*	WAP to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/

#include<iostream>
using namespace std;
int main ()
{
	int salary,gross,hra,da;
	cout<<"enter the basic salary of the employee."<<endl;
	cin>>salary;
	if(salary<= 10000)
	{
		da=salary*20/100;
		hra=salary*80/100;
		gross=salary+da+hra;
	cout<<"the gross salary of the employee is"<<endl<<gross;
	}
if(salary<= 20000)
	{
		da=salary* 0.25f;
		hra=salary*0.90f;
		gross=salary+da+hra;
	cout<<"the gross salary of employee is"<<endl<<gross;
	}
	else if(salary>20000)
	{
		da=salary*0.30f;
		hra=salary*0.95f;
		gross=salary+da+hra;
	cout<<"the gross salary of employee is"<<endl<<gross;
	}
	else
	{
		cout<<"you have no salary"<<endl;
	}
}