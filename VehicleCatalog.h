//
// Created by Krul Kamil on 21.06.2023.
//

#ifndef KOLOKWIUM2_VEHICLECATALOG_H
#define KOLOKWIUM2_VEHICLECATALOG_H

#include "Vehicle.h"
#include "Motocycle.h"
#include "Cars.h"
#include <iostream>
#include <map>

class VehicleCatalog {
private:
    /*a map of all vehicles*/
    std::map<int, Vehicle*> catalog;

public:
    void addVehicle(int ID, Vehicle* vehicle) {
        catalog[ID] = vehicle;
    }
    void showInfo() const;
    Vehicle* operator[](int ID);
    void addCarsToCatalog ();
};

#endif //KOLOKWIUM2_VEHICLECATALOG_H
