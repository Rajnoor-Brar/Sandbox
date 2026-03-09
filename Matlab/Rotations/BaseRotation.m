function matrix = BaseRotation(axis,angle)
%ROTATION Summary of this function goes here
%   Detailed explanation goes here
    arguments (Input)
        axis
        angle
    end
    
    arguments (Output)
        matrix
    end

    matrix = zeros(3,3);

    if axis == "z"
        matrix(1,1) = cos(angle);
        matrix(1,2) = -sin(angle);
        matrix(2,1) = sin(angle);
        matrix(2,2) = cos(angle);
        matrix(3,3) = 1;
    end

    if axis == "x"
        matrix(2,2) = cos(angle);
        matrix(2,3) = -sin(angle);
        matrix(3,2) = sin(angle);
        matrix(3,3) = cos(angle);
        matrix(1,1) = 1;
    end

    if axis == "y"
        matrix(1,1) = cos(angle);
        matrix(1,3) = sin(angle);
        matrix(3,1) = -sin(angle);
        matrix(3,3) = cos(angle);
        matrix(2,2) = 1;
    end


end