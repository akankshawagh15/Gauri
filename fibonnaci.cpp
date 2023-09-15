#include <iostream>
using namespace std;

int main() {
    int n1 = 0, n2 = 1, sum, num;

    cout << "Enter a positive number: ";
    cin >> num;

    // displays the first two terms which is always 0 and 1
    cout << "Fibonacci Series: " << n1 << ", " << n2 << ", ";

    sum = n1 + n2;

    while(sum <= num) {
        cout << sum << ", ";
        n1 = n2;
        n2 = sum;
       sum = n1 + n2;
    }
    return 0;
}