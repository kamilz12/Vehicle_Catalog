
#include "Vehicle.h"
#ifndef VEHICLE_CATALOG_MOTORCYCLE_H
#define VEHICLE_CATALOG_MOTORCYCLE_H
#include <string>


class Motorcycle : public Vehicle {
private:
    int vMax;
    const std::string type;
    virtual std::string saveText () const override {
        std::stringstream ss;
        ss << "Motorcycle" << "," << brand << "," << model<< "," <<vehProductionYear<< "," <<wheelCount<< "," <<vMax<< "," <<type <<std::endl;
        std::string dataFormula = ss.str();
        return dataFormula;
    }
public:
    virtual ~ Motorcycle() {}
    Motorcycle(const std::string &vehicleBrand, const std::string &vehicleModel, const int vehicleProductionYear,
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
