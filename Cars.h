//
// Created by Krul Kamil on 21.06.2023.
//
#include "Vehicle.h"

#ifndef KOLOKWIUM2_SAMOCHOD_H
#define KOLOKWIUM2_SAMOCHOD_H


class Cars: public Vehicle {
private:
    std::string driveTrain;
    int pessibleTotalWeight;
public:
    Cars (const std::string& brand, std::string model, int productionYear, int wheelCount, const std::string& driveTrain, int GVW);
    bool isDeliveryVan () const
    {
        if (pessibleTotalWeight > 3500){
            return false;
        }
        else {return true;}
    }
void toText() const override {
    std::cout <<
              "Brand:" << brand << std::endl <<
              "Model: " << model << std::endl <<
              "Year of production: " << vehProductionYear << std::endl <<
              "Wheel Count: " << wheelCount << std::endl <<
              "Drive Train : " << driveTrain << std::endl <<
              "Possible Total Weight: " << pessibleTotalWeight;
}
};


#endif //KOLOKWIUM2_SAMOCHOD_H
