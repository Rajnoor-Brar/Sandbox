clear; clc;

% Parameters
scale = 0.5;
n = 200;
theta = linspace(0.5*pi, -1*pi, n)';

% Curve on circle
C = [cos(theta), sin(theta)];

% Unit tangent (intrinsic direction)
T = [-sin(theta), cos(theta)];

% Unit normal (ambient)
N = [cos(theta), sin(theta)];

% ---- Ambient Transport ----
% Fixed direction in R^2 (say, along x-axis)
alpha0 = 12*pi/8;
phase=pi/2;
V0 = cos(alpha0-phase)*T(1,:) + sin(alpha0-phase)*N(1,:);
V_ambient = repmat(V0, n, 1);

% Tangent and normal components (ambient decomposition)
V_tan = sum(V_ambient .* T, 2);
V_norm = sum(V_ambient .* N, 2);
V_tangent_amb = V_tan .* T;
V_normal_amb = V_norm .* N;

% ---- Intrinsic (Parallel) Transport ----
% Initial vector: tangent direction at start, rotated 45° in tangent plane
V0_intr = cos(alpha0-phase)*T(1,:) + sin(alpha0-phase)*N(1,:); % start vector

% Along circle, intrinsic parallel transport means:
% rotate vector by the same angle as curve's rotation around circle.
% For circle, rotation angle = θ (change in curve parameter)
V_intrinsic = cos(theta-phase)*V0_intr + sin(theta-phase)*[-V0_intr(2), V0_intr(1)];

% ---- Plot ----
figure; hold on; axis equal; grid on
plot(C(:,1), C(:,2), 'm', 'LineWidth', 1.5)
quiver(C(1:15:end,1), C(1:15:end,2), ...
    V_ambient(1:15:end,1)*scale, V_ambient(1:15:end,2)*scale, 0, 'r', 'LineWidth', 1)
% quiver(C(1:15:end,1), C(1:15:end,2), ...
%     V_tangent_amb(1:15:end,1)*scale, V_tangent_amb(1:15:end,2)*scale, 0, 'b', 'LineWidth', 1)
title('Ambient Transport (2D circle)')
legend('Curve','V ambient','V tangent')

figure; hold on; axis equal; grid on
plot(C(:,1), C(:,2), 'm', 'LineWidth', 1.5)
quiver(C(1:15:end,1), C(1:15:end,2), ...
    V_intrinsic(1:15:end,1)*scale, V_intrinsic(1:15:end,2)*scale, 0, 'r', 'LineWidth', 1)
title('Intrinsic (Parallel) Transport on Circle')
legend('Curve','V (intrinsic parallel)')