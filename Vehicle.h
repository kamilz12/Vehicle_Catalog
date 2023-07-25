
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#ifndef VEHICLE_CATALOG_VEHICLE_H
#define VEHICLE_CATALOG_VEHICLE_H

class Vehicle {
protected:
    const std::string brand;
    const std::string model;
    const int vehProductionYear;
    const int wheelCount;

public:
    virtual ~Vehicle() {}
    Vehicle(const std::string &brand, const std::string &model, const int vehProductionYear, const int wheelCount);
    virtual void writeToText() const = 0;
    virtual std::string saveText () const = 0;

};

#endif //KOLOKWIUM2_POJAZD_H
