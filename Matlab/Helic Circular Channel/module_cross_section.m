
unit=[1; 1; 1;];

cyl_x=zeros(size(t'*x));
cyl_y=cyl_x;
cyl_z=cyl_x;

for n=1:size(x,2)  
    my=tangent_y(n);
    mz=tangent_z(n);
    
    norm_vec      = [1 my mz];
    norm_vec      = norm_vec/norm(norm_vec);
    
    focal_vec     = [0 -1*mz my];
    focal_vec     = focal_vec/norm(focal_vec);
    
    minor_vec     = cross(norm_vec,focal_vec);
    minor_vec     = minor_vec/norm(minor_vec);
    
    major_vec     = focal_vec;
    %cross(norm_vec,minor_vec);
    
    point_vec     = (rad(n)*(cos(t)' * major_vec)+ rad(n)*(sin(t)' * minor_vec));

    cyl_x(1:end,n)= point_vec(1:end,1);
    cyl_y(1:end,n)= point_vec(1:end,2);
    cyl_z(1:end,n)= point_vec(1:end,3);
end

varcl={'my','mz','norm_vec','norm_vec_val','major_vec','major_vec_val','minor_vec_val','minor_vec','point_vec','unit','n','varcl'};
clear (varcl{:});