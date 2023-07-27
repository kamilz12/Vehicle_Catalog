#ifndef VEHICLE_CATALOG_CAR_H
#define VEHICLE_CATALOG_CAR_H

#include "Vehicle.h"
#include <sstream>

class Car: public Vehicle {
private:
    std::string driveTrain;
    int pessibleTotalWeight;


public:
    Car(const std::string& vehicleBrand, std::string vehicleModel, int vehicleProudctionYear, int vehicleWheelCount, const std::string& driveTrain, int GVW);
    virtual ~Car(){}
    virtual std::string saveText() const override;

    bool isDeliveryVan () const;
    virtual void writeToText() const override;

};


#endif //VEHICLE_CATALOG_CAR_H
