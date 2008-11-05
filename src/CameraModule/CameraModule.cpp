#include <iostream>
#include <string>

#include "CameraModule.h"
#include "IEvent.h"
#include "IEventListener.h"

using namespace std;

void CameraModule::addEventListener(enum IEvent::EventType type, IEventListener* listener) {
}


void CameraModule::removeEventListener(enum IEvent::EventType type, IEventListener* listener) {
}

CameraModule::CameraModule() {
	cout << "Camera module created" << endl;
}

string CameraModule::saveSnapshot(){
	return string("kanin");
}


