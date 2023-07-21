
#ifndef KOLOKWIUM2_VEHICLECATALOG_H
#define KOLOKWIUM2_VEHICLECATALOG_H
#include <sstream>
#include "Vehicle.h"
#include "Motocycle.h"
#include "Cars.h"
#include <iostream>
#include <map>
#include <fstream>
#include <string>
class VehicleCatalog {
private:
    std::map<int, Vehicle*> catalog;

public:
    void loadCatalogFromFile (const std::string& fileName);
    int getLastCatalogMapID();
    void editVehicle(Vehicle* vehicle, int ID);
    int getAvailableID ();
    int getAvailableID (int startLookUpID);
    void addVehicle (Vehicle* vehicle);
    void addVehicle (Vehicle* vehicle, int ID);
    void showInfo() const;

    /*This method allow us to add more than one vehicle*/
    template <typename VehicleType>
    void addVehicles(std::vector<VehicleType*>&veh_vector){
        int numVehiclesToAdd = static_cast<int>(veh_vector.size());
        /*Looking for first not used ID*/
        int nextID = getAvailableID();
        // Add vehicles to the catalog with sequential IDs
        for(int i=0; i<numVehiclesToAdd; i++) {
            nextID = getAvailableID(nextID);
            addVehicle(veh_vector[i], nextID);
            nextID++;
        }
    }

    void removeVehicle (int ID);
    const std::map<int, Vehicle*>& getCatalogMap() const {
        return catalog;
    }
    bool isIDNotPresentInCatalog(int ID) {
        return catalog.find(ID) == catalog.end();
    }
    Vehicle* operator[](int ID);
};

#endif //KOLOKWIUM2_VEHICLECATALOG_H
