#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
  int n,i,j,k;

  cout<<"Enter order of equation:"<<"\n";
  cin>>n;

  float coefs[n+1],x[n];
  double semsola[n+1],semsolb[n+1],semsol[n+1],sola,solb,sol,a,b,c;
  sola=0;solb=0;sol=0;

//-------------------------------Function-Definition-----------------------------------
  for(i=1;i<=n+1;i++){
    k=n+1-i;

    if (i<=n) {
      cout<<"x^"<<k<<" (";
      cin>>coefs[i];
      cout<<")";
      cout<<" + ";
    }
    else if(i==n+1){
      cin>>coefs[i];
      cout<<" = 0";
    }
  }
  //----------------Function Display------------------------
  cout<<"\n"<<"Function is:"<<"\n";

  for (i=1;i<=n+1;i++){
    if (i<n){
      if(coefs[i]!=1 && coefs[i]!=0){k=n+1-i; cout<<coefs[i]<<"(x^"<<k<<") + ";}
      else if(coefs[i]==1){k=n+1-i; cout<<"x^"<<k<<" + ";}
      else if(coefs[i]==0){continue;}
    }
    else if(i==n){
      if(coefs[i]!=1 && coefs[i]!=0){cout<<coefs[i]<<"x + ";}
      else if(coefs[i]==1){k=n+1-i;cout<<"x + ";}
      else if(coefs[i]==0){continue;}
    }
    else if(i==n+1){
      if(coefs[i]!=0){cout<<coefs[i]<<" = 0";}
      else if(coefs[i]==0){cout<<"= 0";}
    }
  }

  //-----------------------------------Calculation----------------------------------------------------

  cout<<"\n"<<"Enter the range to check for: ";
  cin>>a; cout<<" to ";cin>>b;
  //----------------------------------f(a)---------------------------
  for(i=1;i<=n+1;i++){
    k=n+1-i;
    semsola[i]=1;

    for(j=1;j<=k;j++){semsola[i]=semsola[i]*a;}

    semsola[i]=coefs[i]*semsola[i];
  }

  for(i=1;i<=n+1;i++){sola=sola+semsola[i];}
  //----------------------------------f(b)-----------------------------
  for(i=1;i<=n+1;i++){
    k=n+1-i;
    semsolb[i]=1;

    for(j=1;j<=k;j++){semsolb[i]=semsolb[i]*b;}

    semsolb[i]=coefs[i]*semsolb[i];
  }

  for(i=1;i<=n+1;i++){solb=solb+semsolb[i];}

  //---------------------------------Intial - Check--------------------------------
  double y=sola*solb;

  if(y>0){
    cout<<"Retry by shifting values on number line";

    return 0;
  }

  else if (y==0){
    if (sola==0 && solb!=0){cout<<a<<" is a root";}
    else if(sola!=0 && solb==0){cout<<b<<" is a root";}
    else if(sola==0 && solb==0){cout<<"Both "<<a<<" and "<<b<<" are roots";}
    return 0;
  }

  double er; c=a;er=0.001;

  while (b-a>=er){
    c=(a+b)/2;
    //----------------------------------f(a)---------------------------
    for(i=1;i<=n+1;i++){
      k=n+1-i;
      semsola[i]=1;

      for(j=1;j<=k;j++){semsola[i]=semsola[i]*a;}

      semsola[i]=coefs[i]*semsola[i];
    }

    for(i=1;i<=n+1;i++){sola=sola+semsola[i];}
    //----------------------------------f(b)-----------------------------
    for(i=1;i<=n+1;i++){
      k=n+1-i;
      semsolb[i]=1;

      for(j=1;j<=k;j++){semsolb[i]=semsolb[i]*b;}

      semsolb[i]=coefs[i]*semsolb[i];
    }

    for(i=1;i<=n+1;i++){solb=solb+semsolb[i];}

    //----------------------------------f(c)-----------------------------
    for(i=1;i<=n+1;i++){
      k=n+1-i;
      semsol[i]=1;

      for(j=1;j<=k;j++){semsol[i]=semsol[i]*c;}

      semsol[i]=coefs[i]*semsol[i];
    }

    for(i=1;i<=n+1;i++){sol=sol+semsol[i];}

    if(sol==0.0){break;}
    else if(sol*sola<0){b=c;}
    else if(sol*solb<0){a=c;}
  }

  cout<<"Value of root is "<<c;

  return 0;
}
