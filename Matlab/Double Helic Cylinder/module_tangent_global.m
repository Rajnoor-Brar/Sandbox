% slopes of central axis (x,a,b)

count=size(x,2);
% To get number of elements in x

tangent_y = zeros(1,count);
tangent_z= zeros(1,count);

slopes_y= zeros(count+1);
slopes_z= zeros(count+1);
sums_y= zeros(count+1,count+2);
sums_z= zeros(count+1,count+2);


global_x=x;
global_y=y;
global_z=z;

%%---------------Gauss Elimination----------------------
%Matrix Builder
for i=1:(count+1)
    for j=1:(count+1)
        sums_y(i,j) = sum( global_x.^(count+i-j) );
        sums_z(i,j) = sums_y(i,j);
    end
    sums_y(i,count+2)=sum(global_y.*(global_x.^(i-1)));
    sums_z(i,count+2)=sum(global_z.*(global_x.^(i-1)));
end

%Solver : Triangulator
for i=1:count
    for j=(i+1):(count+1)
        for k=1:(count+2)
            sums_y(j,k)= sums_y(j,k)-(sums_y(j,i)*sums_y(i,k)/sums_y(i,i));
            sums_z(j,k)= sums_z(j,k)-(sums_z(j,i)*sums_z(i,k)/sums_z(i,i));
        end
    end
end

%Solver : to Diagonal to Identity Matrix
slopes_y(count+1) = sums_y(count+1,count+2);
slopes_z(count+1) = sums_z(count+1,count+2);

for i=count:-1:1
    slopes_y(i) = sums_y(i,count+2);
    slopes_z(i) = sums_z(i,count+2);

    for j=(i+1):(count+1)
        slopes_y(i) = slopes_y(i) - (sums_y(i,j)*slopes_y(j));
        slopes_z(i) = slopes_z(i) - (sums_y(i,j)*slopes_z(j));
    end

    slopes_y(i)=slopes_y(i)/sums_y(i,i);
    slopes_z(i)=slopes_z(i)/sums_z(i,i);
end


    % calculating tangent to the axis "curve"
for n=1:count
    for i=1:count
        tangent_y(n)= tangent_y(n)+( (count-i+1)* slopes_y(i)* ( x(n)^(count-i) ) );
        tangent_z(n)= tangent_z(n)+( (count-i+1)* slopes_z(i)* ( x(n)^(count-i) ) );
    end
end