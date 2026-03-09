distances = distances(:);

mask = distances <= distMax;
distances = distances(mask);

coords_f = cell(size(coords));

for k = 1:numel(coords)
    coords_f{k} = coords{k}(mask);
end

tol = 1e-6; distances_q = round(distances / tol) * tol;

[vals, ~, idx] = unique(distances_q, 'sorted');

rank = ((1:numel(vals))-1).';
freq = accumarray(idx, 1);