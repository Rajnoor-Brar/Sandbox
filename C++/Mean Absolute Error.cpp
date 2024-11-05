#include <iostream>
#include <cmath>

using namespace std;

int main() {

  int i,n;

  cout<<"Enter the Number of Values in Data Set : ";
  cin>>n;
  
  float value[n], average=0, error=0;

  cout<<"\n"<<"Enter the Values"<<"\n";

  for(i=1;i<=n;i++) {cout<<i<<". ";  cin>>value[i];}

  for(i=1;i<=n;i++) {average+=value[i];}

  average/=n;

  for(i=1;i<=n;i++) {error += abs(average-value[i]);}

  error/=n;

  cout<<"Mean Absolute Error is "<<error;

  return 0;

}
