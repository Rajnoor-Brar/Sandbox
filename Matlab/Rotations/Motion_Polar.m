clc; clear;

beta = 10;

r0 = 10;
w0 = 3;
theta0 = 0;
vr0 = 0;
vk0 = 0;
dt=0.01;

v_offset = [0 ; 0 ; 0];

arrowSparse = 15;
vectorScale=2;

a_ex = [0 ; 0 ; 0];

Gpoint = [0 ; 2 ; 7];
Gfactor = w0^2*r0^3+1000;

Center = [0 ; 0 ; 0];
V_center = [0 ; 0 ; 0];
A_center = [0 ; 0 ; 0];

N = [0 ; 0 ; 1];
U = [1 ; 0 ; 0];

N = N/norm(N);
U = cross(N, cross(U,N));
U = U/norm(U);
V = cross(N,U);

theta = theta0;
r = r0;
w = w0;

Er = cos(theta)*U + sin(theta)*V;
Et = cos(theta)*V - sin(theta)*U;

S = r*Er+Center;

timeScale=100;

dt=dt/timeScale;
tEnd = 30;
nSteps = floor(tEnd/dt) + 1;

arrowSparse = int32(arrowSparse*0.001/dt);

v = vr0 * Er + 2*cross(w0*N, S) + vk0*N + v_offset;

LinearRecordS  = zeros(nSteps, 3);
LinearRecordV  = zeros(nSteps, 3);
LinearRecordEr = zeros(nSteps, 3);
LinearRecordEt = zeros(nSteps, 3);

v_theta = norm(cross(w0*N, S));
a_cp = (v_theta^2/r);
a = -1*a_cp*Er + a_ex;

P = S;

radius = norm(P);
vr = v'* P/norm(P);

phi = theta0;
omega = cross(P,v)/(norm(P)^2);

Normal = omega/norm(omega);
Radial = P/norm(P);
Tangent = cross(Normal,Radial);

PolarRecordP  = zeros(nSteps, 3);
PolarRecordN  = zeros(nSteps, 3);
PolarRecordEr = zeros(nSteps, 3);
PolarRecordEt = zeros(nSteps, 3);
PolarRecordC  = zeros(nSteps, 3);

ErrorRadius=zeros(nSteps,1);
ErrorRadial=zeros(nSteps,1);
ErrorTangent=zeros(nSteps,1);

k = 1;

for t=0:dt:tEnd
    % a = -1*a_cp*Er + a_ex - Gfactor*(S-Gpoint)/(norm(S-Gpoint)^3);
    a = -2*beta*radius*Er ;

    v = v+a*dt;
    S = S+v*dt;

    R = S - dot(S,N)*N;

    Er = R/norm(R);
    Et = cross(N,Er);

    % ---------
