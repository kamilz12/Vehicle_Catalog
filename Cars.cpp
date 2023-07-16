//
// Created by Krul Kamil on 21.06.2023.
//

#include "Cars.h"

Cars::Cars(const std::string& brand, std::string model, int productionYear, int wheelCount, const std::string& driveTrain, int GVW):
    Vehicle(brand, model, productionYear, wheelCount),
    driveTrain(driveTrain), pessibleTotalWeight(GVW){}

