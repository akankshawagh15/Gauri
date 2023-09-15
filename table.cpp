/*WAP for printing multiplication table of a number. For eg. Display should     be “ 2 X 1 = 2*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    
    return 0;
}