% a = -1*a_cp*Er + a_ex - Gfactor*(P-Gpoint)/(norm(P-Gpoint)^3);
    ar = dot(a,Radial) + norm(omega)^2*radius;
    alpha = (cross(P,a) - 2*radius*vr*omega)/(radius^2);

    vr = vr + ar*dt;
    omega = omega + alpha*dt;
    Ndot = (cross(P,dot(a,Normal)*Normal))/(norm(P)^2*norm(omega));
    dRadial = norm(omega)*dt*Tangent;
    dTangent =  -norm(omega)*dt*Radial + dot(a,Normal)*Normal*dt/(radius*norm(omega));


    radius = radius + vr*dt;
    phi = phi + norm(omega)*dt;


    % Ndot = (alpha-(alpha'*Normal)*Normal)/norm(omega);
    Radial = Radial + dRadial;
    Tangent = (Tangent+dTangent); 
    Tangent = Tangent/norm(Tangent);

    P = radius*Radial;
    radius = norm(P);
    Radial = P/norm(P);

    Normal = Normal+Ndot*dt;
    Normal = Normal/norm(Normal);
    % Tangent = cross(Normal,Radial);
  


    %-----------

    LinearRecordS (k,:) = S ;
    LinearRecordV (k,:) = v ;
    LinearRecordEr(k,:) = -Er;
    LinearRecordEt(k,:) = Et;

    PolarRecordP (k,:) = P;
    PolarRecordEr(k,:) = -Radial;
    PolarRecordEt(k,:) = Tangent;
    PolarRecordN (k,:) = Normal;

    ErrorRadius(k) = norm(S)-norm(P);
    ErrorRadial(k) = acosd(dot(S,P)/(norm(S)*norm(P)));
    ErrorTangent(k)= acosd(dot(v,Tangent)/(norm(v)*norm(Tangent)));


    k=k+1;

end

f1 = figure("Name", 'Rotate till '+string(tEnd)+"s - "+string(dt),"NumberTitle","off");
PathCartesian = plot3(LinearRecordS(:,1),LinearRecordS(:,2),LinearRecordS(:,3),"Color","#D95319",LineStyle="-");
hold on;
StartCartesian =  plot3(LinearRecordS(1,1),LinearRecordS(1,2),LinearRecordS(1,3),"x","Color","#D95319");
EndCartesian = plot3(LinearRecordS(end,1),LinearRecordS(end,2),LinearRecordS(end,3),"d","Color","#D95319");

GravityCenter = plot3(Gpoint(1),Gpoint(2),Gpoint(3),"om","MarkerFaceColor","m",'MarkerSize', 5);
t  = linspace(-1, 2, 100);
R  = r0 + t'*N';

hold on
CartesianCenter = plot3(Center(1), Center(2), Center(3), 'ro', 'MarkerFaceColor', 'r');

quiver3(Center(1), Center(2), Center(3), N(1), N(2), N(3), 40.5, 'LineWidth', 1.5, LineStyle='--',Color="#00aa00")
quiver3(Center(1), Center(2), Center(3), -N(1), -N(2), -N(3), 20.5, 'LineWidth', 1.5, LineStyle='--',Color="#00aa00")

PathPolar = plot3(PolarRecordP(:,1),PolarRecordP(:,2),PolarRecordP(:,3),"Color","#000aaa",LineStyle="-");
StartPolar = plot3(PolarRecordP(1,1),PolarRecordP(1,2),PolarRecordP(1,3),">","Color","#000aaa");
EndPolar = plot3(PolarRecordP(end,1),PolarRecordP(end,2),PolarRecordP(end,3),"*","Color","#000aaa");

% quiver3(LinearRecordS(1:arrowSparse:end ,1)', LinearRecordS(1:arrowSparse:end ,2)', LinearRecordS(1:arrowSparse:end ,3)', LinearRecordEr(1:arrowSparse:end ,1)', LinearRecordEr(1:arrowSparse:end ,2)', LinearRecordEr(1:arrowSparse:end ,3)',...
%     'AutoScale', 'on', 'AutoScaleFactor',vectorScale* 0.2, 'LineWidth', 1.2,"Color","#D25012")
% quiver3(LinearRecordS(1:arrowSparse:end ,1)', LinearRecordS(1:arrowSparse:end ,2)', LinearRecordS(1:arrowSparse:end ,3)', LinearRecordEt(1:arrowSparse:end ,1)', LinearRecordEt(1:arrowSparse:end ,2)', LinearRecordEt(1:arrowSparse:end ,3)',...
%     'AutoScale', 'on', 'AutoScaleFactor', 0.2, 'LineWidth', 1.2)
% 
% quiver3(PolarRecordP(1:arrowSparse:end ,1)', PolarRecordP(1:arrowSparse:end ,2)', PolarRecordP(1:arrowSparse:end ,3)', PolarRecordEr(1:arrowSparse:end ,1)', PolarRecordEr(1:arrowSparse:end ,2)', PolarRecordEr(1:arrowSparse:end ,3)',...
%     'AutoScale', 'on', 'AutoScaleFactor', vectorScale*0.2, 'LineWidth', 1.2,"Color","#000888")
% quiver3(PolarRecordP(1:arrowSparse:end ,1)', PolarRecordP(1:arrowSparse:end ,2)', PolarRecordP(1:arrowSparse:end ,3)', PolarRecordEt(1:arrowSparse:end ,1)', PolarRecordEt(1:arrowSparse:end ,2)', PolarRecordEt(1:arrowSparse:end ,3)',...
%     'AutoScale', 'on', 'AutoScaleFactor', 0.2, 'LineWidth', 1.2)
% quiver3(PolarRecordP(1:arrowSparse:end ,1)', PolarRecordP(1:arrowSparse:end ,2)', PolarRecordP(1:arrowSparse:end ,3)', PolarRecordN(1:arrowSparse:end ,1)', PolarRecordN(1:arrowSparse:end ,2)', PolarRecordN(1:arrowSparse:end ,3)',...
%     'AutoScale', 'on', 'AutoScaleFactor', 0.2, 'LineWidth', 1.2)

xlabel("x-axis");
ylabel("y-axis");
zlabel("z-axis");
axis equal;
axis auto;
hold off;

tSteps=dt*(0:(nSteps-1));

f2 = figure("Name", 'Errors '+string(tEnd)+"s - "+string(dt),"NumberTitle","off");
% plot(tSteps,ErrorRadius,"Color","r")
hold on;
plot(tSteps,abs(ErrorRadius),"Color","r")
% plot(tSteps,ErrorRadial,"Color","g")
% plot(tSteps,ErrorTangent,"Color","b")
xlabel("x-axis");
ylabel("y-axis");
axis auto;
hold off;
