#include "Vehicle.h"
#include "Cars.h"
#include "Motocycle.h"
#include "VehicleCatalog.h"

template <typename VehicleType>
VehicleType* inputVehicleData (){

    if constexpr (std::is_same<Cars, VehicleType>::value) {
        std::string brand, model, driveTrain; //brand of car, model of car, (4x4,rwd,fwd)
        int productionYear, wheelCount, GVW; //year of production, number of wheels, possible total weight
        std::cout << "Enter brand: ";
        std::cin >> brand;
        std::cout << "Enter model: ";
        std::cin >> model;
        std::cout << "Enter year of production: ";
        std::cin >> productionYear;
        std::cout << "Enter number of wheels: ";
        std::cin >> wheelCount;
        std::cout << "Enter drive train (4x4,rwd,fwd): ";
        std::cin >> driveTrain;
        std::cout << "Enter GVW: ";
        std::cin >> GVW;
        return new VehicleType(brand, model, productionYear, wheelCount, driveTrain, GVW);
    }
    else if constexpr (std::is_same<VehicleType, Motocycle>::value){
        std::string brand, model,type;
        int productionYear, wheelCount,vMax;
        std::cout << "Enter brand: ";
        std::cin >> brand;
        std::cout << "Enter model: ";
        std::cin >> model;
        std::cout << "Enter year of production: ";
        std::cin >> productionYear;
        std::cout << "Enter number of wheels: ";
        std::cin >> wheelCount;
        std::cout << "Enter number of wheels: ";
        std::cin >> vMax;
        std::cout << "Enter number of wheels: ";
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



int main() {
    VehicleCatalog vehicleCatalog;
    Vehicle* vehicle1 = new Cars("abw", "e52", 2005, 4, "4", 4);
    vehicleCatalog.addVehicle(vehicle1, 1);
    Vehicle* vehicle2 = new Cars("bqw", "e53", 2004, 4, "4", 4);
    vehicleCatalog.addVehicle(vehicle2, 0);
    Vehicle* vehicle3 = new Cars("bws", "e51", 2002, 4, "4", 4);
    vehicleCatalog.addVehicle(vehicle3, 2);
    Vehicle* vehicle7 = new Cars("zbw", "e58", 2001, 4, "4", 4);
    vehicleCatalog.addVehicle(vehicle1, 7);

    addManyVehicles<Cars>(vehicleCatalog, 2);
    addManyVehicles<Motocycle>(vehicleCatalog, 3);
    //addManyVehicles<Motocycle>(vehicleCatalog, 2);
    vehicleCatalog.showInfo();
//  std::cout << vehicleCatalog [2];
return 0;
}

