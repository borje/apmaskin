#ifndef IEVENTGENERATOR_H_
#define IEVENTGENERATOR_H_

#include "IEventListener.h"
class IEvent;

class IEventGenerator {
private:

public:
	virtual ~IEventGenerator() {};
	virtual void addEventListener(IEvent::EventType type, IEventListener* listener) = 0;
	virtual void removeEventListener(IEvent::EventType type, IEventListener* listener) = 0;
};

#endif /* IEVENTGENERATOR_H_ */
