#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>


using namespace std;

int main(){

  int i,j,k,n;
  cout<<"Enter number of variables: ";
  cin>>n;

  float a[n][n+1], x[n], ratio;
//-------------------------------------------Input-----------------------//////
  cout<<"Enter Coefficients of Augmented Matrix: "<< endl;

  for(i=1;i<=n;i++){
    for(j=1;j<=n+1;j++){
      cout<<"a["<< i<<"]["<< j<<"] = ";
      cin>>a[i][j];
    }
  }
//--------------------------------------------Process-------------------------
  for(i=1;i<=n-1;i++){

    if(a[i][i]==0){cout<<"Mathematical Error!!"; return 0;}

    for(j=i+1;j<=n;j++) { for(k=1;k<=n+1;k++) {a[j][k] -= a[j][i]/a[i][i]*a[i][k]; }}
  }

  //---------------------------------------------------------------------------
  x[n] = a[n][n+1]/a[n][n];

  for(i=n-1;i>=1;i--){
    x[i] = a[i][n+1];

    for(j=i+1;j<=n;j++) {x[i] = x[i] - a[i][j]* x[j];}

    x[i] = x[i]/a[i][i];
  }
//--------------------------------------------
  cout<< endl<<"Solution: "<< endl;

  for(i=1;i<=n;i++) {cout<<"x["<< i<<"] = "<< x[i]<< endl;  }

  return 0;
}
