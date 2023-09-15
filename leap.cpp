//WAP to check Leap Year.
# include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter a year:"<<endl;
    cin>>year;
    if(year % 400 == 0)
    {
        cout<<"leap year";
    }
    else if (year % 4 == 0)
    {
        cout<<"leap year";
    }
    else if (year % 100 == 0)
    {
        cout<<" Not leap year";
    }
    else{
        cout<<"Not leap year";
    }
    return 0;
    
}