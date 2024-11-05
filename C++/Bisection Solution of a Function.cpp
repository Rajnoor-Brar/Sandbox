#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double func(double x) {return x*x*x-x*x+2;}

void bisection(double a, double b){

  double y=func(a)*func(b);

  if(y>0){
    cout<<"Retry by shifting values on number line";
    return;
  }

  else if (y==0){
    if (func(a)==0 && func(b)!=0) {cout<<a<<" is a root";}
    else if(func(a)!=0 && func(b)==0) {cout<<b<<" is a root";}
    else if(func(a)==0 && func(b)==0) {cout<<"Both "<<a<<"and "<<b<<" are roots";}

    return;
  }
  double c,er; c=a;er=0.001;

  while (b-a>=er){
    c=(a+b)/2;

    if(func(c)==0.0){break;}
    else if(func(c)*func(a)<0){b=c;}
    else if(func(c)*func(b)<0){a=c;}
  }

  cout<<"Value of root is"<<c;
  return;
}

int main() {
  double a,b;
  cout<<"Enter end points of range to look for:"<<"\n";
  cin>>a; cout<<" to "; cin>>b;

  bisection(a,b);
  return 0;
}
