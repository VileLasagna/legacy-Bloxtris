#ifndef PAN_AND_TILT_EVENT_H
#define PAN_AND_TILT_EVENT_H

#include "ObjectEvent.h"
#include "Vec3.h"

class PanAndTiltEvent: public GOEvent
{

public:

	PanAndTiltEvent(float Time = 0, Vec3f Pan = Vec3f(), Vec3f Tilt = Vec3f());
	void Update(GameObject* target);

protected:

	Vec3f pan, tilt, panNudge, tiltNudge;
	float time;
	bool overTime;





};

#endif //PAN_AND_TILT_EVENT_H