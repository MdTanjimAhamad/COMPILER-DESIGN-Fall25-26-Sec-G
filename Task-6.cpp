#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many elements do you want to add ? : ";
    cin >> n;

    int a[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int Min = a[0];
    int Max = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < Min)
            Min = a[i];
        if (a[i] > Max)
            Max = a[i];
    }

    cout << "Minimum value: " << Min << endl;
    cout << "Maximum value: " << Max << endl;

    return 0;
}
