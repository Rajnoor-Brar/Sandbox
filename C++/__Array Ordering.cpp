#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
  int n,i,j,ad;

//-------------------------------------------------Input-----------------------------------------------

  cout << "Enter count of numbers to be ordered \n";
    cin >> n; cout<<"\n";
  cout<<"Enter 1 for Ascending Order"<<"\n"<<"     2 for Decending Order"<<"\n";
  cin>>ad;
  cout <<"\n"<< "Type the numbers:";

  if(n<0){n=-1*n;}
  float x[n],

  for (i=1; i<=n; i++){
    cout << "\n";
      cin >> x[i];
  }

//-----------------------------------------------Processing------------------------------------------------
  for (j=1; j<=n-1; j++){
    for (i=j+1; i<=n; i++){
      if (x[j] < x[i]){
        a=x[i]; b=x[j];
        x[j]=a; x[i]=b;
      }
    }
  }

//-------------------------------------------------OutPut-----------------------------------------------------
  if(ad==1){
    cout<<"\n"<<"\n"<<"Ascending order of Array is :";

    for (i=n; i>=1; i--){
      cout<<"\n"<<order[i];
    }
  }

  else if(ad==2){
    cout<<"\n"<<"\n"<<"Decending order of Array is :";

    for (i=1; i<=n; i++){cout<<"\n"<<order[i];}
  }

  else {
    cout<<"Invalid Order Command";
  }

  return 0;
}
