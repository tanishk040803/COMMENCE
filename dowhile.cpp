#include <iostream>
using namespace std;

int main() {
     int n;
     cin>>n;
      int product=1;
      cout<< "Enter a number: " << n << endl;
      if(n == 0) {  
          cout << "Product of digits: 0" << endl;
          return 0;
      }

      while(n>0) {
          int digit = n % 10;
          product *= digit;
          n /= 10;
      }
        cout << "Product of digits: " << product << endl;
    return 0;
}