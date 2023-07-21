
#include "Vehicle.h"
#ifndef KOLOKWIUM2_MOTOCYKL_H
#define KOLOKWIUM2_MOTOCYKL_H


class Motocycle : public Vehicle {
private:
    int vMax;
    const std::string type;
public:
    ~ Motocycle() {}
    Motocycle(const std::string &vehicleBrand, const std::string &vehicleModel, const int vehicleProductionYear,
              const int vehicleWheelCount, int vMax_parameter, const std::string& typ_parameter);

    virtual void writeToText()  const override{
        std::cout <<
                  "Brand:" << brand << std::endl <<
                  "Model: " << model << std::endl <<
                  "Year of production : " << vehProductionYear << std::endl <<
                  "Wheel Count: " << wheelCount << std::endl <<
                  "Maximum Speed : " << vMax << std::endl <<
                  "Type: " << type << std::endl << std::endl;
    }
};




#endif //KOLOKWIUM2_MOTOCYKL_H
