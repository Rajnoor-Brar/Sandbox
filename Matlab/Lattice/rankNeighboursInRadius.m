function [coords_f, idx, idxFull, vals, freq, ranks] = ...
    rankNeighboursInRadius(coords, distances, distMax)
    
    decimalTolerance = 12;

    gridSize = size(distances);
    distances_vec = distances(:);

    % Quantize ALL distances
    distances_q_all = round(distances,decimalTolerance,'significant');

    % Global ranking (independent of distMax)
    [~, ~, idxFull] = unique(distances_q_all, 'sorted');
    idxFull = idxFull - 1;                      % 0-based
    idxFull = reshape(idxFull, gridSize);       % full grid field


    %% --- FILTERED / LOCAL ANALYSIS ---

    mask = distances_vec <= distMax;

    % Filtered coordinates
    coords_f = cellfun(@(c) c(mask), coords, 'UniformOutput', false);

    % Filtered ranks (derived from global idxFull)
    idx = idxFull(mask);

    % Recompute unique values ONLY for filtered set
    [vals, ~, idx_local] = unique(distances_q_all(mask), 'sorted');

    ranks = (0:numel(vals)-1).';                % local 0-based ranks
    freq  = accumarray(idx_local, 1);

end