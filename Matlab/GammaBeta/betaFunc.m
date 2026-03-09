function [output] = betaFunc(a,b)

arguments (Input)
    a double
    b double
end

arguments (Output)
    output double
end

nSteps = 500;
edgeGap = 0.0001;

dt = 1/nSteps;
output = 0;

for t = (0 + edgeGap):dt:(1 - edgeGap)
    output = output+ t^(a-1)* (1-t)^(b-1)*dt;
end