/*
 * SteeringModule.cpp
 *
 *  Created on: 2009-feb-04
 *      Author: pero
 */

#include "SteeringModule.h"
#include "CommandInterpreterModule.h"
#include <iostream>


using namespace std;

SteeringModule::SteeringModule() {
	// TODO Auto-generated constructor stub

}

SteeringModule::~SteeringModule() {
	// TODO Auto-generated destructor stub
}


void SteeringModule::addEventListener(enum IEvent::EventType type, IEventListener* listener) {
}


void SteeringModule::removeEventListener(enum IEvent::EventType type, IEventListener* listener) {
}

void SteeringModule::executeCommand(int cmdID, std::list<int> arguments) {

	if (cmdID == CMD_INCREASE_LEFT) {
	cout << "Vill köra vänster" << endl;
	}
	else if (cmdID == CMD_INCREASE_RIGHT){
		cout << "Vill köra höger " << endl;
	}
	else {
		cout << "Okänt styrkommando " << endl;
	}

}


void SteeringModule::registerCommands() {
	CommandInterpreterModule *ci = CommandInterpreterModule::getInstance();
	ci->registerCommand("increaseleft", CMD_INCREASE_LEFT, this);
	ci->registerCommand("increaseright", CMD_INCREASE_RIGHT, this);
}

//Assumes that the input value is between -63 and +64
void SteeringModule::setSpeed(int8_t desiredSpeed) {

	uint8_t engineSpeedLeft = 0;
	uint8_t engineSpeedRight = 0;

	assert((desiredSpeed < 64) && (desiredSpeed >= -63)); //Checks that a 7-bit number is used

	if (desiredSpeed > 0) {
		cout << "desiredSpeed = " << static_cast<int>(desiredSpeed) << endl;
		engineSpeedLeft = 64+desiredSpeed;
		engineSpeedRight = 192+desiredSpeed;
		cout << "engineSpeedRight after conversion = " << static_cast<int>(engineSpeedRight) << endl
		<< "engineSpeedLeft after conversion = "  << static_cast<int>(engineSpeedLeft) << endl;
	}
	else if (desiredSpeed < 0) {
		cout << "desiredSpeed = " << static_cast<int>(desiredSpeed) << endl;
		engineSpeedLeft = 64+desiredSpeed;
		engineSpeedRight = 192+desiredSpeed;
		cout << "engineSpeedRight after conversion = " << static_cast<int>(engineSpeedRight) << endl;

		cout << "engineSpeedLeft after conversion = " << static_cast<int>(engineSpeedLeft) << endl;

	}
	else {
		engineSpeedLeft = 64;
		engineSpeedRight = 192;
	}

}
