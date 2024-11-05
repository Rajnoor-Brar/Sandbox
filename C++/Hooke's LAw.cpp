
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    int i,j,k,n;
    cout<<"\nEnter the no. of data pairs to be entered:\n";
    cin>>n;
    double x[n],y[n],a,b;

    cout<<"\nEnter the x-axis values:\n";
    for (i=1;i<=n;i++){cout<<i<<". "; cin>>x[i];}
    cout<<"\nEnter the y-axis values:\n";
    for (i=1;i<=n;i++){cout<<i<<". "; cin>>y[i];}

    double xs=0,x2s=0,ys=0,xys=0;

    for (i=1;i<=n;i++){
        xs+=x[i];
        ys+=y[i];
        x2s+=pow(x[i],2);
        xys+=x[i]*y[i];
    }

    a=(n*xys-xs*ys)/(n*x2s-xs*xs);
    b=(x2s*ys-xs*xys)/(x2s*n-xs*xs);
    double y_fit[n];

    for (i=1;i<=n;i++){y_fit[i]=a*x[i]+b;}
    cout<<"S.no"<<setw(5)<<"x"<<setw(19)<<"y(observed)"<<setw(19)<<"y(fitted)"<<endl;
    cout<<"-----------------------------------------------------------------\n";

    for (i=1;i<=n;i++){cout<<i<<"."<<setw(8)<<x[i]<<setw(15)<<y[i]<<setw(18)<<y_fit[i]<<endl;}
    cout<<"\nThe linear fit line is of the form:\n\n"<<a<<"x + "<<b<<endl;
    return 0;
}
