#include <iostream>
#include <cmath>

using namespace std;

float func(float x){
  return exp(x)*sin(x);
}

int main(){
  float a,h;

  cout<<"Enter value of function : ";
  cin>>a;
  cout<<"Enter precision of limit : ";
  cin>>h;

  float diff1=(func(a+h)-func(a))/h;
  float diff2=(func(a+h)-func(a-h))/(2*h);
  float diff3=(func(a+2*h)-func(a-2*h))/(4*h);
  float diff=(diff1+diff2+diff3)/3;

  cout<<"Derivative at "<<a<<" is " <<diff;

  return 0;
}
