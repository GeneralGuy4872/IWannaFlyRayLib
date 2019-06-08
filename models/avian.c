struct bone *sculpt_avian(geomet,cam)
  mesurements geomet
  cameratype *cam
  {
  struct bone *index_pelvis = {NULL,NULL,NULL,{FR_ZERO,FR_ZERO,FR_ZERO},{0,SUITFIT(geomet,hip)/2,SUITFIT(geomet,coxyx)},matgen_ident,matgen_ident,FALSE,malloc(sizeof(struct shape))}
  //{*up,*prev,*next,{off.x,off.y,off.z},{len.x,len.y,len.z},matrix base,matrix curr,bool drawline,shape *geom}
  struct shape *index_pelvis->geom = shape_poly_triangle(SUITFIT(geomet,coxyx),SUITFIT(geomet,hip)/2)
  struct bone *index_spine = spine(index_pelvis,index_pelvis,SUITFIT(geomet,back),16)
  struct bone *index_neck = spine(index_spine,index_spine,SUITFIT(geomet,neck),7)
  struct bone *index_skull = {index_neck,index_neck,NULL,{FR_ZERO,FR_ZERO,FR_ZERO},{SUITFIT(geomet,skull),0,0},matgen_ident,matgen_ident,FALSE,malloc(sizeof(struct shape))}
  struct shape *index_pelvis->geom = shape_poly_octo(SUITFIT(geomet,skull)
  doublelink(index_skull)
  //<HR>
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
  bone *lankle = digiti(*rfinger4,*center,.48,(-15,15),LEFT)
  bone *ltoe2 = talonphalanges(*lankle,*lankle,3,(0,0,30),COS_PI_16)
  bone *ltoe3 = talonphalanges(*ltoe2,*lankle,3,(0,0,0),1)
  bone *ltoe4 = talonphalanges(*ltoe3,*lankle,3,(0,0,-30),COS_PI_8)
  bone *ltoe1 = talonphalanges(*ltoe4,*lankle,2,(0,0,180),M_SQRT1_2)
  bone *rankle = digiti(*ltoe1,*center,.48,(15,15),RIGHT)
  bone *rtoe2 = talonphalanges(*rankle,*rankle,3,(0,0,-30),COS_PI_16)
  bone *rtoe3 = talonphalanges(*rtoe2,*rankle,3,(0,0,0),1)
  bone *rtoe4 = talonphalanges(*rtoe3,*rankle,3,(0,0,30),COS_PI_16)
  bone *rtoe1 = talonphalanges(*rtoe4,*rankle,2,(0,0,-180),COS_PI_8)
  bone *lwing = avewing(*rtoe1,*cervical->prev->prev->prev->prev->prev,.86,LEFT) //.up = vert[(nmax-1)-5]
  bone *rwing = avewing(*lwing,*cervical->prev->prev->prev->prev->prev,.86,RIGHT)
  polygon triangle[1] = bone_inv_triangle(.5,.5)
  bone *tail = (*center,*rwing,NULL,(1,0,0),(0,.5,-.5),matgen_y_deg(45),matgen_ident,FALSE,*triangle,1)
  doublelink(tail)
  return *center
  }
