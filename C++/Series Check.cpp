#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main(){

    float a1, a2, a3, a4, a5, choose, d1, d2, d3, d4, r1, r2, r3, r4, r5;

    cout << "Enter first five numbers of the series \n";
    cin >> a1 >> a2 >> a3 >> a4 >> a5;

    d1 = a2 - a1;
    d2 = a3 - a2;
    d3 = a4 - a3;
    d4 = a5 - a4;

    r1 = a2 / a1;
    r2 = a3 / a2;
    r3 = a4 / a3;
    r4 = a5 / a4;

    cout << "Check for \n 1.Arthemetic Progressions \n 2.Geometric Progression \nChoose ";
    cin >> choose;

    if (choose == 1) {
        if (d1 == d2 && d2 == d3 && d3 == d4) {
            cout << "\n" << "This is an Arthemitic Progression series";
        }
        else {
            cout << "\n" << "You got scammed, this isn't an A.P. :D";
        }
    }

    else {
        if (r1 == r2 && r2 == r3 && r3 == r4) {
            cout << "\n" << "This is an Geometric Progression series";
        }
        else {
            cout << "\n" << "You got scammed, this isn't an G.P. :D";
        }
    }

}
