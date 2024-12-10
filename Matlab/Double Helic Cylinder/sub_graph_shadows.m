shadow_xy = surf(cyl_x,cyl_y,cyl_z*0.01-15);
shadow_xz = surf(cyl_x,cyl_y*0.01+15,cyl_z);
shadow_yz = surf(cyl_x*0.01-15,cyl_y,cyl_z);

shadowEdgeAlpha=0;
ShadowColor=[0,0,1];
ShadowAlpha=0.15;

shadow_xy.EdgeAlpha             = shadowEdgeAlpha;
shadow_xy.FaceColor             = ShadowColor;
shadow_xy.FaceLighting          = "gouraud";
shadow_xy.FaceAlpha             = ShadowAlpha;

shadow_xz.EdgeAlpha             = shadowEdgeAlpha;
shadow_xz.FaceColor             = ShadowColor;
shadow_xz.FaceLighting          = "gouraud";
shadow_xz.FaceAlpha             = ShadowAlpha;

shadow_yz.EdgeAlpha             = shadowEdgeAlpha;
shadow_yz.FaceColor             = ShadowColor;
shadow_yz.FaceLighting          = "gouraud";
shadow_yz.FaceAlpha             = ShadowAlpha;