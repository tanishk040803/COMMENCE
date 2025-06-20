#include<iostream>
using namespace std;
int main() {
    int n;
      int count = 0;
    cout << "Enter a number: ";
    cin >> n;
    
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            count++;
        }
        n /= 10;
    }

    cout << "Number of odd digits: " << count << endl;
    return 0;
}