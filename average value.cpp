/*WAP for two item’s weight (floating points' values) and number of purchase (floating points' values)
 and calculate the average value of the items.
Test Data: 
Weight - Item1: 15
No. of item1: 5 
Weight - Item2: 25 
No. of item2: 4 
Expected Output:
Average Value = 19.444444
*/
# include <iostream>
using namespace std;
int main()
{
    int w1,w2 , i1,i2;
    double avg,s1,s2;
    cout<<"Test Data:"<<endl;

    cout<<"Weight of item 1:"<<" ";
    cin>> w1;
    cout<<"Number of item1:"<<" ";
    cin>>i1;
    
    cout<<"Weight of item 2:"<<" ";
    cin>> w2;
    cout<<"Number of item2:"<<" ";
    cin>>i2;

    cout<<"Expected output"<<endl;
    s1=(w1 * i1)+(w2 * i2);
    s2=(i1 + i2);
    avg=(s1 / s2);
    cout<<"Average Value:"<<avg;
    return 0;
}