#include "tasks.h"
#include <iostream>
#include <string>

using namespace std;

bool isNum(string s) {
    if (s.empty()) return false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] < '0' || s[i] > '9') {
            return false;
        }
    }
    return true;
}

void checkNumericConstant() {
    string s;
    cout << "--- Task 1: Check Numeric Constant ---" << endl;
    cout << "Write Something: ";
    cin >> s;
    if (isNum(s)) {
        cout << "Result: It is a numeric constant." << endl;
    } else {
        cout << "Result: It is not numeric." << endl;
    }
}


void findOperators() {
    string s;
    cout << "--- Task 2: Find Operators ---" << endl;
    cout << "Write something: ";
    cin >> s;
    float count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '=') {
            count++;
            cout << "operator" << count << ": " << s[i] << endl;
        }
    }
    if (count == 0) {
        cout << "No operators found" << endl;
    }
}


void checkCommentType() {
    string s;
    cout << "--- Task 3: Check Comment Type ---" << endl;
    cout << "Write something (e.g., //comment or /*comment*/): ";


    getline(cin, s);

    if (s.length() >= 2 && s[0] == '/' && s[1] == '/') {
        cout << "Result: Single line comment" << endl;
    } else if (s.length() >= 4 &&
               s[0] == '/' && s[1] == '*' &&
               s[s.length() - 2] == '*' && s[s.length() - 1] == '/') {
        cout << "Result: Multi-line comment" << endl;
    } else {
        cout << "Result: Not a comment" << endl;
    }
}


bool isAlphabet(char a) {
    return (a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z');
}
bool isDigit(char n) {
    return (n >= '0' && n <= '9');
}
bool isIdentifier(const string &s) {
    if (s.empty()) return false;
    if (!(isAlphabet(s[0]) || s[0] == '_')) return false;
    for (size_t i = 1; i < s.length(); ++i) {
        if (!(isAlphabet(s[i]) || isDigit(s[i]) || s[i] == '_'))
            return false;
    }
    return true;
}

void checkIdentifier() {
    string x;
    cout << "--- Task 4: Check Identifier ---" << endl;
    cout << "Enter a unique name: ";
    cin >> x;

    if (isIdentifier(x))
        cout << "Result: \"" << x << "\" is an identifier." << endl;
    else
        cout << "Result: \"" << x << "\" is not an identifier." << endl;
}

void calculateAverage() {
    int n;
    cout << "--- Task 5: Calculate Average ---" << endl;
    cout << "How many elements do you want to add? : ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: Number of elements must be greater than 0." << endl;
        return;
    }

    double* a = new double[n];
    double sum = 0;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    double average = sum / n;
    cout << "Result: The average value is: " << average << endl;

    delete[] a;
}


void findMinMax() {
    int n;
    cout << "--- Task 6: Find Min/Max ---" << endl;
    cout << "How many elements do you want to add? : ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: Number of elements must be greater than 0." << endl;
        return;
    }

    int* a = new int[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int Min = a[0];
    int Max = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < Min) Min = a[i];
        if (a[i] > Max) Max = a[i];
    }

    cout << "Minimum value: " << Min << endl;
    cout << "Maximum value: " << Max << endl;

    delete[] a;
}

void getFullName() {
    string s1;
    string s2;
    cout << "--- Task 7: Get Full Name ---" << endl;
    cout << " Enter your First Name: ";
    cin >> s1;
    cout << " Enter your Last Name: ";
    cin >> s2;
    cout << "Result: Your full name is: " << s1 << " " << s2 << "." << endl;
}
