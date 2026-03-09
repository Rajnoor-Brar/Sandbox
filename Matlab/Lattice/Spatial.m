clc,clear;
% close all;

gridExpanse = 8;
sampleRadius = "auto";

showLattice = true;
scatterSize = 12;

[X,Y,Z,autoRadius] = sVectoral(gridExpanse);

coords = {X,Y,Z};

distances =  vecnorm([X(:), Y(:), Z(:)], 2, 2);
distances = reshape(distances, size(X));

if sampleRadius == "auto"
    distMax = autoRadius; % calculated in lattice maker
else
    distMax = sampleRadius;
end

[coords_f, idx, ~ , vals, freq,ranks] = rankNeighboursInRadius(coords, distances, distMax);

figure Name 'Rank Distribution'
scatter(ranks, freq, scatterSize, 'filled')
xlabel('Distance rank (ascending)')
ylabel('Frequency')
grid on

figure Name 'Distance Distribution'
scatter(vals, freq, scatterSize, 'filled')
xlabel('Distance')
ylabel('Count')
grid on

if showLattice
    surfs=SpatialLattice(idx,ranks,coords,coords_f);
end
