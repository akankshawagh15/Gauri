#include <iostream>
using namespace std;
int main()
{
    char op, ch;
    float num1, num2;
    
    cout<<"\nWelcome to Calculator Program";
	cout<<"\n**************************************************";

    cout<<"\nEnter two operands :";
	cout<<"\nEnter first number:";
	cin>>num1;

	cout<<"\nEnter second number:";
	cin>>num2;

    cout<<"Enter operator either + or - or * or / :";
    cin >> op;

      switch(op)
		{
			case '+':
                cout<<"The addition of two numbers("<<num1<<"+"<<num2<<"):";
				cout << num1 + num2;

				break;
			case '-':
                cout<<"The subtraction of two numbers("<<num1<<"-"<<num2<<"):";
				cout << num1 - num2;

				break;
			case '*':
                cout<<"The multiplication of two numbers("<<num1<<"*"<<num2<<"):";
				cout << num1 * num2;
				break;
                
            case '/':
                cout<<"The division of two numbers("<<num1<<"/"<<num2<<"):";
				cout << num1 / num2;

				break;
			
            default:
                
                 cout << "Error !operator is not correct";
                 break;
			
        
		}
		return 0;
}

        

           
            

