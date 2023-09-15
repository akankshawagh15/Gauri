/*3.	Write a program that asks the user to enter a radius value and then compute the volume of a sphere 
with the input radius.*/

# include <iostream>
using namespace std;
int main ()
{
   int r;
   float pi = 3.142;
   float volume;
   
   cout <<"Enter radius of the Sphere:"<<endl;
   cin>>r;
   volume=(4*pi*r*r*r)/3;
   cout<<"Volume of the sphere: \n"<< volume << endl;
   return 0;

}
