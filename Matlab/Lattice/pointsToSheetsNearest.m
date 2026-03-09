function [Xs,Ys,Zs] = pointsToSheetsNearest(x,y,z)

    P = [x(:), y(:), z(:)];

    % Group by z-plane
    [zvals,~,iz] = unique(P(:,3),'sorted');
    nZ = numel(zvals);

    counts = accumarray(iz,1);
    N = max(counts);   % sheet width (before wrap)

    % Preallocate (+ possible caps)
    Xs = zeros(nZ+2, N+1);
    Ys = zeros(nZ+2, N+1);
    Zs = zeros(nZ+2, N+1);

    rowOffset = 1;

    %% --- BOTTOM CAP ---
    Pbot = P(iz==1,:);
    hasCenterBot = any(Pbot(:,1)==0 & Pbot(:,2)==0);

    if ~hasCenterBot
        Xs(1,:) = 0;
        Ys(1,:) = 0;
        Zs(1,:) = zvals(1);
    else
        rowOffset = 0;
    end

    %% --- MAIN PLANES ---
    theta_ref = [];   % reference angles from previous plane

    for k = 1:nZ
        Pk = P(iz==k,:);
        nk = size(Pk,1);

        % Compute angles
        theta_k = atan2(Pk(:,2), Pk(:,1));

        if isempty(theta_ref)
            % First plane: sort naturally
            [theta_k,ord] = sort(theta_k);
            Pk = Pk(ord,:);
            theta_ref = theta_k;
        else
            % --- FIX: reorder by closest angular match ---
            used = false(nk,1);
            Pk_new = zeros(size(Pk));
            theta_new = zeros(numel(theta_ref),1);

            for j = 1:numel(theta_ref)
                d = abs(wrapToPi(theta_k - theta_ref(j)));
                d(used) = inf;
                [~,i] = min(d);

                Pk_new(j,:) = Pk(i,:);
                theta_new(j) = theta_k(i);
                used(i) = true;
            end

            Pk = Pk_new;
            theta_k = theta_new;
            theta_ref = theta_k;
        end

        % --- Replicate to length N ---
        if nk == 1
            Pfill = repmat(Pk, N, 1);
        else
            rep = ceil(N / size(Pk,1));
            Pfill = repmat(Pk, rep, 1);
            Pfill = Pfill(1:N,:);
        end

        r = k + rowOffset;

        % Fill row
        Xs(r,1:N) = Pfill(:,1).';
        Ys(r,1:N) = Pfill(:,2).';
        Zs(r,1:N) = Pfill(:,3).';

        % Wrap seam
        Xs(r,N+1) = Xs(r,1);
        Ys(r,N+1) = Ys(r,1);
        Zs(r,N+1) = Zs(r,1);
    end

    %% --- TOP CAP ---
    Ptop = P(iz==nZ,:);
    hasCenterTop = any(Ptop(:,1)==0 & Ptop(:,2)==0);

    if ~hasCenterTop
        r = nZ + rowOffset + 1;
        Xs(r,:) = 0;
        Ys(r,:) = 0;
        Zs(r,:) = zvals(end);
    else
        Xs = Xs(1:nZ+rowOffset,:);
        Ys = Ys(1:nZ+rowOffset,:);
        Zs = Zs(1:nZ+rowOffset,:);
    end
end