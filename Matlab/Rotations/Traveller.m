clc; clear;

r0     = 5 ;
theta0 = 0 ;
k0     = 2 ;

t= 2;

Vr0    = [0 ; 0 ; 0] ;
Vk0    = [0 ; 0 ; 0] ;
omega0 = [0 ; 0 ; 3] ;
A      = [0 ; 0 ; 0] ;

N = [0 ; 0 ; 1];
U = [1 ; 0 ; 0];

N = N/norm(N);
U = cross(N, cross(U,N));
U = U/norm(U);
V = cross(N,U);

Er0 = cos(theta0)*U + sin(theta0)*V;
Eo0 = cos(theta0)*V - sin(theta0)*U;

S0 = r0*Er0 + k0*N0;
V0 = Vr0 + Vk0 + cross(omega0,S0);

S = S0 + V0*t + 0.5*A*t^2 ;
V = V0 + A*t ;

