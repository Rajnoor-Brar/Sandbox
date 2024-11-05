#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

  int a,x,sum;

  a=0;

  while(a==0){

    cout << "Enter the number whose digits are to be added" << "\n";
    cin >> x;
    sum=0;

    while(x!=0){
      sum = sum + (x % 10);
      x= (  x-(x % 10) ) / 10;
    }

    cout << "\n" << "Sum of the digits is " << sum << "\n";

    cout << "Press 0 for another calculation, or, any other number to terminate\n";
    cin >> a;

  }


}
