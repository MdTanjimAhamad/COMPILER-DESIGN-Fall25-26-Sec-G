#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isFinalState(int state) {
    return (state == 1 || state == 3 || state == 5 || state == 7);
}

int main() {
    int transitionTable[10][2] = {
        {1, 2},
        {3, 4},
        {5, 6},
        {3, 4},
        {7, 9},
        {3, 8},
        {1, 6},
        {3, 3},
        {5, 6},
        {9, 9}
    };

    string input;
    cout << "Enter input string (a/b only): ";
    cin >> input;

    int currentState = 0;

    cout << "Processing: Start(0) ";

    for (char c : input) {
        int col = -1;
        if (c == 'a') col = 0;
        else if (c == 'b') col = 1;
        else {
            cout << "\nInvalid character detected!" << endl;
            return 1;
        }


        currentState = transitionTable[currentState][col];
        cout << "-> " << c << " -> " << currentState << " ";

        if (currentState == 9) break;
    }

    cout << endl;

    if (isFinalState(currentState)) {
        cout << "Result: ACCEPTED" << endl;
    } else {
        cout << "Result: REJECTED" << endl;
    }

    return 0;
}
