#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
  int n,i;

  cout << "Enter count of numbers to be added \n";
  cin >> n; cout<<"\n";
  cout << "Type the numbers:";

  if(n<0){n=-1*n;}

  float x[n], sum; sum=0;

  for (i=1; i<=n; i++){
    cout << "\n";
    cin >> x[i];
  }


  for (i=1; i<=n; i++){
    sum = sum + x[i];

  }

  cout << "The Summation is "<<sum;

  return 0;
}
