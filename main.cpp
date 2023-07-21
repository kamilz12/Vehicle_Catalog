#include "Vehicle.h"
#include "Cars.h"
#include "Motocycle.h"
#include "VehicleCatalog.h"

template <typename VehicleType>
VehicleType* inputVehicleData (){
    std::string brand, model;
    int productionYear, wheelCount;
    std::cout << "Enter brand: ";
    std::cin >> brand;
    std::cout << "Enter model: ";
    std::cin >> model;
    std::cout << "Enter year of production: ";
    std::cin >> productionYear;
    std::cout << "Enter number of wheels: ";
    std::cin >> wheelCount;
    if constexpr (std::is_same<Cars, VehicleType>::value) {
        std::string driveTrain; //brand of car, model of car, (4x4,rwd,fwd)
        int  GVW; //year of production, number of wheels, possible total weight
        std::cout << "Enter drive train (4x4,rwd,fwd): ";
        std::cin >> driveTrain;
        std::cout << "Enter GVW: ";
        std::cin >> GVW;
        return new VehicleType(brand, model, productionYear, wheelCount, driveTrain, GVW);
    }

    else if constexpr (std::is_same<VehicleType, Motocycle>::value){
        std::string type;
        int vMax;
        std::cout << "Enter maximum speed: ";
        std::cin >> vMax;
        std::cout << "Enter type: ";
        std::cin >> type;
        return new VehicleType (brand,model,productionYear,wheelCount, vMax, type);
    }
}
/*That function allow us to add specifed number of cars to our catalog*/
template <typename VehicleType>
void addManyVehicles(VehicleCatalog& vehicleCatalog, int numVehicles) {
    std::vector<VehicleType*> vehicleVector;
    vehicleVector.reserve(numVehicles);

    for (int i = 0; i < numVehicles; i++) {
        vehicleVector.push_back(inputVehicleData<VehicleType>());
    }
    /*This line give as parameter vector of vehicle and add all inserted vehicle data to our catalog*/
    vehicleCatalog.addVehicles(vehicleVector);
}

template <typename VehicleType>
void editVehicle(VehicleCatalog& catalog, int ID) {
    Vehicle* editedVehicle = inputVehicleData<VehicleType>();
    catalog.editVehicle(editedVehicle,ID);
}

int main() {
    VehicleCatalog vehicleCatalog;
    std::string pathToVehicleData {"Data_files/vehicle-data.dat"};
    Vehicle* vehicle1 = new Cars("Honda", "Accord", 2005, 4, "4x4", 1300);
    vehicleCatalog.addVehicle(vehicle1,10);
    addManyVehicles<Cars>(vehicleCatalog,1);
    vehicleCatalog.loadCatalogFromFile(pathToVehicleData);
    vehicleCatalog.showInfo();
    addManyVehicles<Motocycle>(vehicleCatalog,1);

    return 0;
}

