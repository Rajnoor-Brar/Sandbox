#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main(){

float temp, lambda_new=0 , lambda_old, error;
int i,j,n, step=1;

cout<< setprecision(3)<< fixed;  // Show 3 digits after decimal

cout<<"Enter Order of Matrix: ";
cin>>n;

float a[n][n], x[n],x_new[n];

cout<<"Enter Tolerable Error: ";
cin>>error;

cout<<"Enter Coefficient of Matrix: "<< endl;
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        cout<<"a["<< i<<"]"<< j<<"]= ";
        cin>>a[i][j];
    }
}

cout<<"Enter Initial Guess Vector: "<< endl;
for(i=1;i<=n;i++){
    cout<<"x["<< i<<"]= ";
    cin>>x[i];
}
/////////////////////////////////////////////////////////////////////////////////////////////////

lambda_old = 1;

while(true){
  for(i=1;i<=n;i++){
    x_new[i] = 0.0;
    for(j=1;j<=n;j++){ x_new[i] += a[i][j]*x[j]; }
  }

  for(i=1;i<=n;i++){ x[i] = x_new[i]; }

  for(i=1;i<=n;i++){
    if( fabs(x[i]) > lambda_new) { lambda_new = fabs(x[i]); }
  }

  for(i=1;i<=n;i++){ x[i] /= lambda_new;}

  cout<< endl<< endl<<"STEP-"<< step<< endl;
  cout<<"Eigen Value = "<< lambda_new<< endl;
  cout<<"Eigen Vector: "<< endl;
  cout<<"[";

  for(i=1;i<=n;i++){ cout<< x[i]<<"\t"; }

  cout<<"\b\b\b]";
  step++;

  if( fabs(lambda_new-lambda_old) < error){break;}

  lambda_old=lambda_new;
}
return(0);
}
