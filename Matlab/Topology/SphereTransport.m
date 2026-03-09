%% Parallel transport visualization on sphere
% Creates:
% - Figure 1: ambient constant vector and its tangent+normal decomposition
% - Figure 2: intrinsic (discrete) parallel transport along the curve
%
% Clear
clc; clear; close all;

%% 1) Build sphere mesh (M)
[U, Vv] = meshgrid(linspace(0,2*pi,240), linspace(-pi/2,pi/2,120));
X = cos(Vv).*cos(U);
Y = cos(Vv).*sin(U);
Z = sin(Vv);
M = cat(3, X, Y, Z);    % mesh for plotting

%% 2) Define waypoints (lat, lon in degrees), convert to radians
lat_deg = [0 90 90 90 0];    % degrees North
lon_deg = [0 0 30 90 90];    % degrees East
lat = deg2rad(lat_deg);
lon = deg2rad(lon_deg);

%% 3) Build curve C by interpolating each segment in lat-lon
nseg = 5;   % samples per segment (increase for smoother)
C = [];      % will be (4*nseg) x 3
for i = 1:(length(lat)-1)
    t = linspace(0,1,nseg).';
    la = (1-t)*lat(i) + t*lat(i+1);
    lo = (1-t)*lon(i) + t*lon(i+1);
    Xi = sin(la).*cos(lo);
    Yi = sin(la).*sin(lo);
    Zi = cos(la);
    C = [C; [Xi, Yi, Zi]];    %#ok<AGROW>
end
Npoints = size(C,1);

%% 4) Compute normals (unit) and tangents (unit) along C
% Normals on unit sphere:
N = C ./ vecnorm(C,2,2);   % N x 3

% Tangent: central finite differences for interior, forward/back for ends
T = zeros(Npoints,3);
% derivative approx
dC = zeros(Npoints,3);
dC(1,:) = C(2,:) - C(1,:);
for k = 2:Npoints-1
    dC(k,:) = (C(k+1,:) - C(k-1,:))/2;
end
dC(Npoints,:) = C(Npoints,:) - C(Npoints-1,:);
% project derivative into tangent plane and normalize (to get unit tangent)
for k = 1:Npoints
    % remove normal component (ensure tangent)
    td = dC(k,:) - (dot(dC(k,:), N(k,:)))*N(k,:);
    if norm(td) < 1e-12
        T(k,:) = [0 0 0];
    else
        T(k,:) = td / norm(td);
    end
end

%% 5) Ambient constant vector V_ambient, and its tangent/normal decomposition
V_initial = [1 0 0];
V_ambient = repmat(V_initial/norm(V_initial), Npoints, 1);  % N x 3
dotVN = sum(V_ambient .* N, 2);        % N x 1
V_tangent_amb = V_ambient - dotVN .* N; % N x 3
V_normal_amb  = dotVN .* N;             % N x 3

% (optionally normalize tangent projections for display direction only)
V_tangent_amb_norm = zeros(size(V_tangent_amb));
for k=1:Npoints
    if norm(V_tangent_amb(k,:))>1e-12
        V_tangent_amb_norm(k,:) = V_tangent_amb(k,:) / norm(V_tangent_amb(k,:));
    end
end

%% 6) Intrinsic parallel transport (discrete, using rotation between normals)
% We'll parallel-transport the initial tangent-like vector v0 along the curve.
% Choose initial tangent to be V_tangent_amb at the first point (projected ambient).
v0 = V_tangent_amb(1,:);
if norm(v0) < 1e-12
    % if v0 nearly zero (rare), pick T(1,:) instead
    v0 = T(1,:);
else
    v0 = v0 / norm(v0);
end

V_para = zeros(Npoints,3);
V_para(1,:) = v0;

