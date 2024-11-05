#include <iostream>
#include <cmath>

using namespace std;

void piePoint(int n){
  double pie=2*acos(0);
  printf("%0.*F",n,pie);
}

int main(){
  int n;
  cout<<"Enter the number of digits of pi to be outputted :"
  cin>>n;
  piePoint(n);
  return 0;
}
