#include <iostream>
using namespace std;

int main() {
  int row,i,j;  char sym;
  cout<<"Number of rows of pattern : ";  cin>>row;
  cout<<"Enter symbol of pattern : ";  cin>>sym;
  for(i=1;i<=row;i++){
      cout<<"\n";
      for(j=1;j<=(row-i);j++)   {cout<<" ";}
      for(j=1;j<=(2*i-1);j++)   {cout<<sym;}
  }
  return 0;
}
