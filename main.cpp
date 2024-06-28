#include <iostream>

#include "PointList.h"

int main() {
    auto* pWayPoints = new PointList();
    pWayPoints->Add(*new Point(48.803242, 9.221968, std::string("70372 Stuttgart, Kreuznacher Strasse 47")));
    pWayPoints->Add(*new Point(48.811465, 9.229727, std::string("70374 Stuttgart, Gnesener Strasse 69")));
    pWayPoints->Add(*new Point(48.801934, 9.235032, std::string("70374 Stuttgart, Ruhrstrasse 50")));
    pWayPoints->Add(*new Point(48.803242, 9.221968, std::string("70372 Stuttgart, Kreunzancher Strasse 47")));
    pWayPoints->Print();
    std::cout << "Distance: " << pWayPoints->GetDistance() << std::endl;
    // deep copy
    const auto* pWayPoints2 = new PointList(*pWayPoints);
    delete pWayPoints;
    pWayPoints2->Print();
    std::cout << "Distance: " << pWayPoints2->GetDistance() << std::endl;

    return 0;
}
