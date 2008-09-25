#include "CameraModule.h"
#include <iostream>

using namespace std;

void CameraModule::addEventListener(enum EventType type, IEventListener* listener) {
}


void CameraModule::removeEventListener(enum EventType type, IEventListener* listener) {
}

CameraModule::CameraModule() {
	cout << "Camera module created" << endl;
}
