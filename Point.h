//
// Created by jano on 6/28/24.
//

#ifndef POINT_H
#define POINT_H
#include <string>


class Point {
public:
    Point(double latitue, double longitude, std::string name = "");
    void Set(double latitude, double longitude, std::string name = "");
    double Latitude() const;
    double Longitude() const;
    std::string Name();
    void Print() const;
private:
    double m_latitude {0.0};
    double m_longitude {0.0};
    std::string m_name;
};



#endif //POINT_H
