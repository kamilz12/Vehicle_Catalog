
#include "Vehicle.h"

#ifndef VEHICLE_CATALOG_CAR_H
#define VEHICLE_CATALOG_CAR_H


class Car: public Vehicle {
private:
    std::string driveTrain;
    int pessibleTotalWeight;
    virtual std::string saveText() const override{
        std::stringstream ss;
        ss << "Car" << "," << brand << "," << model<< "," <<vehProductionYear<< "," <<wheelCount<< "," <<driveTrain<< "," <<pessibleTotalWeight << std::endl;
        std::string dataFormula = ss.str();
        return dataFormula;
    }
public:
    Car (const std::string& vehicleBrand, std::string vehicleModel, int vehicleProudctionYear, int vehicleWheelCount, const std::string& driveTrain, int GVW);
     virtual ~Car(){}

    bool isDeliveryVan () const{
        if (pessibleTotalWeight > 3500){
            return false;
        }
        else {return true;}
    }

    virtual void writeToText() const override {
        std::cout <<
                  "Brand:" << brand << std::endl <<
                  "Model: " << model << std::endl <<
                  "Year of production: " << vehProductionYear << std::endl <<
                  "Wheel Count: " << wheelCount << std::endl <<
                  "Drive Train : " << driveTrain << std::endl <<
                  "Possible Total Weight: " << pessibleTotalWeight << std::endl;
    }


};


#endif //KOLOKWIUM2_SAMOCHOD_H