#ifndef CAMERAMODULE_H_
#define CAMERAMODULE_H_

#include "IEvent.h"
#include "IEventListener.h"
#include "IEventGenerator.h"

#include <list>
using namespace std;

class CameraModule : public IEventGenerator {
private:
	list<IEventListener*> positionErrorListeners; 
	list<IEventListener*> intersectionFoundListeners;
	list<IEventListener*> numberFoundListeners;
public:
	CameraModule();
	void addEventListener(EventType type, IEventListener* listener);	//IEventGenerator
	void removeEventListener(EventType type, IEventListener* listener); //IEventGenerator
};

#endif /* CAMERAMODULE_H_ */
