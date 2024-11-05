#include <iostream>
using namespace std;

int main() {
  int row,i,j;
  cout<<"Number of rows of pattern : ";
  cin>>row;

  for(i=1;i<=row;i++){cout<<"\n"; for(j=1;j<=i;j++){cout<<"*";}}

  return 0;
}
