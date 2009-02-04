/*
 * SteeringModule.h
 *
 *  Created on: 2009-feb-04
 *      Author: pero
 */

#ifndef STEERINGMODULE_H_
#define STEERINGMODULE_H_

#include "IEvent.h"
#include "IEventListener.h"
#include "IEventGenerator.h"
#include "ICommandServer.h"
#include "stdint.h"
#include <list>



using namespace std;

class SteeringModule : public IEventGenerator, ICommandServer{
public:
	SteeringModule();
	virtual ~SteeringModule();

	typedef enum {
			CMD_INCREASE_LEFT,
			CMD_INCREASE_RIGHT
		} SteeringCommand;

	void addEventListener(IEvent::EventType type, IEventListener* listener);	//IEventGenerator
	void removeEventListener(IEvent::EventType type, IEventListener* listener); //IEventGenerator
	void executeCommand(int cmdID, std::list<int> arguments); 			//ICommandServer
	void registerCommands();											//ICommandServer

	//Steering commands

	void setSpeed(int8_t) {}


private:
	list<IEventListener*> someKindOfListener;

};

#endif /* STEERINGMODULE_H_ */
