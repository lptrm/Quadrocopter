//
// Created by jano on 6/28/24.
//

#include "DistanceCalculator.h"
#include "PointList.h"

PointList::PointList(PointList &other) {
    for (const auto m_point : other.m_points) {
        auto *new_point = new Point(m_point->Latitude(), m_point->Longitude(), m_point->Name());
        m_points.push_back(new_point);
    }
}

PointList::~PointList() {
    for (const auto m_point : m_points) {
        delete m_point;
    }
}

void PointList::Add(Point &point) {
    auto *new_point = new Point(point.Latitude(), point.Longitude(), point.Name());
    m_points.push_back(new_point);
}

void PointList::Print() const {
    for (const auto m_point : m_points) {
        m_point->Print();
    }
}

double PointList::GetDistance() const {
    auto distance = 0.0;
    for (int i = 0; i < m_points.size() - 1; i++) {
        distance += DistanceCalculator::Distance(*m_points[i], *m_points[i + 1]);
    }
    return distance;
}
