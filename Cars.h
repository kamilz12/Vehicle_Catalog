
#include "Vehicle.h"

#ifndef KOLOKWIUM2_SAMOCHOD_H
#define KOLOKWIUM2_SAMOCHOD_H


class Cars: public Vehicle {
private:
    std::string driveTrain;
    int pessibleTotalWeight;
public:
    Cars (const std::string& vehicleBrand, std::string vehicleModel, int vehicleProudctionYear, int vehicleWheelCount, const std::string& driveTrain, int GVW);
     virtual ~Cars(){}

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
