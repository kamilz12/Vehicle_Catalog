#ifndef VEHICLE_CATALOG_MOTORCYCLE_H
#define VEHICLE_CATALOG_MOTORCYCLE_H
#include "Vehicle.h"

#include <string>
#include <sstream>

class Motorcycle : public Vehicle {
private:
    int vMax;
    const std::string  type;

    virtual std::string saveText () const override;
public:
    virtual ~ Motorcycle() {}
    Motorcycle(const std::string &vehicleBrand, const std::string &vehicleModel, const int vehicleProductionYear,
               const int vehicleWheelCount, int vMax_parameter, const std::string& typ_parameter);

    virtual void writeToText()  const override;


};




#endif //KOLOKWIUM2_MOTOCYKL_H
