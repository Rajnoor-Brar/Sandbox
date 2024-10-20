
g_cyl= surf(cyl_x,cyl_y,cyl_z);
hold on

if showAxis == 1
    g_axis = plot3(x,y,z);
    f_axis_1 = plot3(p,q,r);
    f_axis_2 = plot3(u,v,w);
    
    g_axis.LineWidth=3;
    f_axis_1.LineWidth=3;
    f_axis_2.LineWidth=3;
end

if showCrossSections == 1
    cross_xyz=cat(3,cyl_x(1:end,1:(1+cross_density):end), cyl_y(1:end,1:(1+cross_density):end),cyl_z(1:end,1:(1+cross_density):end));
    g_cross = plot3(cross_xyz(:,:,1),cross_xyz(:,:,2),cross_xyz(:,:,3));
    for i= 1:size(g_cross,1)
        g_cross(i,1).LineWidth= 1;
        %g_cross(i,1).Color= '#771DBF';
    end
end

if showCoaxialLines == 1
    coax_xyz=cat(3,cyl_x(1:(1+coax_density):(end),1:end)',cyl_y(1:(1+coax_density):(end),1:end)',cyl_z(1:(1+coax_density):(end),1:end)');
    g_coax = plot3(coax_xyz(:,:,1),coax_xyz(:,:,2),coax_xyz(:,:,3));
    for i= 1:size(g_coax,1)
        g_coax(i,1).LineWidth= 1;
        %g_coax(i,1).Color='#A61419';
    end
end

% plot3(x,zeros(count),zeros(count),Color='Black',LineWidth=2);

clear i;

hold off;

axis equal;
axis auto;

run("sub_graph_shade.m");

xlabel("x-axis");
ylabel("y-axis");
zlabel("z-axis");
grid on