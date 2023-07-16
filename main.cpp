#include "Vehicle.h"
#include "Cars.h"
#include "Motocycle.h"
#include "VehicleCatalog.h"

int main() {
    VehicleCatalog vehicleCatalog;
    vehicleCatalog.addCarsToCatalog();
    vehicleCatalog.showInfo();
return 0;
}

