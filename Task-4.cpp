#include <iostream>
#include <string>
using namespace std;


bool isAlphabet(char a) {
    return (a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z');
}


bool isDigit(char n) {
    return (n >= '0' && n <= '9');
}

bool isIdentifier(const string &s) {
    if (s.empty())
        return false;

    if (!(isAlphabet(s[0]) || s[0] == '_'))
        return false;

    for (size_t i = 1; i < s.length(); ++i) {
        if (!(isAlphabet(s[i]) || isDigit(s[i]) || s[i] == '_'))
            return false;
    }

    return true;
}


int main() {
    string x;
    cout << "Enter a unique name: ";
    cin >> x;

    if (isIdentifier(x))
        cout << "\"" << x << "\" is a identifier." << endl;
    else
        cout << "\"" << x << "\" is not a identifier." << endl;

    return 0;
}
