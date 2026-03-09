function [X,Y,Z,autoRadius]= sHexagonal(gridExpanse)

    XZoffsetX = 0.5;
    XZoffsetZ = 0;
    
    YZoffsetY = 0;
    YZoffsetZ = 0;
    
    XYoffsetX = 0;
    XYoffsetY = 0;
    
    
    scaleX = 1;
    scaleY = sqrt(0.75);
    scaleZ = 1; 
    
    run("SpatialGrid.m")

end

