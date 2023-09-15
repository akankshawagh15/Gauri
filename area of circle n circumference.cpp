# include <iostream>
using namespace std;
int main()
{
    float radius, area , circumference;
    float pi = 3.142;
    cout<<"Calculate area of circle:"<< endl;
    cout<<"Enter radius:"<<" ";
    cin>> radius;
    area=(pi * radius * radius);
    cout<<"Area of circle:"<<area<<endl;
    
    cout<<"Calculate circumference of circle"<<endl;
    circumference = (2 * pi * radius);
    cout<<"circumference of the circle:"<<circumference<<endl;
    return 0;
}