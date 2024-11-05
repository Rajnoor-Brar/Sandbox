#include <iostream>
using namespace std;

double expo(float term, int power){
  double val=1; int i;
  if (power==0){val=1;}
  if (power>0){for (i=1;i<=power;i++){val*=term;}}
  if (power<0){for (i=1;i<=-1*power;i++){val*=term;} val=1/val;}
  return val;
}

double fac(int x){
  int i; double val=1;
  for (i=1;i<=x;i++){val*=i;}  return val;
}

float preprocess(float x){
  double pi=3.14159265;
//Reduction of x beyond {-2π,2π}
  while(x>=(2*pi)) {x-=2*pi;}
  while(x<=(-2*pi)) {x+=2*pi;}

//Reduction of x between {2π, π}
  if(x>=pi) {x=pi-x;}                                  // sin(π-x) = sin x                ,  2π >x> 0
  if(x<=-1*pi)  {x=-1*(pi+x);}                         // sin(-π-x) = sin x               , -2π <x< 0

//Reduction of x between {π, π/2}
  if(x>pi/2 && x<=pi) {x=pi-x;}                       // sin(π-x) = sin(x)                ,  π> x> 0
  if(-1*x>pi/2 && -1*x<=pi) {x=-1*(pi+x);}            // sin(-π-x) = sin (x)              , -π <x< 0

  return x;
}

double calcsin(float x,float acc){
  double val=0;
  int i,j;

  x=preprocess(x);

  for (i=1; i<=acc; i++)  {
    j=2*i-1;
    val+=( expo(-1, i+1)*expo(x,j)/fac(j) );
  }
  return val;
}

int main() {
  float x,acc;
  cout<<"Enter the accuracy : "; cin>>acc;
  cout<<"Enter value : "; cin>>x;

  cout<<"Sin of "<<x<< " is "<< calcsin(x,acc);
  return 0;
}
