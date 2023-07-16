//
// Created by Krul Kamil on 21.06.2023.
//

#include "VehiceCatalog.h"

void VehiceCatalog::addCarsToCatalog(){
    int carsCount;
    std::cout << "How many cars do you want to add to your catalog?" << std::endl;
    std::cin >> carsCount;
    for (int i=0;i<carsCount;i++)
    {
        std::string brand,model,driveTrain;
        int produYear, wheelCount, GVW;
        std::cout << "enter brand: "; std::cin >> brand;
        std::cout << "enter model: "; std::cin >> model;
        std::cout << "enter year of production: "; std::cin >> produYear;
        std::cout << "enter number of wheels: "; std::cin >> wheelCount;
        std::cout << "enter drive train (4x4,rwd,fwd): "; std::cin >> driveTrain;
        std::cout << "enter GVW: "; std::cin >> GVW;
        Cars* car = new Cars (brand, model, produYear, wheelCount, driveTrain, GVW);
        Vehicle* vehice = car;
        this->addVehicle(i, vehice);
    }
}

void VehiceCatalog::showInfo() const
{
    for (const auto& element : catalog) {
        std::cout << "ID: " << element.first << std::endl;
        element.second->toText();
        std::cout << std::endl;
    }
}

Vehicle* VehiceCatalog::operator[](int ID){
    if (catalog.count(ID) == 0) {
        std::cout << "Vehicle doesn't exist." << std::endl;
        return nullptr; // zabezpieczenie gdybby podany id nie istnial
    }
    return catalog [ID];
}