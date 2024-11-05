#include <iostream>
using namespace std;

int main() {
  int row,i,j;
  cout<<"Number of rows of pattern : ";
  cin>>row;

  for(i=row;i>=1;i--){cout<<"\n"; for(j=1;j<=i;j++){cout<<j;}}
  return 0;
}
