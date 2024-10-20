

%l_pos=[(min(x,[],"all")) (max(a,[],"all")+max(rad,[],"all")) (max(b,[],"all")+max(rad,[],"all"))];
l_pos=[0.4,0.7,0.85];
%g_lght =light(position=l_pos,Style="Infinite");
%cmlght= camlight();

g_cyl.EdgeAlpha             = 0;
g_cyl.FaceColor             = "interp";
g_cyl.FaceAlpha             = 1;
g_cyl.FaceLighting          = "gouraud";
g_cyl.AmbientStrength       = 0.6;
g_cyl.SpecularStrength      = 0.2;


%{

c_cyl=zeros(size(t,2),size(x,2),3);
c_cyl(:,:,1)=100; % (cyl_x- min(cyl_x,[],"all"))/(max(cyl_x,[],"all")-min(cyl_x,[],"all"))*255;
c_cyl(:,:,2)=100; % (cyl_y-min(cyl_y,[],"all"))/(max(cyl_y,[],"all")-min(cyl_y,[],"all"))*255;
c_cyl(:,:,3)=100; % (cyl_z-min(cyl_z,[],"all"))/(max(cyl_z,[],"all")-min(cyl_z,[],"all"))*255;
g_cyl.CData=c_cyl;

%}