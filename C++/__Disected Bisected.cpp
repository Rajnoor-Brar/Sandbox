#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double func(int type, int n, double x){
  int i,j,k;
  double semsol[21],sol=0;
  static float coefs[20];

  //----------------------------Input-------------------------------------------
  if (type==0){
    for (i=1;i<=n+1;i++) {
      k=n+1-i;

      if (i<=n) {cout<<"x^"<<k<<" ("; cin>>coefs[i];  cout<<")";  cout<<" + ";}
      else if (i==n+1) {cin>>coefs[i];  cout<<" = 0";}
    }
    //----------------Function to Display-----Just to flex----------------------
    cout<<"\n"<<"Function is:"<<"\n";

    for (i=1;i<=n+1;i++){
      if (i==1){
        if (coefs[i]!=1 && coefs[i]!=0) {k=n+1-i; cout<<coefs[i]<<"(x^"<<k<<")";}
        else if (coefs[i]==1) {k=n+1-i; cout<<"x^"<<k<<"";}
        else if (coefs[i]==0) {cout<<"0";}
      }
      else if (i<n && i!=1){
        if (coefs[i]!=1 && coefs[i]!=-1 && coefs[i]>0) {k=n+1-i; cout<<" + "<<coefs[i]<<"(x^"<<k<<")";}
        else if (coefs[i]!=1 && coefs[i]!=-1 && coefs[i]<0) {k=n+1-i; cout<<" - "<<abs(coefs[i])<<"(x^"<<k<<")";}
        else if (coefs[i]==1) {k=n+1-i; cout<<" + x^"<<k;}
        else if (coefs[i]==-1) {k=n+1-i; cout<<" - x^"<<k;}
        else if (coefs[i]==0) {continue;}
      }
      else if(i==n){
        if (coefs[i]!=1 && coefs[i]>0) {cout<<" + "<<coefs[i]<<"x";}
        else if (coefs[i]!=1 && coefs[i]<0) {cout<<" - "<<abs(coefs[i])<<"x";}
        else if (coefs[i]==1) {cout<<" + x";}
        else if (coefs[i]==-1) {cout<<" - x";}
        else if (coefs[i]==0) {continue;}
      }
      else if(i==n+1){
        if(coefs[i]>0){cout<<" + "<<coefs[i]<<" = 0";}
        else if(coefs[i]<0){cout<<" - "<<abs(coefs[i])<<" = 0";}
        else if(coefs[i]==0){cout<<" = 0";}
      }
    }
    return 0;
  }

  //-----------------------------Function---------------------------------------
  if (type==1){

    for (i=1;i<=n+1;i++) {
      k=n+1-i;
      semsol[i]=1;

      for (j=1;j<=k;j++) {semsol[i]*=x;}
      semsol[i]*=coefs[i];
    }

    for (i=1;i<=n+1;i++) {sol+=semsol[i];}
    return sol;
  }
return 0;
}

//=================================================================================================
void bisect(double a, double b, int n){

  double r,s,y,q,c,er;
  r=func(1,n,a);  s=func(1,n,b);
  y=r*s;  er=0.001;  c=0;q=0;

  if (y>0) {cout<<"Retry by shifting values on number line"; return;}

  else if (y==0) {
    if (r==0 && s!=0){cout<<a<<" is a root";}
    else if(r!=0 && s==0){cout<<b<<" is a root";}
    else if(r==0 && s==0){cout<<"Both "<<a<<"and "<<b<<" are roots";    }
  }

  else if (y<0){
    while (b-a>=er){
      c=(a+b)/2;  r=func(1,n,a);  s=func(1,n,b);  q=func(1,n,c);
      if (q == 0.0) {break;}  else if(q*r<0){b=c;}  else if(q*s<0){a=c;}
    }
    cout << "Value of root is " << c; return;
  }
  return;
}

int main() {
  int n;
  cout<<"Enter order of equation:"<<"\n"; cin>>n;
  func(0,n,0);

  double a,b;
  cout<<"\n"<<"Enter end points of range to look for:"<<"\n";
  cin>>a; cout<<" to "; cin>>b;

  bisect(a,b,n);
  return 0;
}
