clc; clear;

g = 9.8;
a = 5;
b = 15;

time = 41.5;
nSteps = 1000;

arrowSparse= int16(nSteps/4);

phi0 = pi/6;
omegaPhi0 = 2;

theta0 = pi/3;
omegaTheta0 = 0;

alphaPhi0 = 0;
alphaTheta0 = 0;

dt = (time)/nSteps;

alphaTheta = alphaTheta0;    alphaPhi  = alphaPhi0;     
omegaTheta = omegaTheta0;    omegaPhi  = omegaPhi0;
     theta =      theta0;         phi  =      phi0;

RecordPhi = zeros(nSteps+1,1);
RecordTheta = zeros(nSteps+1,1);

RecordTheta(1) = theta;
RecordPhi(1) = phi;

for n = 1:nSteps
    alphaTheta = -g/b*sin(theta) - a/b* sin(theta-phi)* omegaPhi^2;

    omegaPhi = omegaPhi + alphaPhi*dt;
    omegaTheta = omegaTheta + alphaTheta*dt;

    theta = theta + omegaTheta * dt;
    phi = phi + omegaPhi*dt;

    RecordTheta(n+1) = theta;
    RecordPhi(n+1) = phi;

end

hingeX = a*sin(RecordPhi);
hingeY = b + a*(1 - cos(RecordPhi));

ballX =  a*sin(RecordPhi)+ b*sin(RecordTheta);
ballY = a*(1-cos(RecordPhi)) + b*(1-cos(RecordTheta));

pendX = ballX-hingeX;
pendY = ballY-hingeY;

f1 = figure("Name", 'Pendulum on Ring',"NumberTitle","off");

plot(hingeX,hingeY);
hold on;
plot(ballX,ballY,'color','m');

% pendulum = quiver(hingeX(1:arrowSparse:end),hingeY(1:arrowSparse:end), pendX(1:arrowSparse:end),pendY(1:arrowSparse:end),"off",'color',"r","marker","+");
% pendulum.MaxHeadSize = 0; 
% scatter(hingeX(1:arrowSparse:end),hingeY(1:arrowSparse:end),"r.");
% scatter(ballX(1:arrowSparse:end),ballY(1:arrowSparse:end),"r.");

axis equal;
hold off;