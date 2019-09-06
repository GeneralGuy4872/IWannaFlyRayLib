datakeeper = makepathdata({pointa},{pointb})
setpathobs(&datakeeper,fly,swim)

setcoord3* current = datakeeper→hydra_ptr→next
setcoord3* last = datakeeper→hydra_ptr→next
setcoord3* nearest = datakeeper→hydra_ptr→next
float diagonal2
float diagonal3

if (
	(current→x + 1 < MAX_X) &&
	(!(datakeeper→grid[COORDSUB(current→z,current→y,current→x + 1)].obs)) && (
		((datakeeper→grid[COORDSUB(current→z,current→y,current→x + 1)].runningdist) > (datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1)) ||
		((datakeeper→grid[COORDSUB(current→z,current→y,current→x + 1)].runningdist) < 0)
		)
	) {
	datakeeper→grid[COORDSUB(current→z,current→y,current→x + 1)].runningdist = datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1
	datakeeper→grid[COORDSUB(current→z,current→y,current→x + 1)].az = 2
	datakeeper→grid[COORDSUB(current→z,current→y,current→x + 1)].up = false
	datakeeper→grid[COORDSUB(current→z,current→y,current→x + 1)].fwd = true
	datakeeper→grid[COORDSUB(current→z,current→y,current→x + 1)].down = false
	setcoord3* tmp = malloc(sizeof(setcoord3))
	tmp→x = current→x + 1
	tmp→y = current→y
	tmp→z = current→z
	tmp→prev = last
	last→next = tmp
	datakeeper→hydra_ptr→prev = tmp
	tmp→next = datakeeper→hydra_ptr
	last = tmp
	}
if (
	(current→x - 1 > 0) &&
	(!(datakeeper→grid[COORDSUB(current→z,current→y,current→x - 1)].obs)) && (
		((datakeeper→grid[COORDSUB(current→z,current→y,current→x - 1)].runningdist) > (datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1)) ||
		((datakeeper→grid[COORDSUB(current→z,current→y,current→x - 1)].runningdist) < 0)
		)
	) {
	datakeeper→grid[COORDSUB(current→z,current→y,current→x - 1)].runningdist = datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1
	datakeeper→grid[COORDSUB(current→z,current→y,current→x - 1)].az = 6
	datakeeper→grid[COORDSUB(current→z,current→y,current→x - 1)].up = false
	datakeeper→grid[COORDSUB(current→z,current→y,current→x - 1)].fwd = true
	datakeeper→grid[COORDSUB(current→z,current→y,current→x - 1)].down = false
	setcoord3* tmp = malloc(sizeof(setcoord3))
	tmp→x = current→x - 1
	tmp→y = current→y
	tmp→z = current→z
	tmp→prev = last
	last→next = tmp
	datakeeper→hydra_ptr→prev = tmp
	tmp→next = datakeeper→hydra_ptr
	last = tmp
	}
if (
	(current→y + 1 < MAX_Y) &&
	(!(datakeeper→grid[COORDSUB(current→z,current→y + 1,current→x)].obs)) && (
		((datakeeper→grid[COORDSUB(current→z,current→y + 1,current→x)].runningdist) > (datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1)) ||
		((datakeeper→grid[COORDSUB(current→z,current→y + 1,current→x)].runningdist) < 0)
		)
	) {
	datakeeper→grid[COORDSUB(current→z,current→y + 1,current→x)].runningdist = datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1
	datakeeper→grid[COORDSUB(current→z,current→y + 1,current→x)].az = 0
	datakeeper→grid[COORDSUB(current→z,current→y + 1,current→x)].up = false
	datakeeper→grid[COORDSUB(current→z,current→y + 1,current→x)].fwd = true
	datakeeper→grid[COORDSUB(current→z,current→y + 1,current→x)].down = false
	setcoord3* tmp = malloc(sizeof(setcoord3))
	tmp→x = current→x
	tmp→y = current→y + 1
	tmp→z = current→z
	tmp→prev = last
	last→next = tmp
	datakeeper→hydra_ptr→prev = tmp
	tmp→next = datakeeper→hydra_ptr
	last = tmp
	}
