

# include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Calculate number is divisible by 5 or not"<<endl;
    cout<<"Enter a number:"<<" ";
    cin>>num;
    if(num % 5 ==0){
        cout<<"Number is divisible by 5"<<endl;
    }
    else
    {
         cout<<"Number is not divisible by 5"<<endl;
    }
    return 0;
}