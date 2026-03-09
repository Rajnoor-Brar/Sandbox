clc,clear, close all;

gridExpanse = 12;

scatterSize = 12;
showLattice = true;

[X,Y,distMax] = pSquare(gridExpanse);

coords={X,Y};

distances = vecnorm([X(:), Y(:)], 2, 2);
distances = reshape(distances, size(X));

[coords_f, idx, ~ , vals, freq,rank] = rankNeighboursInRadius(coords, distances, distMax);

figure Name 'Rank Distribution'
scatter(rank, freq, scatterSize, 'filled')
xlabel('Distance rank (ascending)')
ylabel('Frequency')
grid on

figure Name 'Distance Distribution'
scatter(vals, freq, scatterSize, 'filled')
xlabel('Distance')
ylabel('Count')
grid on

if showLattice
    PlanarLattice(coords,coords_f,idx,vals)
end

