function [X,Y,autoRadius] = pVectoral(gridExpanse)

    %% ===== PARAMETERS =====
    sideX = 1;
    sideY = 1;

    angDeg  = true;
    angleXY = 60;     % angle between baseX and baseY

    if angDeg
        angleXY = angleXY * pi/180;
    end

    %% ===== BASIS VECTORS (2D) =====
    baseX = sideX * [1 0];
    baseY = sideY * [cos(angleXY) sin(angleXY)];

    %% ===== LATTICE GRID =====
    x = -gridExpanse : gridExpanse;
    [a,b] = meshgrid(x, x);

    X = a * baseX(1) + b * baseY(1);
    Y = a * baseX(2) + b * baseY(2);

    % Perpendicular normals
    nX = [ -baseX(2),  baseX(1) ];
    nY = [ -baseY(2),  baseY(1) ];

    % Distances between lattice planes
    dX = abs(dot(baseX, nX)) / norm(nX);
    dY = abs(dot(baseY, nY)) / norm(nY);

    autoRadius = min([dX, dY]) * gridExpanse;

end