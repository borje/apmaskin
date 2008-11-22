#ifndef CAMERAMODULE_H_
#define CAMERAMODULE_H_

#include "IEvent.h"
#include "IEventListener.h"
#include "IEventGenerator.h"
#include "ICommandServer.h"

#include <list>

using namespace std;

typedef unsigned int PictureCoordinate_t;

typedef struct WhiteSegmentDescriptor
{
  PictureCoordinate_t Leftmost;
  PictureCoordinate_t Rightmost;
  PictureCoordinate_t Center;
  PictureCoordinate_t Width;
} WhiteSegmentDescriptor_t;

#define WHITE_SEGMENT_ARRAY_LENGTH 10

typedef struct WhiteSegmentArray
{
  WhiteSegmentDescriptor_t[WHITE_SEGMENT_ARRAY_LENGTH] SegmentArray;  // TODO: Syntax error?!
  unsigned int NumberOfWhiteSegments;
} WhiteSegmentArray_t;

class CameraModule : public IEventGenerator, ICommandServer {
private:
	list<IEventListener*> positionErrorListeners;
	list<IEventListener*> intersectionFoundListeners;
	list<IEventListener*> numberFoundListeners;

	// TODO: Write function description here?
	WhiteSegmentArray_t horizontalSweep( PictureCoordinate_t startCoordinate, PictureCoordinate_t sweepWidth );

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
