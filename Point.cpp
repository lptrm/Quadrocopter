//
// Created by jano on 6/28/24.
//

#include "Point.h"

#include <iostream>
#include <utility>

Point::Point(const double latitue, const double longitude, std::string name) : m_latitude(latitue), m_longitude(longitude), m_name(std::move(name)){
}

void Point::Set(const double latitude, const double longitude, std::string name) {
    this->m_latitude = latitude;
    this->m_longitude = longitude;
    if (name != this->m_name && name.empty() && !this->m_name.empty()) {
        this->m_name = std::move(name);
    }
}

double Point::Latitude() const {
    return this->m_latitude;
}

double Point::Longitude() const {
    return this->m_longitude;
}

std::string Point::Name() {
    return this->m_name;
}

void Point::Print() const {
    std::cout << "Point: " << this->m_name << " (" << this->m_latitude << ", " << this->m_longitude << ")" << std::endl;
}
