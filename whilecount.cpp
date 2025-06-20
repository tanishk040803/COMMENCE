#include<iostream>
using namespace std;
int main() {
    int n;
      int count = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        n /= 10; // Remove the last digit
        count++; // Increment the count
    }

    cout << "Number of digits: " << count << endl;
    return 0;
}