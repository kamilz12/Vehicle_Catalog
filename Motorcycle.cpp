
#include "Motorcycle.h"

Motorcycle::Motorcycle(const std::string &vehicleBrand, const std::string &vehicleModel, const int vehicleProductionYear,
                       const int vehicleWheelCount, int vMax_parameter, const std::string& typ_parameter):
                   Vehicle(vehicleBrand, vehicleModel, vehicleProductionYear, vehicleWheelCount), vMax(vMax_parameter), type(typ_parameter)
                   {}

std::string Motorcycle::saveText() const {
    std::stringstream ss;
    ss << "Motorcycle" << "," << brand << "," << model<< "," <<vehProductionYear<< "," <<wheelCount<< "," <<vMax<< "," <<type <<std::endl;
    std::string dataFormula = ss.str();
    return dataFormula;
}

void Motorcycle::writeToText() const {
    std::cout <<
              "Brand:" << brand << std::endl <<
              "Model: " << model << std::endl <<
              "Year of production : " << vehProductionYear << std::endl <<
              "Wheel Count: " << wheelCount << std::endl <<
              "Maximum Speed : " << vMax << std::endl <<
              "Type: " << type << std::endl << std::endl;
}
