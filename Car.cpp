
#include "Car.h"

Car::Car(const std::string& vehicleBrand, std::string vehicleModel, int vehicleProudctionYear, int vehicleWheelCount, const std::string& driveTrain, int GVW):
    Vehicle(vehicleBrand, vehicleModel, vehicleProudctionYear, vehicleWheelCount),
    driveTrain(driveTrain), pessibleTotalWeight(GVW){}