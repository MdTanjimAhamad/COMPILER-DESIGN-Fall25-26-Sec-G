#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    cout << "Write something: ";
    cin >> s;
    float count=0;


    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '=') {
            count++;
            cout << "operator" << count << ": " << s[i] << endl;
        }
    }

    if (count == 0) {
        cout << "No operators found" << endl;
    }

    return 0;
}
