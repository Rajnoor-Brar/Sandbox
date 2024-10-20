
count=size(x,2);

tangent_y = zeros(1,count);
tangent_z= zeros(1,count);

tangent_y(1)= (y(2)-y(1))/(x(2)-x(1));
tangent_z(1)= (z(2)-z(1))/(x(2)-x(1));

tangent_y(end)= (y(end)-y(end-1))/(x(end)-x(end-1));
tangent_z(end)= (z(end)-z(end-1))/(x(end)-x(end-1));

for n=2:count-1
    tangent_y(n)=(y(n+1)-y(n-1))/(x(n+1)-x(n-1));
    tangent_z(n)=(z(n+1)-z(n-1))/(x(n+1)-x(n-1));
end

varcl={'leftx','lefty','leftz','rightx','righty','rightz'};
clear (varcl{:});