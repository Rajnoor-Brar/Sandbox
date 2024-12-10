function Cylinder_Stack()
    % Parameters
    radii = [1, 1, 1, 1];        % Radius of each cylinder/disc stack (same for simplicity)
    heights = [3, 3, 3, 3];      % Height of each cylinder
    densities = [64, 64, 64, 64]; % Number of points per disc for each cylinder
    z_spacing = [0.2, 0.1, 0.05, 0.025]; % Spacing between discs for each density
    num_cylinders = numel(radii);        % Number of cylinders
    x_offsets = [0, 3, 6, 9];           % Offset for side-by-side arrangement

    % Initialize figure
    figure;
    hold on;
    colormap(parula);  % Set a colormap for visual clarity

    % Loop through each cylinder configuration
    for i = 1:num_cylinders
        radius = radii(i);
        height = heights(i);
        density = densities(i);
        dz = z_spacing(i);
        x_offset = x_offsets(i);

        % Create the cylinder stack
        create_cylinder_stack(radius, height, density, dz, x_offset);
    end

    % Adjust view and axis
    axis equal;
    axis off;
    xlabel('X'); ylabel('Y'); zlabel('Z');
    view(3);
end

function create_cylinder_stack(radius, height, num_points, dz, x_offset)
    % Create a stack of discs representing a cylinder

    % Determine z-coordinates for discs
    z_values = 0:dz:height; 

    % Loop through each disc (z-level)
    for z = z_values
        % Generate points on the circle at height z
        theta = linspace(0, 2 * pi, num_points + 1); % Uniform angles
        theta(end) = []; % Avoid duplication of the first point

        % Calculate circle points in 3D
        x = radius * cos(theta) + x_offset;  % Shift x by x_offset
        y = radius * sin(theta);
        z_coord = z * ones(size(theta));

        % Plot the disc
        fill3(x, y, z_coord, rand(1, 3), 'FaceAlpha', 0.85, 'EdgeColor', 'k'); % Random color for each disc
    end
end
