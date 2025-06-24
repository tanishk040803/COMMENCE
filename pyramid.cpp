#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    

    for (int i = 1; i <= n; i++) { // for inverted centered pyramid:for( i=n;i>=1;i--)
        // print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " "; // " " single space between them is neccesary 
        // if we gave it two spaces it will behave like right alligned triangle. 
        // like this "  "
        }

        // print stars
        for (int k = 1; k <= i; k++) {
            cout << k << " ";  // " " single space between them is neccesary.
        }

        cout << endl;
    }

    return 0;
}