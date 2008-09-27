#include "CommandInterpreterModule.h"
#include <iostream>
#include <pthread.h>

using namespace std;

CommandInterpreterModule::CommandInterpreterModule() {
	cout << "Command interpreter created" << endl;
}

CommandInterpreterModule::~CommandInterpreterModule() {
}

void CommandInterpreterModule::eventHandler(IEvent i) {
	
}
