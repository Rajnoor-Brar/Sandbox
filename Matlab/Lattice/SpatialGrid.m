x = -1*gridExpanse : gridExpanse;
y = x; z = x;

x = x * scaleX;
y = y * scaleY;
z = z * scaleZ;

[X,Y,Z] = meshgrid(x,y,z);

for n=1:gridExpanse+rem(gridExpanse,2)
    coordinate = 2*n-rem(gridExpanse,2);

    X(coordinate,:,:) = X(coordinate,:,:)+ XZoffsetX;
    Z(coordinate,:,:) = Z(coordinate,:,:)+ XZoffsetZ;

    Y(:,coordinate,:) = Y(:,coordinate,:)+ YZoffsetY;
    Z(:,coordinate,:) = Z(:,coordinate,:)+ YZoffsetZ;

    X(:,:,coordinate) = X(:,:,coordinate)+ XYoffsetX;
    Y(:,:, coordinate) = Y(:,coordinate,:)+ XYoffsetY;
end