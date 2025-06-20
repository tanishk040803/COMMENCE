#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;

    while (n > 0) {
        int digit = n % 10;     // Get last digit
        if (digit % 2 == 0) {   // Check if even and for odd digits (digit%2!=0)
            sum =  sum+digit;       // Add to sum
        }
        n /= 10;                // Remove last digit
    }

    cout << "Sum of even digits: " << sum << endl;

    return 0;
}