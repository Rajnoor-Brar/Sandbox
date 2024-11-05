#include <iostream>
using namespace std;
int main() {
    float a, b, c;
    cout << "Enter the Numbers to be compared\n";

    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "All of them are equal \n";
    }
    else if (a > b && b > c) {
        cout << a << " is the largest number";
    }
    else if (b > a && b > c) {
        cout << b << " is the largest number";
    }
    else if (c > a && c > b) {
        cout << c << " is the largest number";
    }

}
