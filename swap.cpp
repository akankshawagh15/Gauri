/*Write a program, which takes two integer numbers as input and it shows their exchanged value. 
 (Don’t use third variable)*/

# include <iostream>
using namespace std;
int main()
{
    int a ;
    int b ;
    cout<<"Enter val1:"<<endl;
    cin>>a;
    cout<<"Enter val2:"<<endl;
    cin>>b;
    cout<<"Before Swapping"<<endl;
    cout << "a = " << a << ", b = " << b << endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After Swapping"<<endl;
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}