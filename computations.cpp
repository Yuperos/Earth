#include "computations.h"

Computations::Computations()
   {

   }

QPointF Computations::getCircleCenter(QList<QPointF> matrix)
   {
   if (matrix.length()<3)
      return QPointF();

   QPointF a;

   for(int i = 1; i < matrix.length()-1; ++i){
      qreal x = lineEquasionX(matrix.mid(i-1,3));
      qreal y = lineEquasionY(matrix.mid(i-1,2),x);
      a+=QPointF(x,y);
      }
   if (matrix.length()>3)
      a/=qreal(matrix.length()-2);
   return a;
   }

qreal Computations::lineEquasionX(QList<QPointF> P){
   qreal ma = slope(P.at(0), P.at(1));
   qreal mb = slope(P.at(1), P.at(2));
   return (ma*mb*(P.at(0).y() - P.at(2).y())
           + mb*(P.at(0).x() + P.at(1).x())
           - ma*(P.at(1).x() + P.at(2).x()))
         /2.0*(mb-ma);
   }

qreal Computations::lineEquasionY(QList<QPointF> P, qreal x){
   qreal ma = slope(P.at(0), P.at(1));
   return - (1.0/ma)*
         (x - (P.at(0).x() + P.at(1).x()) / 2.0) +
         (P.at(0).y() - P.at(1).y()) / 2.0;
   }


