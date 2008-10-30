#ifndef COMMANDINTERPRETERMODULE_H_
#define COMMANDINTERPRETERMODULE_H_

#include  "IEventListener.h"
class IEvent;

class CommandInterpreterModule : public IEventListener {
public:
	CommandInterpreterModule();
	~CommandInterpreterModule();
	void eventHandler(IEvent* e);
};

#endif /*COMMANDINTERPRETERMODULE_H_*/
