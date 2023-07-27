
#include "Car.h"

Car::Car(const std::string& vehicleBrand, std::string vehicleModel, int vehicleProudctionYear, int vehicleWheelCount, const std::string& driveTrain, int GVW):
    Vehicle(vehicleBrand, vehicleModel, vehicleProudctionYear, vehicleWheelCount),
    driveTrain(driveTrain), pessibleTotalWeight(GVW){}

std::string Car::saveText() const{
    std::stringstream ss;
    ss << "Car" << "," << brand << "," << model<< "," <<vehProductionYear<< "," <<wheelCount<< "," <<driveTrain<< "," <<pessibleTotalWeight;
    std::string dataFormula = ss.str();
    return dataFormula;
}

bool Car::isDeliveryVan() const {
    if (pessibleTotalWeight > 3500){
        return false;
    }
    else {return true;}
}

void Car::writeToText() const {
    std::cout <<
              "Brand:" << brand << std::endl <<
              "Model: " << model << std::endl <<
              "Year of production: " << vehProductionYear << std::endl <<
              "Wheel Count: " << wheelCount << std::endl <<
              "Drive Train : " << driveTrain << std::endl <<
              "Possible Total Weight: " << pessibleTotalWeight << std::endl;
}