if (
	(current→z - 1 > 0) &&
	(!(datakeeper→grid[COORDSUB(current→z,current→y - 1,current→x)].obs)) && (
		((datakeeper→grid[COORDSUB(current→z,current→y - 1,current→x)].runningdist) > (datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1)) ||
		((datakeeper→grid[COORDSUB(current→z,current→y - 1,current→x)].runningdist) < 0)
		)
	) {
	datakeeper→grid[COORDSUB(current→z,current→y - 1,current→x)].runningdist = datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1
	datakeeper→grid[COORDSUB(current→z,current→y - 1,current→x)].az = 0
	datakeeper→grid[COORDSUB(current→z,current→y - 1,current→x)].up = false
	datakeeper→grid[COORDSUB(current→z,current→y - 1,current→x)].fwd = true
	datakeeper→grid[COORDSUB(current→z,current→y - 1,current→x)].down = false
	setcoord3* tmp = malloc(sizeof(setcoord3))
	tmp→x = current→x
	tmp→y = current→y - 1
	tmp→z = current→z
	tmp→prev = last
	last→next = tmp
	datakeeper→hydra_ptr→prev = tmp
	tmp→next = datakeeper→hydra_ptr
	last = tmp
	}
if (
	(current→z + 1 < CEILING) &&
	(!(datakeeper→grid[COORDSUB(current→z + 1,current→y,current→x)].obs)) && (
		((datakeeper→grid[COORDSUB(current→z + 1,current→y,current→x)].runningdist) > (datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1)) ||
		((datakeeper→grid[COORDSUB(current→z + 1,current→y,current→x)].runningdist) < 0)
		)
	) {
	datakeeper→grid[COORDSUB(current→z + 1,current→y,current→x)].runningdist = datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1
	datakeeper→grid[COORDSUB(current→z,current→y + 1,current→x)].az = 0
	datakeeper→grid[COORDSUB(current→z,current→y + 1,current→x)].up = true
	datakeeper→grid[COORDSUB(current→z,current→y + 1,current→x)].fwd = false
	datakeeper→grid[COORDSUB(current→z,current→y + 1,current→x)].down = false
	setcoord3* tmp = malloc(sizeof(setcoord3))
	tmp→x = current→x
	tmp→y = current→y
	tmp→z = current→z + 1
	tmp→prev = last
	last→next = tmp
	datakeeper→hydra_ptr→prev = tmp
	tmp→next = datakeeper→hydra_ptr
	last = tmp
	}
if (
	(current→x - 1 > 0) &&
	(!(datakeeper→grid[COORDSUB(current→z - 1,current→y,current→x)].obs)) && (
		((datakeeper→grid[COORDSUB(current→z - 1,current→y,current→x)].runningdist) > (datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1)) ||
		((datakeeper→grid[COORDSUB(current→z - 1,current→y,current→x)].runningdist) < 0)
		)
	) {
	datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist = datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1
	datakeeper→grid[COORDSUB(current→z,current→y + 1,current→x)].az = 0
	datakeeper→grid[COORDSUB(current→z,current→y + 1,current→x)].up = false
	datakeeper→grid[COORDSUB(current→z,current→y + 1,current→x)].fwd = false
	datakeeper→grid[COORDSUB(current→z,current→y + 1,current→x)].down = true
	setcoord3* tmp = malloc(sizeof(setcoord3))
	tmp→x = current→x
	tmp→y = current→y
	tmp→z = current→z - 1
	tmp→prev = last
	last→next = tmp
	datakeeper→hydra_ptr→prev = tmp
	tmp→next = datakeeper→hydra_ptr
	last = tmp
	}

