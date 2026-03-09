function Surfaces = SpatialLattice(idx, ranks, ~, coords_f)

    %% ===== USER OPTIONS =====
    showGrids   = true;
    showSurfs   = true;
    showScatter = true;
    markSize    = 6;

    %% ===== FIGURE SETUP =====
    figure('Name','Lattice')
    hold on
    axis equal

    % --- ranks / colors ---
    nRanks = numel(ranks);
    cmap   = lines(nRanks);

    % --- axes / lighting ---
    view(3)
    camlight
    lighting gouraud

    xlabel('x-axis')
    ylabel('y-axis')
    zlabel('z-axis')
    title('Rank sheets')

    colormap(cmap)
    clim([1 nRanks])
    colorbar

    %% ===== SCATTER (STATIC HANDLE) =====
    hScatter = scatter3(coords_f{1}, coords_f{2}, coords_f{3}, ...
                        markSize, idx, 'filled');

    %% ===== STORAGE =====
    Surfaces        = cell(nRanks,1);
    surfaceHandles  = gobjects(nRanks,1);
    gridHandles     = cell(nRanks,1);

    %% ===== BUILD RANK OBJECTS =====
    for r = 2:nRanks

        mask = (idx == (r-1));   % idx is 0-based
        if ~any(mask)
            continue
        end

        xr = coords_f{1}(mask);
        yr = coords_f{2}(mask);
        zr = coords_f{3}(mask);

        % ---- surface ----
        p = buildRankPatch(xr, yr, zr, cmap(r,:), 1);
        p.Visible = 'off';
        surfaceHandles(r) = p;
        Surfaces{r} = p;

        % ---- grid lines ----
        gridHandles{r} = gobjects(0);

        zvals = unique(zr,'sorted');
        for k = 1:numel(zvals)

            m = zr == zvals(k);
            if nnz(m) < 3
                continue
            end

            xk = xr(m);
            yk = yr(m);

            % order cyclically
            th = atan2(yk, xk);
            [~,ord] = sort(th);
            xk = xk(ord);
            yk = yk(ord);

            % close loop
            xk(end+1) = xk(1);
            yk(end+1) = yk(1);

            h = plot3(xk, yk, ...
                      zvals(k)*ones(size(xk)), ...
                      'Color', [cmap(r,:) 0.6], ...
                      'LineWidth', 1.2);

            h.Visible = 'off';
            gridHandles{r}(end+1) = h;
        end
    end

    %% ===== SLIDER =====
    hSlider = uicontrol( ...
        'Style','slider', ...
        'Min',1, ...
        'Max',nRanks, ...
        'Value',1, ...
        'SliderStep',[1/(nRanks-1) 5/(nRanks-1)], ...
        'Units','normalized', ...
        'Position',[0.2 0.02 0.6 0.04], ...
        'Callback',@(src,~) updateRank(round(src.Value)) );

    %% ===== TOGGLES =====
    uicontrol( ...
        'Style','checkbox', ...
        'String','Show Surfaces', ...
        'Value', showSurfs, ...
        'Units','normalized', ...
        'Position',[0.02 0.92 0.18 0.05], ...
        'Callback', @(src,~) toggleSurfs(src.Value) );

    uicontrol( ...
        'Style','checkbox', ...
        'String','Show Grid Lines', ...
        'Value', showGrids, ...
        'Units','normalized', ...
        'Position',[0.02 0.87 0.18 0.05], ...
        'Callback', @(src,~) toggleGrids(src.Value) );

    uicontrol( ...
        'Style','checkbox', ...
        'String','Show Scatter', ...
        'Value', showScatter, ...
        'Units','normalized', ...
        'Position',[0.02 0.82 0.18 0.05], ...
        'Callback', @(src,~) toggleScatter(src.Value) );

    %% ===== CALLBACKS =====
    function toggleSurfs(val)
        showSurfs = logical(val);
        updateRank(round(hSlider.Value));
    end

    function toggleGrids(val)
        showGrids = logical(val);
        updateRank(round(hSlider.Value));
    end

    function toggleScatter(val)
        showScatter = logical(val);
        if isgraphics(hScatter)
            hScatter.Visible = onOff(showScatter);
        end
    end

    function updateRank(r)

        % ---- hide all rank-dependent objects ----
        for k = 1:nRanks
            if isgraphics(surfaceHandles(k))
                surfaceHandles(k).Visible = 'off';
            end
            if ~isempty(gridHandles{k})
                set(gridHandles{k}, 'Visible', 'off');
            end
        end

        % ---- show selected rank ----
        if showSurfs && isgraphics(surfaceHandles(r))
            surfaceHandles(r).Visible = 'on';
        end

        if showGrids && ~isempty(gridHandles{r})
            set(gridHandles{r}, 'Visible', 'on');
        end

        % ---- scatter (global) ----
        if isgraphics(hScatter)
            hScatter.Visible = onOff(showScatter);
        end

        title(sprintf('Rank = %d', r-1))
    end

    %% ===== INITIAL STATE =====
    updateRank(1);

end

%% ===== HELPER =====
function s = onOff(tf)
    if tf
        s = 'on';
    else
        s = 'off';
    end
end