#include "CommandInterpreterModule.h"
#include <iostream>
#include <pthread.h>

#include "IEvent.h"

using namespace std;

CommandInterpreterModule::CommandInterpreterModule() {
	cout << "Command interpreter created" << endl;
}

CommandInterpreterModule::~CommandInterpreterModule() {
	cout << "Destroying command interpreter module" << endl;
}

void CommandInterpreterModule::eventHandler(IEvent* i) {

}
