#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "how many elements do you want to add ? : ";
    cin >> n;


    double a[n], sum = 0;


    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }


    double average = sum / n;


    cout << "The average value is: " << average;

    return 0;
}