for k = 2:Npoints
    n1 = N(k-1,:); n2 = N(k,:);
    % rotation that sends n1 -> n2 by minimal rotation (Rodrigues)
    axis_rot = cross(n1, n2);
    ax_norm = norm(axis_rot);
    if ax_norm < 1e-12
        R = eye(3);
    else
        axis_rot = axis_rot / ax_norm;
        % clamp dot due to numerical error
        cosang = max(-1, min(1, dot(n1,n2)));
        theta = acos(cosang);
        K = [0        -axis_rot(3)  axis_rot(2);
             axis_rot(3)   0       -axis_rot(1);
            -axis_rot(2) axis_rot(1)    0];
        R = eye(3) + sin(theta)*K + (1-cos(theta))*(K*K);
    end
    % rotate previous transported vector
    v_rot = (R * V_para(k-1,:).').';
    % re-project to tangent at new point to remove tiny normal components
    v_rot = v_rot - dot(v_rot, n2) * n2;
    % normalize (preserve length of v0)
    if norm(v_rot) < 1e-12
        v_rot = [0 0 0];
    else
        v_rot = (v_rot / norm(v_rot)) * norm(V_para(1,:));
    end
    V_para(k,:) = v_rot;
end

%% 7) Plot Figure 1: Ambient constant with decomposed components
figure('Name','Ambient constant vector and projection','NumberTitle','off');
hold on; axis equal; grid on;
% sphere
h = surf(X, Y, Z, 'FaceAlpha', 0.25, 'EdgeColor', 'none');
colormap(parula);
% curve
plot3(C(:,1), C(:,2), C(:,3), 'm-', 'LineWidth', 2);
% ambient vector (same arrow everywhere)
scale = 1;
quiver3(C(:,1), C(:,2), C(:,3), V_ambient(:,1), V_ambient(:,2), V_ambient(:,3), scale, 'r', 'LineWidth', 1.8);
% tangent projection (blue)
quiver3(C(:,1), C(:,2), C(:,3), V_tangent_amb_norm(:,1), V_tangent_amb_norm(:,2), V_tangent_amb_norm(:,3), scale*0.5, 'b', 'LineWidth', 1.2);
% normal component (black)
quiver3(C(:,1), C(:,2), C(:,3), V_normal_amb(:,1), V_normal_amb(:,2), V_normal_amb(:,3),scale*0.5, 'k', 'LineWidth', 1);
% start and end markers
plot3(C(1,1),C(1,2),C(1,3),'mo','MarkerFaceColor','m');
plot3(C(end,1),C(end,2),C(end,3),'co','MarkerFaceColor','c');
legend('Sphere','Curve','V_{ambient}','V_{tangent} (dir)','V_{normal}','start','end');
title('Ambient constant vector and its tangent+normal components');
view(40,20);

%% 8) Plot Figure 2: Intrinsic (discrete) parallel transport
figure('Name','Intrinsic parallel transport (discrete)','NumberTitle','off');
hold on; axis equal; grid on;
surf(X, Y, Z, 'FaceAlpha', 0.25, 'EdgeColor', 'none');
plot3(C(:,1), C(:,2), C(:,3), 'm-', 'LineWidth', 2);
% transported tangent (blue)
quiver3(C(:,1), C(:,2), C(:,3), V_para(:,1), V_para(:,2), V_para(:,3), scale, 'r', 'LineWidth', 1.8);
% show surface normals (thin black)
quiver3(C(:,1), C(:,2), C(:,3), N(:,1)*0.15, N(:,2)*0.15, N(:,3)*0.15, scale*0.5, 'b', 'LineWidth', 0.8);
% also show initial ambient tangent projection for reference (magenta)
quiver3(C(:,1), C(:,2), C(:,3), V_tangent_amb_norm(:,1)*0.12, V_tangent_amb_norm(:,2)*0.12, V_tangent_amb_norm(:,3)*0.12, scale*0.5, 'k', 'LineWidth', 1);
plot3(C(1,1),C(1,2),C(1,3),'mo','MarkerFaceColor','m');
legend('Sphere','Curve','V_{parallel}','N (normals)','V_{tangent\_ref}');
title('Discrete intrinsic parallel transport of initial tangent (from V_{ambient})');
view(40,20);

%% 9) Optional: show arrows at fewer points for clarity
% (Uncomment to plot a subsampled set of arrows instead)
% idx = round(linspace(1,Npoints,30));
% quiver3(C(idx,1),C(idx,2),C(idx,3), V_para(idx,1),V_para(idx,2),V_para(idx,3), 0.25, 'b');