if (!ortho) {
	switch norm : {
		case 0 : diagonal2 = 1; diagonal3 = 1; break;
		case 1 : diagonal2 = 2; diagonal3 = 3; break;
		case 2 : diagonal2 = M_SQRT2; diagonal3 = SQRT3; break;
		default : //invalid norm
		}

	if (
	(current→x + 1 < MAX_X) &&
	(!(datakeeper→grid[COORDSUB(current→z,current→y,current→x + 1)].obs)) && (
		((datakeeper→grid[COORDSUB(current→z,current→y,current→x + 1)].runningdist) > (datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1)) ||
		((datakeeper→grid[COORDSUB(current→z,current→y,current→x + 1)].runningdist) < 0)
		)
	) {
	datakeeper→grid[COORDSUB(current→z,current→y,current→x + 1)].runningdist = datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1
	setcoord3* tmp = malloc(sizeof(setcoord3))
	tmp→x = current→x + 1
	tmp→y = current→y
	tmp→z = current→z
	tmp→prev = last
	last→next = tmp
	datakeeper→hydra_ptr→prev = tmp
	tmp→next = datakeeper→hydra_ptr
	last = tmp
	}
if (
	(current→x - 1 > 0) &&
	(!(datakeeper→grid[COORDSUB(current→z,current→y,current→x - 1)].obs)) && (
		((datakeeper→grid[COORDSUB(current→z,current→y,current→x - 1)].runningdist) > (datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1)) ||
		((datakeeper→grid[COORDSUB(current→z,current→y,current→x - 1)].runningdist) < 0)
		)
	) {
	datakeeper→grid[COORDSUB(current→z,current→y,current→x - 1)].runningdist = datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1
	setcoord3* tmp = malloc(sizeof(setcoord3))
	tmp→x = current→x - 1
	tmp→y = current→y
	tmp→z = current→z
	tmp→prev = last
	last→next = tmp
	datakeeper→hydra_ptr→prev = tmp
	tmp→next = datakeeper→hydra_ptr
	last = tmp
	}
if (
	(current→y + 1 < MAX_Y) &&
	(!(datakeeper→grid[COORDSUB(current→z,current→y + 1,current→x)].obs)) && (
		((datakeeper→grid[COORDSUB(current→z,current→y + 1,current→x)].runningdist) > (datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1)) ||
		((datakeeper→grid[COORDSUB(current→z,current→y + 1,current→x)].runningdist) < 0)
		)
	) {
	datakeeper→grid[COORDSUB(current→z,current→y + 1,current→x)].runningdist = datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1
	setcoord3* tmp = malloc(sizeof(setcoord3))
	tmp→x = current→x
	tmp→y = current→y + 1
	tmp→z = current→z
	tmp→prev = last
	last→next = tmp
	datakeeper→hydra_ptr→prev = tmp
	tmp→next = datakeeper→hydra_ptr
	last = tmp
	}
if (
	(current→z - 1 > 0) &&
	(!(datakeeper→grid[COORDSUB(current→z,current→y - 1,current→x)].obs)) && (
		((datakeeper→grid[COORDSUB(current→z,current→y - 1,current→x)].runningdist) > (datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1)) ||
		((datakeeper→grid[COORDSUB(current→z,current→y - 1,current→x)].runningdist) < 0)
		)
	) {
	datakeeper→grid[COORDSUB(current→z,current→y - 1,current→x)].runningdist = datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1
	setcoord3* tmp = malloc(sizeof(setcoord3))
	tmp→x = current→x
	tmp→y = current→y - 1
	tmp→z = current→z
	tmp→prev = last
	last→next = tmp
	datakeeper→hydra_ptr→prev = tmp
	tmp→next = datakeeper→hydra_ptr
	last = tmp
	}
if (
	(current→z + 1 < CEILING) &&
	(!(datakeeper→grid[COORDSUB(current→z + 1,current→y,current→x)].obs)) && (
		((datakeeper→grid[COORDSUB(current→z + 1,current→y,current→x)].runningdist) > (datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1)) ||
		((datakeeper→grid[COORDSUB(current→z + 1,current→y,current→x)].runningdist) < 0)
		)
	) {
	datakeeper→grid[COORDSUB(current→z + 1,current→y,current→x)].runningdist = datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1
	setcoord3* tmp = malloc(sizeof(setcoord3))
	tmp→x = current→x
	tmp→y = current→y
	tmp→z = current→z + 1
	tmp→prev = last
	last→next = tmp
	datakeeper→hydra_ptr→prev = tmp
	tmp→next = datakeeper→hydra_ptr
	last = tmp
	}
if (
	(current→x - 1 > 0) &&
	(!(datakeeper→grid[COORDSUB(current→z - 1,current→y,current→x)].obs)) && (
		((datakeeper→grid[COORDSUB(current→z - 1,current→y,current→x)].runningdist) > (datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1)) ||
		((datakeeper→grid[COORDSUB(current→z - 1,current→y,current→x)].runningdist) < 0)
		)
	) {
	datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist = datakeeper→grid[COORDSUB(current→z,current→y,current→x)].runningdist + 1
	setcoord3* tmp = malloc(sizeof(setcoord3))
	tmp→x = current→x
	tmp→y = current→y
	tmp→z = current→z - 1
	tmp→prev = last
	last→next = tmp
	datakeeper→hydra_ptr→prev = tmp
	tmp→next = datakeeper→hydra_ptr
	last = tmp
	}
	