clc; clear;
nSteps = 21;

closeFigs = false;

x = linspace(-10, 10, nSteps); 
y = linspace(-10, 10, nSteps);

X = meshgrid(x, y);
Y = meshgrid(y,x)';

A = X.^2 - Y.^2;
B = 2*(X.*Y);

f1 = figure("Name", 'z^2',"NumberTitle","off");
hold on;
plot(X,Y,'LineWidth',1.5,"Color","#f88")
plot(X',Y','LineWidth',1.5,"Color","#88f")
plot(A,B,'LineWidth',1.5,"Color","#f44")
plot(A',B','LineWidth',1.5,"Color","#44f")

hold off;
xlabel("n"); ylabel("% error"); axis auto;