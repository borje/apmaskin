#include <iostream>
#include "CameraModule/CameraModule.h"
#include "SteeringModule/SteeringModule.h"
#include "CommandInterpreterModule/CommandInterpreterModule.h"


using namespace std;

int main(int argc, char *argv[]) {
	CameraModule camera;
	SteeringModule steerer;
	CommandInterpreterModule *commandInterpreter = CommandInterpreterModule::getInstance();
	commandInterpreter->registerCommands();
	camera.registerCommands();
	steerer.registerCommands();
	steerer.setSpeed(-25);
//	commandInterpreter->start();
//	CommandInterpreterModule::destroy();

	return 0;
}
