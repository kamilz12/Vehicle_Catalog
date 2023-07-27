#include <iostream>
#ifndef VEHICLE_CATALOG_VEHICLE_H
#define VEHICLE_CATALOG_VEHICLE_H

class Vehicle {
private:

protected:
    const std::string brand;
    const std::string model;
    const int vehProductionYear;
    const int wheelCount;

public:
    virtual ~Vehicle() {}
    Vehicle(const std::string &brand, const std::string &model, const int vehProductionYear, const int wheelCount)
            : brand(brand), model(model), vehProductionYear(vehProductionYear), wheelCount(wheelCount) {}
    virtual void writeToText() const = 0;
    virtual std::string saveText () const = 0;
};

#endif //VEHICLE_CATALOG_VEHICLE_H
