function Sphere_Mesh()
    % Configurations for the spheres (radius, lat divisions, lon divisions, x-offset)
    mesh_configs = [
        1.2, 4, 8, 0;   % (radius, latitude divisions, longitude divisions, x-offset)
        1.2, 8, 16, 3;
        1.2, 16, 28, 6;
        1.2, 24, 40, 9
    ];

    % Initialize figure
    figure;
    hold on;

    % Loop through each mesh configuration
    for i = 1:size(mesh_configs, 1)
        % Extract sphere parameters
        radius = mesh_configs(i, 1);
        lat_divisions = mesh_configs(i, 2);
        lon_divisions = mesh_configs(i, 3);
        x_offset = mesh_configs(i, 4);

        % Generate sphere mesh
        [nodes, faces] = create_sphere_mesh(radius, lat_divisions, lon_divisions);

        % Apply x-offset translation
        nodes(:, 1) = nodes(:, 1) + x_offset;

        % Plot the sphere mesh
        patch('Vertices', nodes, 'Faces', faces, ...
              'FaceColor', [0.2, 0.6, 0.1], 'FaceAlpha', 0.94, ...
              'EdgeColor', 'k');
    end

    % Adjust axis settings
    axis equal;
    axis off; % Hide axes
    hold off;
end

function [nodes, faces] = create_sphere_mesh(radius, lat_divisions, lon_divisions)
    % Create the nodes of the sphere using latitude and longitude divisions
    theta = linspace(0, pi, lat_divisions);         % Latitude angles
    phi = linspace(0, 2 * pi, lon_divisions);       % Longitude angles
    [Theta, Phi] = meshgrid(theta, phi);            % Create a grid of angles

    % Compute Cartesian coordinates of the sphere
    X = radius * sin(Theta) .* cos(Phi);
    Y = radius * sin(Theta) .* sin(Phi);
    Z = radius * cos(Theta);

    % Reshape the grid into a list of nodes
    nodes = [X(:), Y(:), Z(:)];

    % Create faces by connecting adjacent nodes in the grid
    faces = [];
    for i = 1:lat_divisions - 1
        for j = 1:lon_divisions
            % Compute indices of vertices
            jp1 = mod(j, lon_divisions) + 1; % Wrap longitude index
            v1 = sub2ind([lon_divisions, lat_divisions], j, i);
            v2 = sub2ind([lon_divisions, lat_divisions], jp1, i);
            v3 = sub2ind([lon_divisions, lat_divisions], jp1, i + 1);
            v4 = sub2ind([lon_divisions, lat_divisions], j, i + 1);

            % Add the face (quadrilateral)
            faces = [faces; v1, v2, v3, v4];
        end
    end
end