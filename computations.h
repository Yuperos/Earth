#ifndef COMPUTATIONS_H
#define COMPUTATIONS_H

#include <QtGlobal>
#include <QPointF>
#include <QList>`


class Computations
{

public:
   Computations();
   static QPointF getCircleCenter(QList<QPointF> Matrix);
   static qreal distance(QPointF P1, QPointF P2);
   static inline qreal slope(QPointF P1, QPointF P2){ return (P2.y()-P1.y())/(P2.x()-P1.x()); }
   static inline qreal lineEquasionX(QList<QPointF> P);
   static inline qreal lineEquasionY(QList<QPointF> P, qreal x);
   static inline qreal rightTriangleAngle(qreal side1, qreal side2);
   static inline qreal triangleSide(qreal side1, qreal side2, qreal angle1);


};

#endif // COMPUTATIONS_H
