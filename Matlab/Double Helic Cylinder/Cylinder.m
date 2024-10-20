clc,clear

run("module_command.m");                  % Generates sample x, a, b, rad, as well as some other useful matrices

t=0: 0.01 :2*pi+0.1;
t(end+1)=(2*pi+0.1);
k=ones(size(t));

run("module_tangent.m");                   % Estimates tangents of axis of cylinder at input points

run("module_cross_section.m");             % Gives co-ordinates of circular cross-sections perpendicular to tangents

shift_x=k'*x;                          
shift_y=k'*y;              
shift_z=k'*z;
                                           % Shift centres of circular cross-sections from origin to their respective position on
                                           % Axis of cylinder
cyl_x=cyl_x + shift_x;
cyl_y=cyl_y + shift_y;                
cyl_z=cyl_z + shift_z;

run("module_graph.m");                    % Plot the graph

