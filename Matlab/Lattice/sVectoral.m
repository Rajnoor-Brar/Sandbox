function [X,Y,Z,autoRadius]= sVectoral(gridExpanse)

    sideX = 1 ; 
    sideY = 1 ;
    sideZ = 1 ;
    
    angDeg = true;
    
    angleXY = 60;
    angleYZ = 90;
    angleXZ = 90;
    
    if angDeg
        angleXZ = angleXZ*pi/180; angleXY = angleXY*pi/180; angleYZ = angleYZ*pi/180;
    end
    
    unitX = [1 0 0];
    
    baseX = sideX*unitX;
    baseY = sideY*(unitX*BaseRotation("z",angleXY));
    baseZ = sideZ*(unitX*BaseRotation("y",angleXZ))*BaseRotation("x",pi/2-angleYZ);
    
    x = -1*gridExpanse : gridExpanse;
    [a,b,c] = meshgrid(x,x,x);
    
    X = a*baseX(1) + b*baseY(1) + c*baseZ(1);
    Y = a*baseX(2) + b*baseY(2) + c*baseZ(2);
    Z = a*baseX(3) + b*baseY(3) + c*baseZ(3);
    
    % ----------
    
    nX = cross(baseY, baseZ);
    nY = cross(baseZ, baseX);
    nZ = cross(baseX, baseY);
    
    dX = abs(dot(baseX, nX)) / norm(nX);
    dY = abs(dot(baseY, nY)) / norm(nY);
    dZ = abs(dot(baseZ, nZ)) / norm(nZ);
    
    autoRadius = min([dX, dY, dZ])*gridExpanse;

end