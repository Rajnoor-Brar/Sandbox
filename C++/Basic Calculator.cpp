#include <iostream>
#include <string>
using namespace std;
int main()
{
    float a, b, result, oper;
    string command, inval="";

    cout << "Enter First Number "; cin >> a;

    cout << "\n" << "Enter Second Number "; cin >> b;

    cout << "\n" << "Press key for the Operation" << "\n" << "1 for Addition" << "\n" << "2 for Subtraction";
    cout << "\n" << "3 for Multiplication" << "\n" << "4 for division" << "\n";
    cin >> oper;

    if (oper == 1) {result = a + b; command = "sum";    }
    else if (oper == 2) {result = a - b; command = "difference";}
    else if (oper == 3) {result = a * b; command = "product";}
    else if (oper == 4) {result = a / b; command = "quotient";}
    else {result = 1; command = "operation"; inval = "nvalid";}

    cout << "\n" << "The " << command << " is " << result << inval;
    return 0;
}
