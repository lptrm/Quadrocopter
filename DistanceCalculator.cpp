//
// Created by jano on 6/28/24.
//

#include <cmath>

#include "DistanceCalculator.h"

DistanceCalculator* DistanceCalculator::m_instance = nullptr;

DistanceCalculator * DistanceCalculator::GetInstance() {
    if (m_instance == nullptr) {
        m_instance = new DistanceCalculator();
    }
    return m_instance;
}

double DistanceCalculator::Distance(const Point &from, const Point &to) {
    double lat1 = GetRadians((from.Latitude() + to.Latitude()) / 2);
    double dx = 111.3 * cos(lat1) * (from.Longitude() - to.Longitude());
    double dy = 111.3 * (from.Latitude() - to.Latitude());
    return sqrt(dx * dx + dy * dy);
}

double DistanceCalculator::GetRadians(const double degrees) {
    return degrees * M_PI / 180;
}
