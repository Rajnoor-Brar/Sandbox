clc;clear;
phiDeg = 50;
thetaDeg = 30;

phi = phiDeg*180/pi;
theta = thetaDeg*180/pi;

phiArray = (-1.57:0.01:1.57)';
thetaArray = (0:0.01: 6.27)';

radius = 3;

function matrix = rotateTheta(angle)
    matrix = zeros(3,3);
    matrix(1,1) = cos(angle);
    matrix(1,2) = -sin(angle);
    matrix(2,1) = sin(angle);
    matrix(2,2) = cos(angle);
    matrix(3,3) = 1;
end

function matrix = rotatePhi(angle)
    matrix = zeros(3,3);
    matrix(1,1) = cos(angle);
    matrix(1,3) = sin(angle);
    matrix(3,1) = -sin(angle);
    matrix(3,3) = cos(angle);
    matrix(2,2) = 1;
end

function matrix = radialScale(radius)
    matrix = zeros(3,3);
    matrix(1,1) = radius;
    matrix(2,2) = radius;
    matrix(3,3) = radius;
end

function matrix = cordScale(phi)
    matrix = zeros(3,3);
    matrix(1,1) = 1;
    matrix(2,2) = cos(phi);
    matrix(3,3) = 1;
end

X0 = zeros(3,1);
X0(1,1) = 1;

S=radialScale(radius);
H=cordScale(phi);
Rphi=rotatePhi(phi);
Rtheta=rotateTheta(theta);

position = [radius*cos(phi)*cos(theta), radius*cos(phi)*sin(theta),radius*sin(phi)] ;

Point = plot3(position(1),position(2),position(3),'+k', 'MarkerSize', 10);
hold on;

longitude1 = zeros(size(phiArray,1),3);
longitude2 = zeros(size(phiArray,1),3);

for n = 1:size(phiArray,1)
    Rlg = rotatePhi(phiArray(n));
    Hl = cordScale(phiArray(n));
    P = S * Hl * Rlg * Rtheta * X0;
    Q = S * Rtheta * Hl * Rlg * X0;
    
    for k =1:1:3
        longitude1(n,k)=P(k);
        longitude2(n,k)=Q(k);
    end

end

latitude1 = zeros (size(thetaArray,1));
latitude2 = zeros (size(thetaArray,1));

for n = 1: size(thetaArray,1)
    Rlt = rotateTheta(thetaArray(n));
    P = S * H * Rphi * Rlt * X0;
    Q = S * H * Rlt * Rphi * X0;

    for k =1:1:3
        latitude1(n,k)=P(k);
        latitude2(n,k)=Q(k);
    end

end

Lat1 = plot3(latitude1(:,1),latitude1(:,2),latitude1(:,3));
Lat2 = plot3(latitude2(:,1),latitude2(:,2),latitude2(:,3));

Long1 = plot3(longitude1(:,1),longitude1(:,2),longitude1(:,3));
Long2 = plot3(longitude2(:,1),longitude2(:,2),longitude2(:,3));

sperical = zeros(size(thetaArray,1),size(phiArray,1),3);

RltArray = zeros(3,3,size(thetaArray,1));
for m = 1:size(thetaArray,1)
    RltArray(:,:,m) = rotateTheta(thetaArray(m));
end

RlgArray = zeros(3,3,size(phiArray,1));
HlgArray = zeros(3,3,size(phiArray,1)); 
for n = 1:size(phiArray,1)
    RltArray(:,:,n) = rotatePhi(phiArray(n));
    HlgArray(:,:,n) = cordScale(phiArray(n));
end

for m = 1:size(thetaArray,1)
    for n = 1:size(phiArray,1)
        sp = S * HlgArray(n) * RlgArray(n) * RltArray(m) * X0;
        for k =1:1:3
            sperical(m,n,k)=sp(k);
        end
    end
end

function point = cartesian(radius, theta, phi)
    point = zeros(3);
    point(1) = radius * cos (phi) * cos(theta);
    point(2) = radius * cos (phi) * sin(theta);
    point(3) = radius * sin (phi);
end

Sphere = surf(sperical(:,:,1),sperical(:,:,2),sperical(:,:,3)) ;

Sphere.EdgeAlpha             = 0;
Sphere.FaceColor             = "interp";
Sphere.FaceAlpha             = 1;
Sphere.FaceLighting          = "gouraud";
Sphere.AmbientStrength       = 0.6;
Sphere.SpecularStrength      = 0.2;

axis equal;
axis auto;
hold off;