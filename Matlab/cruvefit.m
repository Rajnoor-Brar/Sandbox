% --- Data ---
data = [
-60 0.18 0.25 0.11 0.11
-50 0.17 0.35 0.28 0.31
-40 0.13 0.14 0.39 0.32
-30 0.23 0.26 0.29 0.59
-20 0.11 0.7  0.45 0.74
-10 0.68 1.06 1.15 0.7
0   4.26 3.16 1.56 0.96
10  0.68 0.83 1.13 0.89
20  0.31 0.58 0.39 0.58
30  0.22 0.38 0.25 0.43
40  0.11 0.18 0.45 0.4
50  0.12 0.28 0.15 0.19
60  0.2  0.13 0.17 0.17
];

% --- Separate columns ---
x = data(:,1);
Y = data(:,2:end);
numCurves = size(Y,2);

% --- Interpolation grid ---
xfit = linspace(min(x), max(x), 1000);
colors = lines(numCurves);

% --- Loop for each curve ---
for i = 1:numCurves
    % Smooth exact interpolation
    yfit = spline(x, Y(:,i), xfit);
    
    % --- Find local maxima and minima ---
    [pks_max, locs_max] = findpeaks(yfit, xfit);
    [pks_min, locs_min] = findpeaks(-yfit, xfit);
    pks_min = -pks_min; % restore actual minima
    
    % --- Create new figure for each curve ---
    figure('Name', sprintf('Curve %d', i), 'NumberTitle', 'off');
    hold on; grid on;
    
    % --- Plot curve and data ---
    plot(x, Y(:,i), 'o', 'Color', colors(i,:), ...
        'MarkerFaceColor', colors(i,:), 'DisplayName', 'Data Points');
    plot(xfit, yfit, '-', 'Color', colors(i,:), 'LineWidth', 1.5, ...
        'DisplayName', sprintf('Spline Curve %d', i));
    
    % --- Mark maxima ---
    plot(locs_max, pks_max, 'v', 'Color', colors(i,:), ...
        'MarkerFaceColor', 'r', 'MarkerSize', 6, ...
        'DisplayName', 'Maxima');
    
    % --- Mark minima ---
    plot(locs_min, pks_min, '^', 'Color', colors(i,:), ...
        'MarkerFaceColor', 'b', 'MarkerSize', 6, ...
        'DisplayName', 'Minima');
    
    % --- Annotate global extrema ---
    [globalMax, idxMax] = max(yfit);
    [globalMin, idxMin] = min(yfit);
    plot(xfit(idxMax), globalMax, 'p', 'MarkerFaceColor', 'm', ...
        'MarkerEdgeColor', 'k', 'MarkerSize', 8, 'DisplayName', 'Global Max');
    plot(xfit(idxMin), globalMin, 'h', 'MarkerFaceColor', 'c', ...
        'MarkerEdgeColor', 'k', 'MarkerSize', 8, 'DisplayName', 'Global Min');
    
    % --- Labels ---
    xlabel('x');
    ylabel('y');
    title(sprintf('Curve %d: Spline Interpolation with Extrema', i));
    legend('Location','northeast');
    hold off;
end