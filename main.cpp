#include "Sources/Vehicle_Catalog_Operations.cpp"

void Test ()
{
    VehicleCatalog vehicleCatalog;
    std::string pathToVehicleData {"../Data_files/vehicle-data.dat"};
    vehicleCatalog.loadVehicleDataFromFile(pathToVehicleData);
    Vehicle *vehicle1 = new Car("BMW", "4SERIES", 2003,4, "RWD",1450);
    vehicleCatalog.addVehicle(vehicle1,3);

    addManyVehicles<Motorcycle>(vehicleCatalog,1);
    addManyVehicles<Car>(vehicleCatalog,1);
    vehicleCatalog.showInfo();
    vehicleCatalog.saveVehicleDataToFile(pathToVehicleData);
}
int main() {
    Test();
    return 0;
}
