g_color = g_axis.Color;
f1_color = f_axis_1.Color;
f2_color = f_axis_2.Color;
shad_a=0.4;
% Add shadows for g_axis
g_shadow_xy = plot3(x, y, z*0.01-20, 'LineWidth', 2, 'Color', [g_color, shad_a]);
g_shadow_xz = plot3(x, y*0.01+15, z, 'LineWidth', 2, 'Color', [g_color, shad_a]);
g_shadow_yz = plot3(x*0.01-10, y, z, 'LineWidth', 2, 'Color', [g_color, shad_a]);

% Add shadows for f_axis_1
f1_shadow_xy = plot3(p, q, r*0.01-20, 'LineWidth', 2, 'Color', [f1_color, shad_a]);
f1_shadow_xz = plot3(p, q*0.01+15, r, 'LineWidth', 2, 'Color', [f1_color, shad_a]);
f1_shadow_yz = plot3(p*0.01-12, q, r, 'LineWidth', 2, 'Color', [f1_color, shad_a]);

% Add shadows for f_axis_2
f2_shadow_xy = plot3(u, v, w*0.01-20, 'LineWidth', 2, 'Color', [f2_color, shad_a]);
f2_shadow_xz = plot3(u, v*0.01+15, w, 'LineWidth', 2, 'Color', [f2_color, shad_a]);
f2_shadow_yz = plot3(u*0.01-10, v, w, 'LineWidth', 2, 'Color', [f2_color, shad_a]);