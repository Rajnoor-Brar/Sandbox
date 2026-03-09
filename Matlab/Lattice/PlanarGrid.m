x = -1*gridExpanse : gridExpanse;
y = x;

% x = x*xScale;
y = y*yScale;

[X,Y] = meshgrid(x,y);

for n=1:gridExpanse+rem(gridExpanse,2)
    coordinate = 2*n-rem(gridExpanse,2);
    X(coordinate,:) = X(coordinate,:)+oddXoffset;
    % Y(:,coordinate) = Y(:,coordinate)+oddYoffset; 
end