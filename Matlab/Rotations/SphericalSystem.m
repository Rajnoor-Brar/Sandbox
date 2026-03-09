clc;clear;
phiDeg = 50;
thetaDeg = 10;

function matrix = cordScale(phi)
    matrix = zeros(3,3);
    matrix(1,1) = 1;
    matrix(2,2) = cos(phi);
    matrix(3,3) = 1;
end

meshDensity=40;
X0=[1;0;0];
phi = phiDeg*180/pi;
theta = thetaDeg*180/pi;

phiArray = (-1.57:0.01:1.57)';
thetaArray = (0:0.01: 6.27)';

radius = 3;

StandardPoint = Spherical2Cartesian(radius,theta,phi);
ThetaPhiPoint = radius*cordScale(phi)*BaseRotation("y",-phi)*BaseRotation("z",theta)*X0;
PhiThetaPoint = radius*BaseRotation("z",theta)*BaseRotation("y",-phi)*X0;

Point=zeros(3,3);
Point(1,:)=StandardPoint;
Point(2,:)=ThetaPhiPoint;
Point(3,:)=PhiThetaPoint;

StandardMesh = zeros(size(thetaArray,1), size(phiArray,1),3);
ThetaPhiMesh = zeros(size(thetaArray,1), size(phiArray,1),3);
PhiThetaMesh = zeros(size(thetaArray,1), size(phiArray,1),3);

for m = 1:size(thetaArray,1)
    for n = 1:size(phiArray,1)
        StandardMesh(m,n,:) = Spherical2Cartesian(radius,thetaArray(m), phiArray(n));
        ThetaPhiMesh(m,n,:) = radius*BaseRotation("y",phiArray(n))*BaseRotation("z",thetaArray(m))*X0;
        PhiThetaMesh(m,n,:) = radius*BaseRotation("z",thetaArray(m))*BaseRotation("y",phiArray(n))*X0;
    end
end

StandardLatitudes = StandardMesh(:, 1:meshDensity:end,:);
StandardLongitudes = StandardMesh(1:meshDensity:end, :, :);

ThetaPhiLatitudes = ThetaPhiMesh(:, 1:meshDensity:end,:);
ThetaPhiLongitudes = ThetaPhiMesh(1:1+meshDensity:end, :, :);

PhiThetaLatitudes = PhiThetaMesh(:, 1:meshDensity:end,:);
PhiThetaLongitudes = PhiThetaMesh(1:meshDensity:end, :, :);

close all;
f1 = figure("Name", 'Standard',"NumberTitle","off");
StandardLats = plot3(StandardLatitudes(:,:,1),StandardLatitudes(:,:,2),StandardLatitudes(:,:,3), "Color",'#FF0000');
hold on;
StandardLongs = plot3(StandardLongitudes(:,:,1)',StandardLongitudes(:,:,2)',StandardLongitudes(:,:,3)', "Color",'#0000FF');
hold on;
plot3(Point(1,1),Point(1,2),Point(1,3),'or', 'MarkerSize', 10)
plot3(Point(2,1),Point(2,2),Point(2,3),'+g', 'MarkerSize', 8)
plot3(Point(3,1),Point(3,2),Point(3,3),'xb', 'MarkerSize', 8)
xlabel("x-axis");
ylabel("y-axis");
zlabel("z-axis");
axis equal;
axis auto;
hold off;

f2 = figure("Name", 'ThetaPhi',"NumberTitle","off");
ThetaPhiLats = plot3(ThetaPhiLatitudes(:,:,1),ThetaPhiLatitudes(:,:,2),ThetaPhiLatitudes(:,:,3), "Color",'#FF8800');
hold on;
ThetaPhiLongs = plot3(ThetaPhiLongitudes(:,:,1)',ThetaPhiLongitudes(:,:,2)',ThetaPhiLongitudes(:,:,3)', "Color",'#0088FF');
hold on;
plot3(Point(1,1),Point(1,2),Point(1,3),'or', 'MarkerSize', 10)
plot3(Point(2,1),Point(2,2),Point(2,3),'+g', 'MarkerSize', 8)
plot3(Point(3,1),Point(3,2),Point(3,3),'xb', 'MarkerSize', 8)
xlabel("x-axis");
ylabel("y-axis");
zlabel("z-axis");
axis equal;
axis auto;
hold off;

f3 = figure("Name", 'PhiTheta',"NumberTitle","off");
PhiThetaLats = plot3(PhiThetaLatitudes(:,:,1),PhiThetaLatitudes(:,:,2),PhiThetaLatitudes(:,:,3), "Color",'#00FF00');
hold on;
PhiThetaLongs = plot3(PhiThetaLongitudes(:,:,1)',PhiThetaLongitudes(:,:,2)',PhiThetaLongitudes(:,:,3)', "Color",'#FF00FF');
hold on;
plot3(Point(1,1),Point(1,2),Point(1,3),'or', 'MarkerSize', 10)
plot3(Point(2,1),Point(2,2),Point(2,3),'+g', 'MarkerSize', 8)
plot3(Point(3,1),Point(3,2),Point(3,3),'xb', 'MarkerSize', 8)
xlabel("x-axis");
ylabel("y-axis");
zlabel("z-axis");
axis equal;
axis auto;
hold off;

