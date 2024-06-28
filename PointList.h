//
// Created by jano on 6/28/24.
//

#ifndef POINTLIST_H
#define POINTLIST_H
#include <vector>

#include "Point.h"


class PointList {
public:
    PointList() = default;
    PointList(PointList& other);
    ~PointList();
    void Add(Point& point);
    void Print() const;
    double GetDistance() const;
private:
    std::vector<Point*> m_points;
};



#endif //POINTLIST_H
