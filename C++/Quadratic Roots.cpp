#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main() {

    float a, b, c, d, e, f, r1, r2, nature, semroot;

    cout << "Fill in co-effients of equation: [x^2 (";
    cin >> a;
    cout << ") + x (";
    cin >> b;
    cout << ") + ";
    cin >> e;
    cout << " = ";
    cin >> f;
    d = e - f;
    cout << "\n" << "Equation is (" << a << ")x^2 + (" << b << ")x + " << d << " = 0" << "\n";

    nature = (b * b) - (4 * a * d);

    if (nature >= 0) {
        r1 = (-b - sqrt(nature)) / (2 * a);
        r2 = (-b + sqrt(nature)) / (2 * a);

        if (nature == 0) {
            cout << "Both roots are equal to " << r1;
        }
        else {
            cout << "Roots are " << r1 << " and " << r2;
        }
    }

    else if (nature < 0) {
        r1 = -b / (2 * a);
        r2 = -b / (2 * a);
        semroot = (sqrt(abs(nature))) / (2 * a);

        cout << "Roots are " << r1 << "-" << semroot << " and " << r2 << "+" << semroot;
    }


}
