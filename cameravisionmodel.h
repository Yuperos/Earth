#ifndef CAMERAVISIONMODEL_H
#define CAMERAVISIONMODEL_H

#include <QList>
#include <QPoint>

#include "computations.h"

namespace CVM{
   enum PointStorage
      {
      PS_EarthCenter = 0,
      PS_CameraAngle,
      PS_ISS_Earth
      };
   }

class CameraVisionModel
{
private:
   QList<QPointF> pointStorage;
public:
   CameraVisionModel();


};

#endif // CAMERAVISIONMODEL_H
