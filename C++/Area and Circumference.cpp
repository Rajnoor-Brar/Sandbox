#include <iostream>
#include <string>
using namespace std;
int main(){

    float rad, command, value;
    string operation, unit;

    cout << "Enter the Radius of the Circle" << "\n";
    cin >> rad;

    cout << "\n" << "Press key for the Operation" << "\n" << "1 for Circumference" << "\n" << "2 for Area" << "\n";
    cin >> command;

    if (command == 1) {
        value = 3.14 * 2 * rad;
        operation = "radius";
        unit = " units";
    }
    else if (command == 2) {
        value = 3.14 * rad * rad;
        operation = "area";
        unit = " sq.units";
    }
    else {
        value = 1;
        unit = "nvalid";
        operation = "command";
    }
    cout << "The " << operation << " is " << value << unit;



}
