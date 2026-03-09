function vector = Spherical2Cartesian(radius,theta, phi)
%SPERICAL2CARTESIAN Summary of this function goes here
%   Detailed explanation goes here
    arguments (Input)
        radius double
        theta double
        phi double
    end
    
    arguments (Output)
        vector (3,1)
    end

    vector = zeros(3,1);
    vector(1) = radius*cos(phi)*cos(theta);
    vector(2) = radius*cos(phi)*sin(theta);
    vector(3) = radius*sin(phi);
end