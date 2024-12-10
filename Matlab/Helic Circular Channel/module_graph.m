
g_cyl= surf(cyl_x,cyl_y,cyl_z);
hold on
run("sub_graph_shadows.m");

if showAxis == 1
    g_axis = plot3(x, a, b, 'LineWidth', 3);
    shad_a=0.4;
    g_shadow_xy = plot3(x, a, b*0.01-20, 'LineWidth', 2, 'Color', [g_axis.Color, shad_a]);
    g_shadow_xz = plot3(x, a*0.01+15, b, 'LineWidth', 2, 'Color', [g_axis.Color, shad_a]);
    g_shadow_yz = plot3(x*0.01-10, a, b, 'LineWidth', 2, 'Color', [g_axis.Color, shad_a]);
end

if showCrossSections == 1
    g_cross       = plot3(cyl_x(1:end, 1:(1+cross_density):end),...
                          cyl_y(1:end, 1:(1+cross_density):end),...
                          cyl_z(1:end, 1:(1+cross_density):end),...
                          'LineWidth',1);
end

if showCoaxialLines == 1
    g_coax = plot3(cyl_x(1:(1+coax_density):end, 1:end)',...
                   cyl_y(1:(1+coax_density):end, 1:end)',...
                   cyl_z(1:(1+coax_density):end, 1:end)',...
                   'LineWidth',1);
end

clear i;
hold off;

axis equal;
axis auto;

run("sub_graph_shade.m");
%xlim([-11,51]); ylim([-11,16]); zlim([-21,15]);

xlabel("x-axis");
ylabel("y-axis");
zlabel("z-axis");
grid on