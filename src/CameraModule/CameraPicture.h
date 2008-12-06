/*
 * CameraPicture.h
 *
 *  Created on: Dec 6, 2008
 *      Author: johan
 */

#ifndef CAMERAPICTURE_H_
#define CAMERAPICTURE_H_

typedef unsigned int PictureCoordinate_t;
typedef unsigned int PixelData_t;

// TODO: Define picture resolution
//#define VERTICAL_RESOLUTION ???
//#define HORIZONTAL_RESOLUTION ???


/* class CameraPicture
 *
 * For storing and operating on a picture taken by
 * the camera.
 *
 */
class CameraPicture
{
private:
  // TODO: Define picture matrix of some kind.
public:
  CameraPicture() {}
  ~CameraPicture() {}

  PixelData_t readPixel( PictureCoordinate_t x, PictureCoordinate_t y );
};

#endif /* CAMERAPICTURE_H_ */
