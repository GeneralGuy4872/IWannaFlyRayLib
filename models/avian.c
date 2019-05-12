bone *sculpt_avian()
  {
  polygon pelvis[4] = bone_tetra(.125,.346,.1)
  *center = (foo->root,NULL,NULL,(0,0,0),(.1,-.125,.346),matgen_ident,matgen_ident,FALSE,*pelvis,4)
  //(*up,*prev,*next,(off.x,off.y,off.z),(len.x,len.y,len.z),base,curr,drawline,*faces,n_polys)
  bone *cervical = spine(*center,*center,.66,17)
  bone *neck = spine(*cervical,*cervical,.125,7)
  polygon skull[8] = bone_octohedron(.1)
  bone *head = (*neck,*neck,NULL,(0,0,1),(0,.1,0),matgen_ident,matgen_ident,FALSE,*skull,8)
  doublelink(*head)
  bone *lshoulder = (*cervical,*head,NULL,(0,0,0),(.198,0,0),matgen_z_deg(-90),matgen_ident,TRUE,NULL,0)
  doublelink(*lshoulder)
  bone *lwrist = arm(*lshoulder,*lshoulder,.3,LEFT)
  bone *lthumb = thumbphalanges(*lwrist,*lwrist,3,(0,0,45))
  bone *lcarple3 = (*lwrist,*lthumb,NULL,(1,0,0),(lwrist->len.x / M_PI,0,0),matgen_ident,matgen_ident,TRUE,NULL,0)
  doublelink(*lcarple3)
  bone *lfinger3 = handphalanges(*lcarple3,*lcarple3,3,(0,0,0))
  bone *lcarple2 = (*lwrist,*lfinger3,NULL,(1,0,0),((lwrist->len.x / M_PI) * COS_PI_32,0,0),matgen_z_deg(11.25),matgen_ident,TRUE,NULL,0)
  doublelink(*lcarple2)
  bone *lfinger2 = handphalanges(*lcarple2,*lcarple2,3,(0,0,-11.25))
  bone *lcarple4 = (*lwrist,*lfinger2,NULL,(1,0,0),((lwrist->len.x / M_PI) * COS_PI_32,0,0),matgen_z_deg(-11.25),matgen_ident,TRUE,NULL,0)
  doublelink(*lcarple4)
  bone *lfinger4 = handphalanges(*lcarple4,*lcarple4,3,(0,0,11.25))
  bone *rshoulder = (*cervical,*lfinger4,NULL,(0,0,0),(.198,0,0),matgen_z_deg(90),matgen_ident,TRUE,NULL,0)
  doublelink(*rshoulder)
  bone *rwrist = arm(*rshoulder,*rshoulder,.3,RIGHT)
  bone *rthumb = thumbphalanges(*rwrist,*rwrist,3,(0,0,-45))
  bone *rcarple3 = (*rwrist,*rthumb,NULL,(1,0,0),(rwrist->len.x / M_PI,0,0),matgen_ident,matgen_ident,TRUE,NULL,0)
  doublelink(*rcarple3)
  bone *rfinger3 = handphalanges(*rcarple3,*rcarple3,3,(0,0,0))
  bone *rcarple2 = (*rwrist,*rfinger3,NULL,(1,0,0),((rwrist->len.x / M_PI) * COS_PI_32,0,0),matgen_z_deg(-11.25),matgen_ident,TRUE,NULL,0)
  doublelink(*rcarple2)
  bone *rfinger2 = handphalanges(*rcarple2,*rcarple2,3,(0,0,11.25))
  bone *rcarple4 = (*rwrist,*rfinger2,NULL,(1,0,0),((rwrist->len.x / M_PI) * COS_PI_32,0,0),matgen_z_deg(11.25),matgen_ident,TRUE,NULL,0)
  doublelink(*rcarple4)
  bone *rfinger4 = handphalanges(*rcarple4,*rcarple4,3,(0,0,-11.25))
  bone *lankle = digiti(*rfinger4,*center,.48,-15,LEFT)
  bone *ltarsel2 = (*lankle,*lankle,NULL,(0,0,1),(lankle->len.z * -1 / M_PI_2,0,0),matgen_ident,matgen_ident,TRUE,NULL,0)
  doublelink(*ltarsel2)
  bone *ltoe2 = footphalanges(*ltarsel2,*ltarsel2,3,(0,0,0))
  bone *ltarsel1 = (*lankle,*ltoe2,NULL,(0,0,1),(lankle->len.z * -1 / M_PI_2,0,0),matgen_z_deg(5.625),matgen_ident,TRUE,NULL,0)
  doublelink(*ltarsel1)
  bone *ltoe1 = footphalanges(*ltarsel1,*ltarsel1,2,(0,0,-5.625))
  bone *ltarsel3 = (*lankle,*ltoe1,NULL,(0,0,1),((lankle->len.z * -1 / M_PI_2) * COS_PI_32,0,0),matgen_z_deg(-5.625),matgen_ident,TRUE,NULL,0)
  doublelink(*ltarsel3)
  bone *ltoe3 = footphalanges(*ltarsel3,*ltarsel3,3,(0,0,5.625))
  bone *ltarsel4 = (*lankle,*ltoe1,NULL,(0,0,1),((lankle->len.z * -1 / M_PI_2) * COS_PI_16,0,0),matgen_z_deg(-11.25),matgen_ident,TRUE,NULL,0)
  doublelink(*ltarsel4)
  bone *ltoe4 = footphalanges(*ltarsel4,*ltarsel4,3,(0,0,11.25))
  bone *ltarsel5 = (*lankle,*ltoe1,NULL,(0,0,1),((lankle->len.z * -1 / M_PI_2) * COS_PI_8,0,0),matgen_z_deg(-16.875),matgen_ident,TRUE,NULL,0)
  doublelink(*ltarsel5)
  bone *ltoe5 = footphalanges(*ltarsel5,*ltarsel5,3,(0,0,22.5))
  bone *rankle = leg(*ltoe5,*center,.48,-15,RIGHT)
  bone *rtarsel2 = (*rankle,*rankle,NULL,(0,0,1),(rankle->len.z * -1 / M_PI_2,0,0),matgen_ident,matgen_ident,TRUE,NULL,0)
  doublelink(*rtarsel2)
  bone *rtoe2 = footphalanges(*rtarsel2,*rtarsel2,3,(0,0,0))
  bone *rtarsel1 = (*rankle,*rtoe2,NULL,(0,0,1),(rankle->len.z * -1 / M_PI_2,0,0),matgen_z_deg(-5.625),matgen_ident,TRUE,NULL,0)
  doublelink(*rtarsel1)
  bone *rtoe1 = footphalanges(*rtarsel1,*rtarsel1,2,(0,0,5.625))
  bone *rtarsel3 = (*rankle,*rtoe1,NULL,(0,0,1),((rankle->len.z * -1 / M_PI_2) * COS_PI_32,0,0),matgen_z_deg(5.625),matgen_ident,TRUE,NULL,0)
  doublelink(*rtarsel3)
  bone *rtoe3 = footphalanges(*ltarsel3,*ltarsel3,3,(0,0,-5.625))
  bone *rtarsel4 = (*rankle,*rtoe1,NULL,(0,0,1),((rankle->len.z * -1 / M_PI_2) * COS_PI_16,0,0),matgen_z_deg(11.25),matgen_ident,TRUE,NULL,0)
  doublelink(*rtarsel4)
  bone *rtoe4 = footphalanges(*rtarsel4,*rtarsel4,3,(0,0,-11.25))
  bone *rtarsel5 = (*rankle,*rtoe1,NULL,(0,0,1),((rankle->len.z * -1 / M_PI_2) * COS_PI_8,0,0),matgen_z_deg(16.875),matgen_ident,TRUE,NULL,0)
  doublelink(*rtarsel5)
  bone *rtoe5 = footphalanges(*rtarsel5,*rtarsel5,3,(0,0,-22.5))
  return *center
}