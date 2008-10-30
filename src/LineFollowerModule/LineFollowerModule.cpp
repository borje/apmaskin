/*
 * LineFollowerModule.cpp
 *
 *  Created on: 2008-okt-22
 *      Author: daniel.bengtsson
 */

#include <iostream>

#include "LineFollowerModule.h"
#include "IEvent.h"

using namespace std;

LineFollowerModule::LineFollowerModule() {
	cout << "Line follower created" << endl;

}

LineFollowerModule::~LineFollowerModule() {
	std::cout << "Destroying LineFollowerModule" << std::endl;
}

void LineFollowerModule::eventHandler(IEvent* e) {

}
