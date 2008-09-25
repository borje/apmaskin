#ifndef COMMANDINTERPRETERMODULE_H_
#define COMMANDINTERPRETERMODULE_H_

#include "IEventListener.h"

class CommandInterpreterModule : public IEventListener {
public:
	CommandInterpreterModule();
	virtual ~CommandInterpreterModule();
	void eventHandler(IEvent e);
};

#endif /*COMMANDINTERPRETERMODULE_H_*/
