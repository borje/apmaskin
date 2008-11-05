#ifndef CAMERAMODULE_H_
#define CAMERAMODULE_H_

#include <list>

#include "IEvent.h"
#include "IEventGenerator.h"
#include <string>
class IEventListener;

using namespace std;

class CameraModule : public IEventGenerator {
private:
	list<IEventListener*> positionErrorListeners;
	list<IEventListener*> intersectionFoundListeners;
	list<IEventListener*> numberFoundListeners;
public:
	CameraModule();
	void addEventListener(IEvent::EventType type, IEventListener* listener);	//IEventGenerator
	void removeEventListener(IEvent::EventType type, IEventListener* listener); //IEventGenerator
	string saveSnapshot();
};

#endif /* CAMERAMODULE_H_ */
