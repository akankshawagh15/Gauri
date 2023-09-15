/*
Test Data: 
Input total distance in km: 350 
Input total fuel spent in litres: 5 
Expected Output:
Average consumption (km/lt) 70.00

*/

# include <iostream>
using namespace std;
int main()
{
    int distance , fuel;
    double average;
    cout<<"Test Data:"<<endl;

    cout<<"Input total distance in km:"<<" ";
    cin>> distance;
    cout<<"Input total fuel spent in litres:"<<" ";
    cin>>fuel;
    
    cout<<"Expected output"<<endl;
    average=(distance / fuel);
    cout<<"Average consumption (km/lt):"<<average;
    return 0;
}