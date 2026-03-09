function [coords_f, idx, vals, freq,ranks] = rankByRadius(coords, distances, distMax, tol)

distances = distances(:);
mask = distances <= distMax;
distances = distances(mask);

coords_f = cellfun(@(c)c(mask), coords, 'UniformOutput', false);

distances_q = round(distances / tol) * tol;
[vals, ~, idx] = unique(distances_q, 'sorted');
freq = accumarray(idx, 1);
ranks = ((1:numel(vals))-1).';
end