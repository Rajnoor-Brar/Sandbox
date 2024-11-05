#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
  int n,i;

  cout << "Enter count of numbers to be entered \n";
  cin >> n;
  cout << "\nType";

  float x[n];
  string st;

  for (i=1; i<=n; i++){
    cout << "\n";
    cin >> x[i];
  }


  for (i=1; i<=n; i++){
    if (i==1) { st = "st"; }
    else if (i==2) { st = "nd" ;}
    else if (i==3) { st = "rd" ;}
    else { st = "th" ;}

    cout << "\n";
    cout << "The "<< i << st << " numbers is " << x[i];



  }
}
