 
nSteps = 200;

closeFigs = false;

x = linspace(0, 4, nSteps); 
y = linspace(0, 4, nSteps);

[X, Y] = meshgrid(x, y);

[showCustomB, showDirectB, showCustomGB] = deal(1, 1, 0);
[showErrorDCb, showErrorDbCgb, logError] = deal(1, 1, 1);

heatClip = [0 1.1];

if showCustomB, B_custom = zeros(nSteps,nSteps); end
if showDirectB, B_direct = beta(X,Y); end
if showCustomGB, B_Cgamma = zeros(nSteps,nSteps); end


for i=1:nSteps
    for j=1:nSteps
        if showCustomB,  B_custom(i,j) = betaFunc(X(i,j), Y(i,j)); end
        if showCustomGB, B_Cgamma(i,j) = gammaFunc(X(i,j)) * gammaFunc(Y(i,j)) / gammaFunc(X(i,j) + Y(i,j)); end
    end

end

if closeFigs, close all; end


if (showCustomB*showDirectB*showErrorDCb ~= 0) 
    errorCB = 100*abs(B_direct - B_custom)./B_direct;

    figure('Name','Custom Beta Accuracy','NumberTitle','off');
    imagesc(x, y, errorCB);
    axis square;
    axis xy;
    colormap(turbo);
    colorbar;
    xlabel('x'); ylabel('y');
    title('log of %age Difference |B_{direct} - B_{custom}|/B_{direct}');
    set(gca, 'FontSize', 12);

    if logError, set(gca, 'ColorScale', 'log'); end
end

if (showCustomGB*showDirectB*showErrorDbCgb ~=0)

    errorCGb = 100*abs(B_direct - B_Cgamma)./B_direct;

    figure('Name','B with custom \Gamma accuracy','NumberTitle','off');
    imagesc(x, y, errorCGb);
    axis square;
    axis xy;
    colormap(turbo);
    colorbar;
    xlabel('x'); ylabel('y');
    title('log of %age Difference |B_{direct} - B_{gamma}|/B_{direct}');
    set(gca, 'FontSize', 12);
    if logError, set(gca, 'ColorScale', 'log'); end
end

if (showDirectB==1)
    figure('Name','Beta Function (built-in)','NumberTitle','off');
    imagesc(x, y, B_direct);
    axis square; axis xy; colorbar;
    xlabel('x'); ylabel('y');
    title('Beta(x, y) via built-in \beta(x,y)');
    set(gca, 'FontSize', 12);
    colormap(turbo);
    clim(heatClip);
end

if showCustomB
    figure('Name','Beta Function (custom)','NumberTitle','off');
    imagesc(x, y, B_custom);
    axis square; axis xy; colorbar;
    xlabel('x'); ylabel('y');
    title('Beta(x, y) via custom \beta(x,y)');
    set(gca, 'FontSize', 12);
    colormap(turbo);
    clim(heatClip);
end

if showCustomGB
    figure('Name','Beta Function (via Gamma)','NumberTitle','off');
    imagesc(x, y, B_Cgamma);
    axis square; axis xy; colorbar;
    xlabel('x'); ylabel('y');
    title('Beta(x, y) = \Gamma(x)\Gamma(y) / \Gamma(x+y)');
    set(gca, 'FontSize', 12);
    colormap(turbo);
    clim(heatClip);
end

