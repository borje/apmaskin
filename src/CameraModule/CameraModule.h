#ifndef CAMERAMODULE_H_
#define CAMERAMODULE_H_

#include "IEvent.h"
#include "IEventListener.h"
#include "IEventGenerator.h"
#include "ICommandServer.h"
#include "CameraPicture.h"

#include <list>
#include <vector>

using namespace std;

class WhiteSegmentDescriptor; // Forward declaration of WhiteSegmentDescriptor. Clients of CameraModule do not need to know about it.

class CameraModule : public IEventGenerator, ICommandServer {
private:
	list<IEventListener*> positionErrorListeners;
	list<IEventListener*> intersectionFoundListeners;
	list<IEventListener*> numberFoundListeners;

	bool horizontalSweep( CameraPicture* picture_p, PictureCoordinate_t verticalCoordinate, PictureCoordinate_t startCoordinate,
	                       PictureCoordinate_t sweepWidth, vector<WhiteSegmentDescriptor>* whiteSegmentVector_p );
	bool verticalSweep( CameraPicture* picture_p, PictureCoordinate_t horizontalCoordinate, PictureCoordinate_t startCoordinate,
	                       PictureCoordinate_t sweepWidth, vector<WhiteSegmentDescriptor>* whiteSegmentVector_p );

public:
	typedef enum {
		CMD_SNAPSHOT,
		CMD_CALIBRATE
	} CameraCommand;

	CameraModule();
	void addEventListener(IEvent::EventType type, IEventListener* listener);	//IEventGenerator
	void removeEventListener(IEvent::EventType type, IEventListener* listener); //IEventGenerator
	void executeCommand(int cmdID, std::list<int> arguments); 			//ICommandServer
	void registerCommands();											//ICommandServer
};

#endif /* CAMERAMODULE_H_ */
