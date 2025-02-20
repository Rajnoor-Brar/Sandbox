channel = figure;
g_cyl   = surf(cyl_x,cyl_y,cyl_z);
hold on
run("sub_graph_shadows.m");

if showAxis == 1
    g_axis   = plot3(x, y, z, 'LineWidth', 3);
    f_axis_1 = plot3(p, q, r, 'LineWidth', 3);
    f_axis_2 = plot3(u, v, w, 'LineWidth', 3);
    %run("sub_graph_ax_shadows.m");
end

if showCrossSections == 1
    g_cross = plot3(cyl_x(1:end, 1:(1+cross_density):end),...
                    cyl_y(1:end, 1:(1+cross_density):end),...
                    cyl_z(1:end, 1:(1+cross_density):end),...
                    'LineWidth',1);
end

if showCoaxialLines == 1
    g_coax  = plot3(cyl_x(1:(1+coax_density):end, 1:end)',...
                    cyl_y(1:(1+coax_density):end, 1:end)',...
                    cyl_z(1:(1+coax_density):end, 1:end)',...
                    'LineWidth',1);
end

clear i;
hold off;

axis equal;
axis auto;

run("sub_graph_shade.m");
% xlim([-11,51]); ylim([-11,16]); zlim([-21,15]);

xlabel("x-axis");
ylabel("y-axis");
zlabel("z-axis");
grid on