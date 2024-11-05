#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double derive(float x, float y){
  double z=sin(x*x*y);
  return z;
}

double integrate(float a, float b, float x, float n){
  double h=(x-a)/n, k[4], y=b;
  x=a;

  for(int i=1; i<=n; i++){
    k[1]= h * derive (x, y);
    k[2]= h * derive (x + 0.5*h, y + 0.5*k[1]);
    k[3]= h * derive (x + 0.5*h, y + 0.5*k[2]);
    k[4]= h * derive (x + h, y + k[3]);

    y+= (k[1] + 2*k[2] + 2*k[3] + k[4])/6;
    x+=h;
  }
  return y;
}

int main(){
  float a,b,x,n;

  cout<<"Enter the initial value of x : "; cin>>a;
  cout<<" and the corresponding value of y : "; cin>>b;
  cout<<"Enter the value of x to be processed : "; cin>>x;
  cout<<" and count of steps : "; cin>>n;
  cout<<"The result is "<<integrate(a,b,x,n);

  return 0;
}
