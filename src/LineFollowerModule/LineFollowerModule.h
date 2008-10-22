/*
 * LineFollowerModule.h
 *
 *  Created on: 2008-okt-22
 *      Author: daniel.bengtsson
 */

#ifndef LINEFOLLOWERMODULE_H_
#define LINEFOLLOWERMODULE_H_

#include "IEventListener.h"

class LineFollowerModule: public IEventListener {
public:
	LineFollowerModule();
	virtual ~LineFollowerModule();
	void eventHandler(IEvent e);
};

#endif /* LINEFOLLOWERMODULE_H_ */
