/*
 * WhiteSegmentDescriptor.h
 *
 *  Created on: Dec 6, 2008
 *      Author: johan
 */

#ifndef WHITESEGMENTDESCRIPTOR_H_
#define WHITESEGMENTDESCRIPTOR_H_

#include "CameraPicture.h"

enum SegmentOrientation
{
  VERTICAL,
  HORIZONTAL,
};

/* class WhiteSegmentDescriptor
 *
 * Used to store information about a white segment found
 * along a vertical or horizontal line in a camera picture.
 */
class WhiteSegmentDescriptor
{
public:
  SegmentOrientation segmentOrientation;
  PictureCoordinate_t fixedcoord; // Tells the horizontal coordinate of a vertical segment and the other way around
  PictureCoordinate_t leftmost;
  PictureCoordinate_t rightmost;
};

#endif /* WHITESEGMENTDESCRIPTOR_H_ */
