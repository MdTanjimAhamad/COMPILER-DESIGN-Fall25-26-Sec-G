#include <iostream>
#include "tasks.h"

using namespace std;

void displayMenu() {
    cout << "\n========= C++ Task Runner ==========" << endl;
    cout << "1. Check Numeric Constant" << endl;
    cout << "2. Find Operators" << endl;
    cout << "3. Check Comment Type" << endl;
    cout << "4. Check Identifier" << endl;
    cout << "5. Calculate Average" << endl;
    cout << "6. Find Min/Max" << endl;
    cout << "7. Get Full Name" << endl;
    cout << "0. Exit" << endl;
    cout << "====================================" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice;

    do {
        displayMenu();

        if (!(cin >> choice)) {
            cout << "Error: Please enter a valid number." << endl;
            cin.clear();

            choice = -1;
            continue;
        }

        cout << endl;

        switch (choice) {
            case 1:
                checkNumericConstant();
                break;
            case 2:
                findOperators();
                break;
            case 3:
                checkCommentType();
                break;
            case 4:
                checkIdentifier();
                break;
            case 5:
                calculateAverage();
                break;
            case 6:
                findMinMax();
                break;
            case 7:
                getFullName();
                break;
            case 0:
                cout << "Exiting application. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}
