#include "Vehicle.h"
#include "Cars.h"
#include "Motocycle.h"
#include "VehiceCatalog.h"

int main() {
    VehiceCatalog vehicleCatalog;
    vehicleCatalog.addCarsToCatalog();
    vehicleCatalog.showInfo();
return 0;
}

