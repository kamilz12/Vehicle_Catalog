//
// Created by Krul Kamil on 21.06.2023.
//
#include <iostream>
#include <string>

#ifndef KOLOKWIUM2_POJAZD_H
#define KOLOKWIUM2_POJAZD_H

class Vehicle {
protected:
    const std::string brand;
    const std::string model;
    const int vehProductionYear;
    const int wheelCount;

public:
    Vehicle(const std::string &brand, const std::string &model, const int vehProductionYear, const int wheelCount);
    Vehicle () = default;
    virtual void toText() const = 0;

};

#endif //KOLOKWIUM2_POJAZD_H
