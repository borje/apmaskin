#include "CameraModule.h"
#include "CommandInterpreterModule.h"
#include <iostream>

using namespace std;

void CameraModule::addEventListener(enum IEvent::EventType type, IEventListener* listener) {
}


void CameraModule::removeEventListener(enum IEvent::EventType type, IEventListener* listener) {
}

void CameraModule::executeCommand(int cmdID, std::list<int> arguments) {

}


void CameraModule::registerCommands() {
	CommandInterpreterModule *ci = CommandInterpreterModule::getInstance();
	ci->registerCommand("savesnapshot", CMD_SNAPSHOT, this);
}

CameraModule::CameraModule() {
}

/* void CameraModule::horizontalSweep()
 *
 * This function scans a horizontal line in a picture pointed out
 * by 'picture_p', from left to right, looking for white segments.
 *
 * Parameters:
 * [in]   picture_p             Pointer to the picture that shall be analyzed.
 *
 * [in]   verticalCoordinate    Vertical coordinate of the line that shall be
 *                               scanned.
 *
 * [in]   startCoordinate       Horizontal coordinate where the sweep shall
 *                              begin.
 *
 * [in]   sweepWidth            States the number of pixels that shall be included
 *                              in the sweep.
 *
 * [out] whiteSegmentVector_p   Points out the vector where the data about found
 *                              white segments shall be stored.
 *
 * Return values:
 * TRUE             Successful operation
 *
 * FALSE            Failed operation
 */
bool CameraModule::horizontalSweep( CameraPicture* picture_p, PictureCoordinate_t verticalCoordinate, PictureCoordinate_t startCoordinate,
                                     PictureCoordinate_t sweepWidth, vector<WhiteSegmentDescriptor>* whiteSegmentVector_p ) {
  if ( NULL == picture_p || NULL == whiteSegmentVector_p )
  {
    // TODO: Print error message? Throw exception?
    return false;
  }

  // TODO: Implement function
  return true;
}

/* bool CameraModule::verticalSweep()
 *
 * This function scans a vertical line in a picture pointed out
 * by 'picture_p', from bottom to top, looking for white segments.
 *
 * Parameters:
 * [in]   picture_p             Pointer to the picture that shall be analyzed.
 *
 * [in]   horizontalCoordinate  Horizontal coordinate of the line that shall be
 *                              scanned.
 *
 * [in]   startCoordinate       Vertical coordinate where the sweep shall
 *                              begin.
 *
 * [in]   sweepWidth            States the number of pixels that shall be included
 *                              in the sweep.
 *
 * [out]  whiteSegmentVector_p  Points out the vector where the data about found
 *                              white segments shall be stored.
 *
 * Return values:
 * TRUE             Successful operation
 *
 * FALSE            Failed operation
 */
bool CameraModule::verticalSweep( CameraPicture* picture_p, PictureCoordinate_t horizontalCoordinate, PictureCoordinate_t startCoordinate,
                         PictureCoordinate_t sweepWidth, vector<WhiteSegmentDescriptor>* whiteSegmentVector_p ) {
  if ( NULL == picture_p || NULL == whiteSegmentVector_p )
    {
      // TODO: Print error message? Throw exception?
      return false;
    }

    // TODO: Implement function
    return true;
}
