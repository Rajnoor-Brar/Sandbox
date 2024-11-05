#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
  int n,i;

  cout << "Enter count of numbers to be added \n";
  cin >> n;
  cout << "\nType the numbers:";

  float x[n], max;

  i=1;
  sum=0;
  max=0;

  for (i=1; i<=n; i++){
    cout << "\n";
    cin >> x[i];
  }


  for (i=1; i <= n; i++){
    if(max < x[i]){
      max=x[i];
    }
  }

  cout << "The Largest Number is "<<max;

  return 0;
}
