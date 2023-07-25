
#ifndef VEHICLE_CATALOG_VEHICLECATALOG_H
#define VEHICLE_CATALOG_VEHICLECATALOG_H
#include <sstream>
#include "Vehicle.h"
#include "Motorcycle.h"
#include "Car.h"
#include <iostream>
#include <map>
#include <fstream>
#include <string>
class VehicleCatalog {
private:
    std::map<int, Vehicle*> catalog;
public:

    void loadVehicleDataFromFile (const std::string& fileName);
    void saveVehicleDataToFile (const std::string& fileName);
    int getLastCatalogMapID();
    void editVehicle(Vehicle* vehicle, int ID);
    int getAvailableID ();                      //get available ID counting 0-free ID
    int getAvailableID (int startLookUpID);     // get available ID counting startLookUpID - freeID
    void addVehicle (Vehicle* vehicle);         // Add vehicle to next ID in order
    void addVehicle (Vehicle* vehicle, int ID); // Add vehicle to specified ID
    void showInfo() const;
    void busyID (Vehicle* vehicle);

    /*This method allow us to add more than one vehicle to our map catalog */
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
