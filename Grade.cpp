/*Write a program that will give the grade of the student based on the percentage he got in the course.
Use the following criteria for assigning grades:
Grade = A  ( when percentage >= 60)
Grade = B  ( when percentage >= 50 and percentage < 60)
Grade = C  ( when percentage >= 40 and percentage < 50)
Grade = D  ( when percentage >= 40 and percentage < 50)
Grade = E  ( when percentage >= 20 and percentage < 30)
*/

# include <iostream>
using namespace std;
int main()
{
    int percentage;
    cout<<"grade of the student based on the percentage:"<<endl;
    cout<<"Percentage of the student:"<<" ";
    cin>>percentage;
    if(percentage >= 60){
        cout<<"Grade A"<<endl;
    }
    else if(percentage >= 50 and percentage < 60){
        cout<<"Grade A"<<endl;
    }
    else if(percentage >= 40 and percentage < 50){
        cout<<"Grade A"<<endl;
    }
    else if(percentage >= 40 and percentage < 50){
        cout<<"Grade A"<<endl;
    }
    else if( percentage >= 20 and percentage < 30){
        cout<<"Grade A"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }
    return 0;
}