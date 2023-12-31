#include "../Headers/Vehicle.h"
#include "../Headers/Car.h"
#include "../Headers/Motorcycle.h"
#include "../Headers/VehicleCatalog.h"

#include <vector>

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
    if constexpr (std::is_same<Car, VehicleType>::value) {
        std::string driveTrain;
        int  GVW;
        std::cout << "Enter drive train (4x4,rwd,fwd): ";
        std::cin >> driveTrain;
        std::cout << "Enter GVW: ";
        std::cin >> GVW;
        return new Car(brand, model, productionYear, wheelCount, driveTrain, GVW);
    }

    else if constexpr (std::is_same<VehicleType, Motorcycle>::value){
        std::string type;
        int vMax;
        std::cout << "Enter maximum speed: ";
        std::cin >> vMax;
        std::cout << "Enter type: ";
        std::cin >> type;
        return new Motorcycle (brand,model,productionYear,wheelCount, vMax, type);
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