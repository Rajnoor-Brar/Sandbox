function matrix = AxialRotation(axis,angle)
%AXIALROTATION Summary of this function goes here
%   Detailed explanation goes here
    arguments (Input)
        axis
        angle
    end
    
    arguments (Output)
        matrix
    end

    axis = axis / norm(axis);
    a = axis(1); b = axis(2); c = axis(3);
    
    % Compute terms
    cosine = cos(angle);
    sine = sin(angle);
    one_cosine = 1 - cosine;
    
    % Rotation matrix (Rodrigues formula)
    matrix = [cosine + a^2*one_cosine,      a*b*one_cosine - c*sine,   a*c*one_cosine + b*sine;
         b*a*one_cosine + c*sine,    cosine + b^2*one_cosine,     b*c*one_cosine - a*sine;
         c*a*one_cosine - b*sine,    c*b*one_cosine + a*sine,   cosine + c^2*one_cosine];
end