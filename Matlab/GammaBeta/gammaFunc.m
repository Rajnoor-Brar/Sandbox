function [output] = gammaFunc(value)

arguments (Input)
    value double
end

arguments (Output)
    output double
end

tInterval = [0 ; 2000];
nSteps = 20000;

dt = (tInterval(2)-tInterval(1))/nSteps;
output = 0;

for t = tInterval(1)+0.01:dt:tInterval(2)
    output = output+ t^(value-1)* exp(-1*t)*dt;
end