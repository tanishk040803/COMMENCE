#include <iostream>
using namespace std;

int main() {
    int choice;
    float a, b;

    do {
        cout << "Welcome to the EZ Calculator!\n";
        cout << "Enter 1 for Addition\n";
        cout << "Enter 2 for Subtraction\n";
        cout << "Enter 3 for Multiplication\n";
        cout << "Enter 4 for Division\n";
        cout << "Enter 5 to Exit\n";

        cout << "Choose an option: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch (choice) {
            case 1:
                cout << "Sum: " << a + b << endl;
                break;
            case 2:
                cout << "Difference: " << a - b << endl;
                break;
            case 3:
                cout << "Product: " << a * b << endl;
                break;
            case 4:
                if (b != 0) {
                    cout << "quotient: " << a / b << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            case 5:
                cout << "Exiting the calculator. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}
