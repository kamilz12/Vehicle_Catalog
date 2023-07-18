
#include <iostream>
#include <string>
#include <vector>
#ifndef KOLOKWIUM2_POJAZD_H
#define KOLOKWIUM2_POJAZD_H

class Vehicle {
protected:
    const std::string brand;
    const std::string model;
    const int vehProductionYear;
    const int wheelCount;

public:
    virtual ~Vehicle() {}
    Vehicle(const std::string &brand, const std::string &model, const int vehProductionYear, const int wheelCount);
    virtual void toText() const = 0;

};

#endif //KOLOKWIUM2_POJAZD_H
