fname="curves.txt";

impdata = load(fname,"~ascii");

roundness=0.01;                     % Lower value will make cylinder more round

showCrossSections = 1;
cross_density=15;                   % Higher Value will reduce number of cross-sections, must be a positive integer

showCoaxialLines = 0;
coax_density=int16(0.8/roundness);

showAxis = 1;

p   = impdata(1,:);
q   = impdata(2,:);
r   = impdata(3,:);
u   = impdata(4,:);
v   = impdata(5,:);
w   = impdata(6,:);

minor = impdata(7,:);
focal = sqrt( (p-u).^2 + (q-v).^2 + (r-w).^2);
major = sqrt(focal.^2 / 4 + minor.^2);

x=(p+u)/2;
y=(q+v)/2;
z=(r+w)/2;

clear impdata;
