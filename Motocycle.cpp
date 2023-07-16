//
// Created by Krul Kamil on 21.06.2023.
//

#include "Motocycle.h"

Motocycle::Motocycle(const std::string &vehicleBrand, const std::string &vehicleModel, const int vehicleProductionYear,
                     const int vehicleWheelCount, int vMax_parameter, const std::string& typ_parameter):
                   Vehicle(vehicleBrand, vehicleModel, vehicleProductionYear, vehicleWheelCount), vMax(vMax_parameter), type(typ_parameter)
                   {}