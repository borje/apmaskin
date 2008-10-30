#ifndef IEVENTLISTENER_H_
#define IEVENTLISTENER_H_

class IEvent;


class IEventListener {
public:
	virtual ~IEventListener() {};
	virtual void eventHandler(IEvent* e)=0;
};

#endif /* IEVENTLISTENER_H_ */
