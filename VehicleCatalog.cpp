
#include "VehicleCatalog.h"
#include <iostream>

/*Function */
int VehicleCatalog::getLastCatalogMapID(){
    if (catalog.empty()) {
        std::cout << "Map is empty!";
        return -1;
    }
    // Value of last ID in map
    return catalog.rbegin()->first;
}



/*We are printing information about each element in our map*/
void VehicleCatalog::showInfo() const{
    for (const auto& element : catalog) {
        std::cout << "ID: " << element.first << std::endl;
        if (element.second) {
            element.second->toText();
        } else {
            std::cout << "Vehicle object is null." << std::endl;
        }
        std::cout << std::endl;
    }
}
Vehicle* VehicleCatalog::operator[](int ID){
    if (catalog.count(ID) == 0) {
        std::cout << "Vehicle doesn't exist." << std::endl;
        return nullptr;
    }
    return catalog [ID];
}