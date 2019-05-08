skeleton *sculpt_human()
  {
  polygon pelvis[1] = bone_inv_triangle(2,.5)
  *center = (foo->root,NULL,NULL,(0,2,.5),(0,0,0),(FALSE,FALSE,FALSE),matgen_identity,matgen_identity,FALSE,*pelvis,1)
  //(*up,*prev,*next,(len.x,len.y,len.z),(trans.x,trans.y,trans.z),(freedom.x,freedom.y,freedom.z),base,curr,drawline,*faces,n_polys)
  skeleton foo = (),!!!!!COMEBACKHERE!!!!!,((1,1,1),(0,0,0)))
  polygon skull[8] = bone_octohedron(.5)
  bone *cervical = spine(*center,*center,.2,10)
  bone *head = (*cervical,*skull,NULL,(0,1,0),(0,0,0),(1,1,1),matgen_identity,matgen_identity,FALSE,*skull,8)
  doublelink(*head)
  bone *lshoulder = (*cervical,*skull,NULL,(1,0,0),(0,0,0),(FALSE,TRUE,TRUE),matgen_z_deg(90,-1,1,-1),matgen_translate(1,0,0),TRUE,NULL,0)
  doublelink(*lshoulder)
  bone *lwrist = arm(*lshoulder,*lshoulder,2)
  bone *lthumb = handphalanges(*lwrist,*lwrist,3,(0,0,-45))
  bone *lcarple3 = (*lwrist,*thumb,NULL,(lwrist->len.x / M_PI,0,0),(0,0,0),(FALSE,TRUE,TRUE),matgen_z_deg(11.25,1,1,1),TRUE,NULL,0)
  doublelink(*lcarple3)
  bone *lfinger3 = handphalanges(*carple3,*carple3,3,(0,0,-11.25)))
  bone *lcarple2 = (*lwrist,*finger3,NULL,((lwrist->len.x / M_PI) * COS_PI_8,0,0),(0,0,0),(FALSE,TRUE,TRUE),matgen_z_deg(22.5,1,1,1),TRUE,NULL,0)
  doublelink(*lcarple2)
  bone *lfinger2 = handphalanges(*carple2,*carple2,3,(0,0,-22.5))
  bone *lcarple4 = (*lwrist,*finger2,NULL,((lwrist->len.x / M_PI) * COS_PI_8,0,0),(0,0,0),(FALSE,TRUE,TRUE),matgen_z_deg(11.25,1,1,1),TRUE,NULL,0)
  doublelink(*lcarple4)
  bone *lfinger4 = handphalanges(*carple4,*carple4,3,(0,0,-11.25))
  bone *lcarple5 = (*lwrist,*finger4,NULL,((lwrist->len.x / M_PI) * HALF_SQRT_2,0,0),(0,0,0),(FALSE,TRUE,TRUE),matgen_z_deg(22.5,1,1,1),TRUE,NULL,0)
  doublelink(*lcarple5)
  bone *lfinger5 = handphalanges(*carple5,*carple5,3,(0,0,-22.5))
  bone *rshoulder = (*lfinger5,*cervical,NULL,(1,0,0),(0,0,0),(FALSE,TRUE,TRUE),matgen_z_deg(90,1,1,1),matgen_translate(1,0,0),TRUE,NULL,0)
  doublelink(*rshoulder)
  bone *rwrist = arm(*lshoulder,*lshoulder,2)
  bone *rthumb = handphalanges(*lwrist,*lwrist,3,(0,0,-45))
  bone *rcarple3 = (*lwrist,*thumb,NULL,(lwrist->len.x / M_PI,0,0),(0,0,0),(FALSE,TRUE,TRUE),matgen_z_deg(11.25,1,1,1),TRUE,NULL,0)
  doublelink(*rcarple3)
  bone *rfinger3 = handphalanges(*carple3,*carple3,3,(0,0,-11.25))
  bone *rcarple2 = (*lwrist,*finger3,NULL,((lwrist->len.x / M_PI) * COS_PI_8,0,0),(0,0,0),(FALSE,TRUE,TRUE),matgen_z_deg(22.5,1,1,1),TRUE,NULL,0)
  doublelink(*rcarple2)
  bone *rfinger2 = handphalanges(*carple2,*carple2,3,(0,0,-22.5))
  bone *rcarple4 = (*lwrist,*finger2,NULL,((lwrist->len.x / M_PI) * COS_PI_8,0,0),(0,0,0),(FALSE,TRUE,TRUE),matgen_z_deg(11.25,1,1,1),TRUE,NULL,0)
  doublelink(*rcarple4)
  bone *rfinger4 = handphalanges(*carple4,*carple4,3,(0,0,-11.25))
  bone *rcarple5 = (*lwrist,*finger4,NULL,((lwrist->len.x / M_PI) * HALF_SQRT_2,0,0),(0,0,0),(FALSE,TRUE,TRUE),matgen_z_deg(22.5,1,1,1),TRUE,NULL,0)
  doublelink(*rcarple5)
  bone *rfinger5 = handphalanges(*carple5,*carple5,3,(0,0,-22.5))
  bone *lankle = leg(*rfinger5,*center,2,15,(-1,-1,-1),(0,-1 * center->len.y,-1 * center->len.z))
  bone *ltarsle2 = (*lankle,*lankle,NULL,(lwrist->len.x / M_PI_2,0,0),(0,0,0),(FALSE,TRUE,TRUE),matgen_identity,TRUE,NULL,0)
  
