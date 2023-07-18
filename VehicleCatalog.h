
#ifndef KOLOKWIUM2_VEHICLECATALOG_H
#define KOLOKWIUM2_VEHICLECATALOG_H

#include "Vehicle.h"
#include "Motocycle.h"
#include "Cars.h"
#include <iostream>
#include <map>

class VehicleCatalog {
private:
    /*A map of all vehicles*/
    std::map<int, Vehicle*> catalog;

public:
    int getLastCatalogMapID();
    void addVehicle (Vehicle* vehicle, int ID){
        catalog[ID] = vehicle;
    }
    /*This method allow us to add more than one vehicle*/
    template <typename VehicleType>
    void addVehicles(std::vector<VehicleType*>&veh_vector){
        int lastID = getLastCatalogMapID();
        int numVehiclesToAdd = static_cast<int>(veh_vector.size());
        /*Looking for first not used ID*/
        int nextID = 0;
        while(!isIDNotPresentInCatalog(nextID)) {
            nextID++;
        }
        // Add vehicles to the catalog with sequential IDs
        for(int i=0; i<numVehiclesToAdd; i++) {
            // Find the next available ID
            while(!isIDNotPresentInCatalog(nextID)) {
                nextID++;
            }
// Add the vehicle to the catalog with the next available ID
            addVehicle(veh_vector[i], nextID);
            nextID++; // Increment the nextID to be used for the next vehicle
        }
    }
    const std::map<int, Vehicle*>& getCatalogMap() const {
        return catalog;
    }
    bool isIDNotPresentInCatalog(int ID) {
        return catalog.find(ID) == catalog.end();
    }
    void showInfo() const;

    Vehicle* operator[](int ID);
};

#endif //KOLOKWIUM2_VEHICLECATALOG_H
