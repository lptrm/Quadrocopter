//
// Created by jano on 6/28/24.
//

#ifndef DISTANCECALCULATOR_H
#define DISTANCECALCULATOR_H
#include "Point.h"


class DistanceCalculator {
public:
    static DistanceCalculator* GetInstance();

    static double Distance(const Point& from, const Point& to);
private:
    static DistanceCalculator* m_instance;
    DistanceCalculator() {}
    static double GetRadians(double degrees);
};



#endif //DISTANCECALCULATOR_H
