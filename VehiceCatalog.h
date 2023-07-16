//
// Created by Krul Kamil on 21.06.2023.
//

#ifndef KOLOKWIUM2_VEHICECATALOG_H
#define KOLOKWIUM2_VEHICECATALOG_H

#include "Vehicle.h"
#include "Motocycle.h"
#include "Cars.h"
#include <iostream>
#include <map>

class VehiceCatalog {
private:
    std::map<int, Vehicle*> catalog;

public:
    void addCar(int ID, Vehicle* vehicle) {
        catalog[ID] = vehicle;
    }

    void showInfo() const;

    Vehicle* operator[](int ID);

    void addCarsToCatalog ();
};

#endif //KOLOKWIUM2_VEHICECATALOG_H
