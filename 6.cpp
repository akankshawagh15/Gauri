/*Write a program which takes username as input and it greets to user with his name.*/

# include <iostream>
using namespace std;
int main()
{
    char firstname [50] ;
    char lastname [50];
    cout<<"Enter firstname:"<<endl;
    cin>> firstname;
    cout<<"Enter lastname:"<<endl;
    cin>> lastname;
    cout<<"hello!! "<<firstname << " " <<lastname<<endl;
    cout<<"Nice to meet you!";
    return 0;
    

}