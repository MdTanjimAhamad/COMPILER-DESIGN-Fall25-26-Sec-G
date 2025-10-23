#include <iostream>
#include <string>

using namespace std;

bool isNum(string s) {
    for(int i = 0; i < s.length(); i++) {
        if(s[i] < '0' || s[i] > '9') {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cout<<"Write Something:";
    cin >> s;

    if (!s.empty() && isNum(s)) {
        cout << "numeric constant" << endl;
    } else {
        cout << "not numeric" << endl;
    }

    return 0;
}
