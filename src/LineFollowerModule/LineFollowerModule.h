/*
 * LineFollowerModule.h
 *
 *  Created on: 2008-okt-22
 *      Author: daniel.bengtsson
 */

#ifndef LINEFOLLOWERMODULE_H_
#define LINEFOLLOWERMODULE_H_
#include <iostream>

#include "IEventListener.h"

class IEvent;

class LineFollowerModule: public IEventListener {
public:
	LineFollowerModule();
	~LineFollowerModule();
	void eventHandler(IEvent* e);
};

#endif /* LINEFOLLOWERMODULE_H_ */
