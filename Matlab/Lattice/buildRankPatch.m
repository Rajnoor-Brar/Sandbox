function p = buildRankPatch(x,y,z,color,faceAlpha)

    % ---- collect points ----
    P = [x(:), y(:), z(:)];

    % ---- group by z-plane ----
    [zvals,~,iz] = unique(P(:,3),'sorted');
    nZ = numel(zvals);

    planes = cell(nZ,1);
    thetas = cell(nZ,1);
    counts = zeros(nZ,1);

    for k = 1:nZ
        Pk = P(iz==k,:);
        th = atan2(Pk(:,2), Pk(:,1));
        [th,ord] = sort(th);
        planes{k} = Pk(ord,:);
        thetas{k} = th;
        counts(k) = size(Pk,1);
    end

    % ---- base plane (max points) ----
    [~,k0] = max(counts);
    C      = planes{k0};
    thetaC = thetas{k0};
    nC     = numel(thetaC);

    % ---- allocate surf grids ----
    Xs = zeros(nZ, nC);
    Ys = zeros(nZ, nC);
    Zs = zeros(nZ, nC);

    % ---- fill base row ----
    Xs(k0,:) = C(:,1).';
    Ys(k0,:) = C(:,2).';
    Zs(k0,:) = C(:,3).';

    % ---- map all other planes by closest theta ----
    for k = 1:nZ
        if k == k0, continue; end

        Pk = planes{k};
        thk = thetas{k};

        for i = 1:nC
            d = abs(wrapToPi(thk - thetaC(i)));
            [~,j] = min(d);

            Xs(k,i) = Pk(j,1);
            Ys(k,i) = Pk(j,2);
            Zs(k,i) = Pk(j,3);
        end
    end

    %% ========= ADD CAPS =========

    % --- bottom cap ---
    Pbot = planes{1};
    if any(Pbot(:,1)==0 & Pbot(:,2)==0)
        cx = 0; cy = 0;
    else
        cx = mean(Pbot(:,1));
        cy = mean(Pbot(:,2));
    end
    cz = zvals(1);

    Xs = [cx*ones(1,nC); Xs];
    Ys = [cy*ones(1,nC); Ys];
    Zs = [cz*ones(1,nC); Zs];

    % --- top cap ---
    Ptop = planes{end};
    if any(Ptop(:,1)==0 & Ptop(:,2)==0)
        cx = 0; cy = 0;
    else
        cx = mean(Ptop(:,1));
        cy = mean(Ptop(:,2));
    end
    cz = zvals(end);

    Xs = [Xs; cx*ones(1,nC)];
    Ys = [Ys; cy*ones(1,nC)];
    Zs = [Zs; cz*ones(1,nC)];

    %% ========= WRAP THETA SEAM =========
    Xs = [Xs Xs(:,1)];
    Ys = [Ys Ys(:,1)];
    Zs = [Zs Zs(:,1)];

    %% ========= DRAW =========
    p = surf(Xs, Ys, Zs, ...
             'FaceColor', color, ...
             'EdgeColor', '#666', ...
             'FaceAlpha', faceAlpha, ...
             'AmbientStrength', 0.7,...
             'SpecularStrength',0.5);

    lighting gouraud
    axis equal

end