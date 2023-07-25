
#include "Motorcycle.h"

Motorcycle::Motorcycle(const std::string &vehicleBrand, const std::string &vehicleModel, const int vehicleProductionYear,
                       const int vehicleWheelCount, int vMax_parameter, const std::string& typ_parameter):
                   Vehicle(vehicleBrand, vehicleModel, vehicleProductionYear, vehicleWheelCount), vMax(vMax_parameter), type(typ_parameter)
                   {}