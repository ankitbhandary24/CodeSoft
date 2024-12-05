#include <iostream>
using namespace std;

void showMenu() {
    cout << "Basic Calculator" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "Enter your choice: ";
}

int main() {
    double num1, num2;
    int choice;
    bool running = true;

    while (running) {
        showMenu();
        cin >> choice;

        if (choice < 1 || choice > 4) {
            cout << "Invalid choice. Please try again." << endl;
            continue;
        }

        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        switch (choice) {
            case 1:
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 == 0) {
                    cout << "Error: Division by zero is not allowed." << endl;
                } else {
                    cout << "Result: " << num1 / num2 << endl;
                }
                break;
        }

        char repeat;
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> repeat;
        if (repeat != 'y' && repeat != 'Y') {
            running = false;
        }
    }

    cout << "Thank you for using the calculator. Goodbye!" << endl;
    return 0;
}
